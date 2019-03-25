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

// This file was generated by NvParameterized/scripts/GenParameterized.pl


#ifndef HEADER_EmitterDebugRenderParams_0p0_h
#define HEADER_EmitterDebugRenderParams_0p0_h

#include "NvParametersTypes.h"

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
#include "nvparameterized/NvParameterized.h"
#include "nvparameterized/NvParameterizedTraits.h"
#include "NvParameters.h"
#include "NvTraitsInternal.h"
#endif

namespace nvidia
{
namespace parameterized
{

#if PX_VC
#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())
#endif

namespace EmitterDebugRenderParams_0p0NS
{

struct ApexEmitterParameters_Type;
struct GroundEmitterParameters_Type;
struct ImpactEmitterParameters_Type;

struct ApexEmitterParameters_Type
{
	bool VISUALIZE_APEX_EMITTER_ACTOR;
	bool VISUALIZE_TOTAL_INJECTED_AABB;
	bool VISUALIZE_APEX_EMITTER_ACTOR_POSE;
	float THRESHOLD_DISTANCE_APEX_EMITTER_ACTOR_POSE;
	bool VISUALIZE_APEX_EMITTER_ACTOR_NAME;
	float THRESHOLD_DISTANCE_APEX_EMITTER_ACTOR_NAME;
};
struct GroundEmitterParameters_Type
{
	bool VISUALIZE_GROUND_EMITTER_ACTOR;
	bool VISUALIZE_GROUND_EMITTER_SPHERE;
	bool VISUALIZE_GROUND_EMITTER_GRID;
	bool VISUALIZE_GROUND_EMITTER_RAYCAST;
	bool VISUALIZE_GROUND_EMITTER_ACTOR_POSE;
	bool VISUALIZE_GROUND_EMITTER_ACTOR_NAME;
};
struct ImpactEmitterParameters_Type
{
	bool VISUALIZE_IMPACT_EMITTER_ACTOR;
	bool VISUALIZE_IMPACT_EMITTER_RAYCAST;
	bool VISUALIZE_IMPACT_EMITTER_ACTOR_NAME;
	float THRESHOLD_DISTANCE_IMPACT_EMITTER_ACTOR_NAME;
};

struct ParametersStruct
{

	ApexEmitterParameters_Type apexEmitterParameters;
	GroundEmitterParameters_Type groundEmitterParameters;
	ImpactEmitterParameters_Type impactEmitterParameters;

};

static const uint32_t checksum[] = { 0xbb1ad1fe, 0xd2ead5bd, 0x3bbab888, 0x61ee4e9a, };

} // namespace EmitterDebugRenderParams_0p0NS

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
class EmitterDebugRenderParams_0p0 : public NvParameterized::NvParameters, public EmitterDebugRenderParams_0p0NS::ParametersStruct
{
public:
	EmitterDebugRenderParams_0p0(NvParameterized::Traits* traits, void* buf = 0, int32_t* refCount = 0);

	virtual ~EmitterDebugRenderParams_0p0();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("EmitterDebugRenderParams");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const uint32_t ClassVersion = ((uint32_t)0 << 16) + (uint32_t)0;

	static uint32_t staticVersion(void)
	{
		return ClassVersion;
	}

	uint32_t version(void) const
	{
		return(staticVersion());
	}

	static const uint32_t ClassAlignment = 8;

	static const uint32_t* staticChecksum(uint32_t& bits)
	{
		bits = 8 * sizeof(EmitterDebugRenderParams_0p0NS::checksum);
		return EmitterDebugRenderParams_0p0NS::checksum;
	}

	static void freeParameterDefinitionTable(NvParameterized::Traits* traits);

	const uint32_t* checksum(uint32_t& bits) const
	{
		return staticChecksum(bits);
	}

	const EmitterDebugRenderParams_0p0NS::ParametersStruct& parameters(void) const
	{
		EmitterDebugRenderParams_0p0* tmpThis = const_cast<EmitterDebugRenderParams_0p0*>(this);
		return *(static_cast<EmitterDebugRenderParams_0p0NS::ParametersStruct*>(tmpThis));
	}

	EmitterDebugRenderParams_0p0NS::ParametersStruct& parameters(void)
	{
		return *(static_cast<EmitterDebugRenderParams_0p0NS::ParametersStruct*>(this));
	}

	virtual NvParameterized::ErrorType getParameterHandle(const char* long_name, NvParameterized::Handle& handle) const;
	virtual NvParameterized::ErrorType getParameterHandle(const char* long_name, NvParameterized::Handle& handle);

	void initDefaults(void);

protected:

	virtual const NvParameterized::DefinitionImpl* getParameterDefinitionTree(void);
	virtual const NvParameterized::DefinitionImpl* getParameterDefinitionTree(void) const;


	virtual void getVarPtr(const NvParameterized::Handle& handle, void*& ptr, size_t& offset) const;

private:

	void buildTree(void);
	void initDynamicArrays(void);
	void initStrings(void);
	void initReferences(void);
	void freeDynamicArrays(void);
	void freeStrings(void);
	void freeReferences(void);

	static bool mBuiltFlag;
	static NvParameterized::MutexType mBuiltFlagMutex;
};

class EmitterDebugRenderParams_0p0Factory : public NvParameterized::Factory
{
	static const char* const vptr;

public:

	virtual void freeParameterDefinitionTable(NvParameterized::Traits* traits)
	{
		EmitterDebugRenderParams_0p0::freeParameterDefinitionTable(traits);
	}

	virtual NvParameterized::Interface* create(NvParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(EmitterDebugRenderParams_0p0), EmitterDebugRenderParams_0p0::ClassAlignment);
		if (!NvParameterized::IsAligned(newPtr, EmitterDebugRenderParams_0p0::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class EmitterDebugRenderParams_0p0");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(EmitterDebugRenderParams_0p0)); // always initialize memory allocated to zero for default values
		return NV_PARAM_PLACEMENT_NEW(newPtr, EmitterDebugRenderParams_0p0)(paramTraits);
	}

	virtual NvParameterized::Interface* finish(NvParameterized::Traits* paramTraits, void* bufObj, void* bufStart, int32_t* refCount)
	{
		if (!NvParameterized::IsAligned(bufObj, EmitterDebugRenderParams_0p0::ClassAlignment)
		        || !NvParameterized::IsAligned(bufStart, EmitterDebugRenderParams_0p0::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class EmitterDebugRenderParams_0p0");
			return 0;
		}

		// Init NvParameters-part
		// We used to call empty constructor of EmitterDebugRenderParams_0p0 here
		// but it may call default constructors of members and spoil the data
		NV_PARAM_PLACEMENT_NEW(bufObj, NvParameterized::NvParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (EmitterDebugRenderParams_0p0*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (EmitterDebugRenderParams_0p0::staticClassName());
	}

	virtual uint32_t getVersion()
	{
		return (EmitterDebugRenderParams_0p0::staticVersion());
	}

	virtual uint32_t getAlignment()
	{
		return (EmitterDebugRenderParams_0p0::ClassAlignment);
	}

	virtual const uint32_t* getChecksum(uint32_t& bits)
	{
		return (EmitterDebugRenderParams_0p0::staticChecksum(bits));
	}
};
#endif // NV_PARAMETERIZED_ONLY_LAYOUTS

} // namespace parameterized
} // namespace nvidia

#if PX_VC
#pragma warning(pop)
#endif

#endif
