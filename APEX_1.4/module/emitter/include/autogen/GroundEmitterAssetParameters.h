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


#ifndef HEADER_GroundEmitterAssetParameters_h
#define HEADER_GroundEmitterAssetParameters_h

#include "NvParametersTypes.h"

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
#include "nvparameterized/NvParameterized.h"
#include "nvparameterized/NvParameterizedTraits.h"
#include "NvParameters.h"
#include "NvTraitsInternal.h"
#endif

namespace nvidia
{
namespace emitter
{

#if PX_VC
#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())
#endif

namespace GroundEmitterAssetParametersNS
{

struct emitterLodParamDesc_Type;
struct materialFactoryMapping_Type;

struct materialFactoryMapping_DynamicArray1D_Type
{
	materialFactoryMapping_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct emitterLodParamDesc_Type
{
	uint32_t version;
	float maxDistance;
	float distanceWeight;
	float speedWeight;
	float lifeWeight;
	float separationWeight;
	float bias;
};
struct materialFactoryMapping_Type
{
	NvParameterized::Interface* iofxAssetName;
	NvParameterized::Interface* iosAssetName;
	NvParameterized::DummyStringStruct physMatName;
	float weight;
	float maxSlopeAngle;
	emitterLodParamDesc_Type lodParamDesc;
};

struct ParametersStruct
{

	float density;
	float lifetimeLow;
	float lifetimeHigh;
	physx::PxVec3 velocityLow;
	physx::PxVec3 velocityHigh;
	float radius;
	float raycastHeight;
	float spawnHeight;
	uint32_t maxRaycastsPerFrame;
	NvParameterized::DummyStringStruct raycastCollisionGroupMaskName;
	materialFactoryMapping_DynamicArray1D_Type materialFactoryMapList;

};

static const uint32_t checksum[] = { 0xfc4571c0, 0x0157d03c, 0xb1fe5ac6, 0xd7d25449, };

} // namespace GroundEmitterAssetParametersNS

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
class GroundEmitterAssetParameters : public NvParameterized::NvParameters, public GroundEmitterAssetParametersNS::ParametersStruct
{
public:
	GroundEmitterAssetParameters(NvParameterized::Traits* traits, void* buf = 0, int32_t* refCount = 0);

	virtual ~GroundEmitterAssetParameters();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("GroundEmitterAssetParameters");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const uint32_t ClassVersion = ((uint32_t)0 << 16) + (uint32_t)2;

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
		bits = 8 * sizeof(GroundEmitterAssetParametersNS::checksum);
		return GroundEmitterAssetParametersNS::checksum;
	}

	static void freeParameterDefinitionTable(NvParameterized::Traits* traits);

	const uint32_t* checksum(uint32_t& bits) const
	{
		return staticChecksum(bits);
	}

	const GroundEmitterAssetParametersNS::ParametersStruct& parameters(void) const
	{
		GroundEmitterAssetParameters* tmpThis = const_cast<GroundEmitterAssetParameters*>(this);
		return *(static_cast<GroundEmitterAssetParametersNS::ParametersStruct*>(tmpThis));
	}

	GroundEmitterAssetParametersNS::ParametersStruct& parameters(void)
	{
		return *(static_cast<GroundEmitterAssetParametersNS::ParametersStruct*>(this));
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

class GroundEmitterAssetParametersFactory : public NvParameterized::Factory
{
	static const char* const vptr;

public:

	virtual void freeParameterDefinitionTable(NvParameterized::Traits* traits)
	{
		GroundEmitterAssetParameters::freeParameterDefinitionTable(traits);
	}

	virtual NvParameterized::Interface* create(NvParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(GroundEmitterAssetParameters), GroundEmitterAssetParameters::ClassAlignment);
		if (!NvParameterized::IsAligned(newPtr, GroundEmitterAssetParameters::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class GroundEmitterAssetParameters");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(GroundEmitterAssetParameters)); // always initialize memory allocated to zero for default values
		return NV_PARAM_PLACEMENT_NEW(newPtr, GroundEmitterAssetParameters)(paramTraits);
	}

	virtual NvParameterized::Interface* finish(NvParameterized::Traits* paramTraits, void* bufObj, void* bufStart, int32_t* refCount)
	{
		if (!NvParameterized::IsAligned(bufObj, GroundEmitterAssetParameters::ClassAlignment)
		        || !NvParameterized::IsAligned(bufStart, GroundEmitterAssetParameters::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class GroundEmitterAssetParameters");
			return 0;
		}

		// Init NvParameters-part
		// We used to call empty constructor of GroundEmitterAssetParameters here
		// but it may call default constructors of members and spoil the data
		NV_PARAM_PLACEMENT_NEW(bufObj, NvParameterized::NvParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (GroundEmitterAssetParameters*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (GroundEmitterAssetParameters::staticClassName());
	}

	virtual uint32_t getVersion()
	{
		return (GroundEmitterAssetParameters::staticVersion());
	}

	virtual uint32_t getAlignment()
	{
		return (GroundEmitterAssetParameters::ClassAlignment);
	}

	virtual const uint32_t* getChecksum(uint32_t& bits)
	{
		return (GroundEmitterAssetParameters::staticChecksum(bits));
	}
};
#endif // NV_PARAMETERIZED_ONLY_LAYOUTS

} // namespace emitter
} // namespace nvidia

#if PX_VC
#pragma warning(pop)
#endif

#endif
