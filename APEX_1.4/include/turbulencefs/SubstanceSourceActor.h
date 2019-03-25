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


#ifndef SUBSTANCE_SOURCE_ACTOR_H
#define SUBSTANCE_SOURCE_ACTOR_H

#include "Apex.h"
#include "Shape.h"

namespace nvidia
{
namespace apex
{

class SubstanceSourceAsset;


/**
 \brief Turbulence ScalarSource Actor class
 */
class SubstanceSourceActor : public Actor
{
protected:
	virtual ~SubstanceSourceActor() {}

public:
	///Returns the asset the instance has been created from.
	virtual SubstanceSourceAsset*		getSubstanceSourceAsset() const = 0;

	/** 
	\brief enable whether or not to use density in the simulation (enabling density reduces performance).
	
	If you are enabling density then you also need to add substance sources (without substance sources you will see no effect of density on the simulation, except a drop in performance)
	*/
	virtual void 						setEnabled(bool enable) = 0;

	///Returns true if substance source enabled
	virtual bool 						isEnabled() const = 0;

	///intersect the collision shape against a given AABB
	virtual bool						intersectAgainstAABB(PxBounds3) = 0;

	///Returns pointer to Shape of substance source
	virtual  Shape* 					getShape() const = 0;

	///If it is a box, cast to box class, return NULL otherwise
	virtual BoxShape* 					getBoxShape() = 0;

	///If it is a sphere, cast to sphere class, return NULL otherwise
	virtual SphereShape* 				getSphereShape() = 0;

	///Return average value of density
	virtual float						getAverageDensity() const = 0;

	///Return STD value of density
	virtual float						getStdDensity() const = 0;

	///Set average and STD values for density
	virtual void						setDensity(float averageDensity, float stdDensity) = 0;

	///Sets the uniform overall object scale
	virtual void						setCurrentScale(float scale) = 0;

	///Retrieves the uniform overall object scale
	virtual float						getCurrentScale(void) const = 0;

	virtual void						release() = 0;
};


}
} // end namespace nvidia

#endif 
