//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Copyright (c) 2018-2019 NVIDIA Corporation. All rights reserved.



#ifndef MODULE_H
#define MODULE_H

/*!
\file
\brief APEX Module API
*/

#include "ApexInterface.h"
#include "ApexSDK.h"
#include "foundation/PxSimpleTypes.h"

namespace nvidia
{
namespace apex
{

PX_PUSH_PACK_DEFAULT

class RenderableIterator;

/**
\brief Render lock modes.  These are used per-module to determine how render locking is done.
*/
struct RenderLockMode
{
	/**
	\brief Enum of render lock modes
	*/
	enum Enum
	{
		/**
		\brief	Disables render locking in the module scene.
		*/
		NO_RENDER_LOCK					= 0,

		/**
		\brief	Locks all apex actors in the module scene individually.
		*/
		PER_ACTOR_RENDER_LOCK			= 1,

		/**
		\brief	Locks an entire module scene with one lock.
		*/
		PER_MODULE_SCENE_RENDER_LOCK	= 2,
	};
};

/**
\brief A structure that holds two templated values, a min and a max
*/
template <typename T>
struct Range
{
	Range() {};
	/**
	\brief Constructor, sets min amd max values
	*/
	Range(T inMin, T inMax) : minimum(inMin), maximum(inMax) {};

	/**
	\brief operator ==
	*/
	bool operator== (const Range& r) const
	{
		return minimum == r.minimum && maximum == r.maximum;
	}

	/**
	\brief Minimal value
	*/
	T minimum;
	/**
	\brief Maximal value
	*/
	T maximum;
};



/**
\brief base class of all APEX modules

It describes the LODParameters and weights defined by the module.
*/
class Module : public ApexInterface
{
public:
	/**
	\brief Initialize the module
	\param[in] desc use Module::getDefaultModuleDesc() to get the descriptor necessary for initializing the module
	*/
	virtual void init(::NvParameterized::Interface& desc) = 0;

	/**
	\brief Returns the name of the module
	*/
	virtual const char* getName() const = 0;

	/**
	\brief Returns the unique ID of the module
	*/
	virtual AuthObjTypeID getModuleID() const = 0;

	/**
	\brief Returns the NvParameterized interface that contains module initialization parameters
	\note The module itself owns this object, so there's no need for the application to destroy it
	*/
	virtual ::NvParameterized::Interface* getDefaultModuleDesc()
	{
		return NULL;
	}

	/**
	\brief Allocate a renderable iterator

	Returns an Renderable iterator instance for the specified Scene.  The iterator
	will return pointers to renderables in this scene that were generated by this module. This
	is the preferred method for rendering IOFX actors.
	*/
	virtual RenderableIterator* createRenderableIterator(const Scene&) = 0;

	/**
	\brief Choose the locking mode for the module scene.  See RenderLockMode.

	Returns true if successful.
	*/
	virtual bool setRenderLockMode(RenderLockMode::Enum, Scene&) { return false; }

	/**
	\brief Returns the current render lock mode for the module scene.
	*/
	virtual RenderLockMode::Enum getRenderLockMode(const Scene&) const { return RenderLockMode::NO_RENDER_LOCK; }

	/**
	\brief Sets a render lock for the module scene.  Used when the SDK render lock mode is RenderLockMode::PER_MODULE_SCENE_RENDER_LOCK.  See ApexSDK::setRenderLockMode().
	
	Returns true iff successful.
	*/
	virtual	bool lockModuleSceneRenderLock(Scene&) { return false; }

	/**
	\brief Releases the render lock for the module scene.  See lockModuleSceneRenderLock().

	Returns true iff successful.
	*/
	virtual	bool unlockModuleSceneRenderLock(Scene&) { return false; }
};

PX_POP_PACK

}
} // end namespace nvidia::apex

#endif // MODULE_H
