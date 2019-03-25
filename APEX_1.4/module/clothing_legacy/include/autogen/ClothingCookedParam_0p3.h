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


#ifndef HEADER_ClothingCookedParam_0p3_h
#define HEADER_ClothingCookedParam_0p3_h

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

namespace ClothingCookedParam_0p3NS
{

struct CookedPhysicalMesh_Type;

struct U8_DynamicArray1D_Type
{
	uint8_t* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct POINTER_DynamicArray1D_Type
{
	void** buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct CookedPhysicalMesh_DynamicArray1D_Type
{
	CookedPhysicalMesh_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct F32_DynamicArray1D_Type
{
	float* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct U32_DynamicArray1D_Type
{
	uint32_t* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct VEC3_DynamicArray1D_Type
{
	physx::PxVec3* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct CookedPhysicalMesh_Type
{
	uint32_t physicalMeshId;
	uint32_t cookedDataOffset;
	uint32_t cookedDataLength;
	void* deformableMeshPointer;
	uint32_t deformableInvParticleWeightsOffset;
	uint32_t virtualParticleIndicesOffset;
	uint32_t virtualParticleIndicesLength;
};

struct ParametersStruct
{

	float actorScale;
	U8_DynamicArray1D_Type convexCookedData;
	POINTER_DynamicArray1D_Type convexMeshPointers;
	CookedPhysicalMesh_DynamicArray1D_Type cookedPhysicalMeshes;
	U8_DynamicArray1D_Type deformableCookedData;
	uint32_t cookedDataVersion;
	F32_DynamicArray1D_Type deformableInvParticleWeights;
	U32_DynamicArray1D_Type virtualParticleIndices;
	VEC3_DynamicArray1D_Type virtualParticleWeights;

};

static const uint32_t checksum[] = { 0x140bacb3, 0x5ea948eb, 0x14dd612e, 0x6ad11b93, };

} // namespace ClothingCookedParam_0p3NS

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
class ClothingCookedParam_0p3 : public NvParameterized::NvParameters, public ClothingCookedParam_0p3NS::ParametersStruct
{
public:
	ClothingCookedParam_0p3(NvParameterized::Traits* traits, void* buf = 0, int32_t* refCount = 0);

	virtual ~ClothingCookedParam_0p3();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("ClothingCookedParam");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const uint32_t ClassVersion = ((uint32_t)0 << 16) + (uint32_t)3;

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
		bits = 8 * sizeof(ClothingCookedParam_0p3NS::checksum);
		return ClothingCookedParam_0p3NS::checksum;
	}

	static void freeParameterDefinitionTable(NvParameterized::Traits* traits);

	const uint32_t* checksum(uint32_t& bits) const
	{
		return staticChecksum(bits);
	}

	const ClothingCookedParam_0p3NS::ParametersStruct& parameters(void) const
	{
		ClothingCookedParam_0p3* tmpThis = const_cast<ClothingCookedParam_0p3*>(this);
		return *(static_cast<ClothingCookedParam_0p3NS::ParametersStruct*>(tmpThis));
	}

	ClothingCookedParam_0p3NS::ParametersStruct& parameters(void)
	{
		return *(static_cast<ClothingCookedParam_0p3NS::ParametersStruct*>(this));
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

class ClothingCookedParam_0p3Factory : public NvParameterized::Factory
{
	static const char* const vptr;

public:

	virtual void freeParameterDefinitionTable(NvParameterized::Traits* traits)
	{
		ClothingCookedParam_0p3::freeParameterDefinitionTable(traits);
	}

	virtual NvParameterized::Interface* create(NvParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(ClothingCookedParam_0p3), ClothingCookedParam_0p3::ClassAlignment);
		if (!NvParameterized::IsAligned(newPtr, ClothingCookedParam_0p3::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ClothingCookedParam_0p3");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(ClothingCookedParam_0p3)); // always initialize memory allocated to zero for default values
		return NV_PARAM_PLACEMENT_NEW(newPtr, ClothingCookedParam_0p3)(paramTraits);
	}

	virtual NvParameterized::Interface* finish(NvParameterized::Traits* paramTraits, void* bufObj, void* bufStart, int32_t* refCount)
	{
		if (!NvParameterized::IsAligned(bufObj, ClothingCookedParam_0p3::ClassAlignment)
		        || !NvParameterized::IsAligned(bufStart, ClothingCookedParam_0p3::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ClothingCookedParam_0p3");
			return 0;
		}

		// Init NvParameters-part
		// We used to call empty constructor of ClothingCookedParam_0p3 here
		// but it may call default constructors of members and spoil the data
		NV_PARAM_PLACEMENT_NEW(bufObj, NvParameterized::NvParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (ClothingCookedParam_0p3*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (ClothingCookedParam_0p3::staticClassName());
	}

	virtual uint32_t getVersion()
	{
		return (ClothingCookedParam_0p3::staticVersion());
	}

	virtual uint32_t getAlignment()
	{
		return (ClothingCookedParam_0p3::ClassAlignment);
	}

	virtual const uint32_t* getChecksum(uint32_t& bits)
	{
		return (ClothingCookedParam_0p3::staticChecksum(bits));
	}
};
#endif // NV_PARAMETERIZED_ONLY_LAYOUTS

} // namespace parameterized
} // namespace nvidia

#if PX_VC
#pragma warning(pop)
#endif

#endif
