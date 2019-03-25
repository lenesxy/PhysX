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


#ifndef HEADER_ClothingPhysicalMeshParameters_0p7_h
#define HEADER_ClothingPhysicalMeshParameters_0p7_h

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

namespace ClothingPhysicalMeshParameters_0p7NS
{

struct PhysicalSubmesh_Type;
struct PhysicalLod_Type;
struct ConstrainCoefficient_Type;
struct PhysicalMesh_Type;
struct SkinClothMapB_Type;
struct SkinClothMapC_Type;
struct TetraLink_Type;

struct VEC3_DynamicArray1D_Type
{
	physx::PxVec3* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct ConstrainCoefficient_DynamicArray1D_Type
{
	ConstrainCoefficient_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct U16_DynamicArray1D_Type
{
	uint16_t* buf;
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

struct U8_DynamicArray1D_Type
{
	uint8_t* buf;
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

struct PhysicalSubmesh_DynamicArray1D_Type
{
	PhysicalSubmesh_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct PhysicalLod_DynamicArray1D_Type
{
	PhysicalLod_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct SkinClothMapB_DynamicArray1D_Type
{
	SkinClothMapB_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct SkinClothMapC_DynamicArray1D_Type
{
	SkinClothMapC_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct SkinClothMapC_Type
{
	physx::PxVec3 vertexBary;
	uint32_t faceIndex0;
	physx::PxVec3 normalBary;
	uint32_t vertexIndexPlusOffset;
};
struct PhysicalSubmesh_Type
{
	uint32_t numIndices;
	uint32_t numVertices;
	uint32_t numMaxDistance0Vertices;
};
struct PhysicalLod_Type
{
	uint32_t costWithoutIterations;
	uint32_t submeshId;
	float solverIterationScale;
	float maxDistanceReduction;
};
struct ConstrainCoefficient_Type
{
	float maxDistance;
	float collisionSphereRadius;
	float collisionSphereDistance;
};
struct PhysicalMesh_Type
{
	uint32_t numVertices;
	uint32_t numIndices;
	uint32_t numBonesPerVertex;
	VEC3_DynamicArray1D_Type vertices;
	VEC3_DynamicArray1D_Type normals;
	VEC3_DynamicArray1D_Type skinningNormals;
	ConstrainCoefficient_DynamicArray1D_Type constrainCoefficients;
	U16_DynamicArray1D_Type boneIndices;
	F32_DynamicArray1D_Type boneWeights;
	U8_DynamicArray1D_Type optimizationData;
	bool hasNegativeBackstop;
	bool isClosed;
	U32_DynamicArray1D_Type indices;
	float maximumMaxDistance;
	float shortestEdgeLength;
	float averageEdgeLength;
	bool isTetrahedralMesh;
	bool flipNormals;
};
struct SkinClothMapB_Type
{
	physx::PxVec3 vtxTetraBary;
	uint32_t vertexIndexPlusOffset;
	physx::PxVec3 nrmTetraBary;
	uint32_t faceIndex0;
	uint32_t tetraIndex;
	uint32_t submeshIndex;
};
struct TetraLink_Type
{
	physx::PxVec3 vertexBary;
	uint32_t tetraIndex0;
	physx::PxVec3 normalBary;
	uint32_t _dummyForAlignment;
};

struct ParametersStruct
{

	PhysicalMesh_Type physicalMesh;
	PhysicalSubmesh_DynamicArray1D_Type submeshes;
	PhysicalLod_DynamicArray1D_Type physicalLods;
	SkinClothMapB_DynamicArray1D_Type transitionUpB;
	SkinClothMapC_DynamicArray1D_Type transitionUpC;
	float transitionUpThickness;
	float transitionUpOffset;
	SkinClothMapB_DynamicArray1D_Type transitionDownB;
	SkinClothMapC_DynamicArray1D_Type transitionDownC;
	float transitionDownThickness;
	float transitionDownOffset;
	uint32_t referenceCount;

};

static const uint32_t checksum[] = { 0x49914969, 0x5f81155d, 0xcf62be18, 0xc6aeb7b9, };

} // namespace ClothingPhysicalMeshParameters_0p7NS

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
class ClothingPhysicalMeshParameters_0p7 : public NvParameterized::NvParameters, public ClothingPhysicalMeshParameters_0p7NS::ParametersStruct
{
public:
	ClothingPhysicalMeshParameters_0p7(NvParameterized::Traits* traits, void* buf = 0, int32_t* refCount = 0);

	virtual ~ClothingPhysicalMeshParameters_0p7();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("ClothingPhysicalMeshParameters");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const uint32_t ClassVersion = ((uint32_t)0 << 16) + (uint32_t)7;

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
		bits = 8 * sizeof(ClothingPhysicalMeshParameters_0p7NS::checksum);
		return ClothingPhysicalMeshParameters_0p7NS::checksum;
	}

	static void freeParameterDefinitionTable(NvParameterized::Traits* traits);

	const uint32_t* checksum(uint32_t& bits) const
	{
		return staticChecksum(bits);
	}

	const ClothingPhysicalMeshParameters_0p7NS::ParametersStruct& parameters(void) const
	{
		ClothingPhysicalMeshParameters_0p7* tmpThis = const_cast<ClothingPhysicalMeshParameters_0p7*>(this);
		return *(static_cast<ClothingPhysicalMeshParameters_0p7NS::ParametersStruct*>(tmpThis));
	}

	ClothingPhysicalMeshParameters_0p7NS::ParametersStruct& parameters(void)
	{
		return *(static_cast<ClothingPhysicalMeshParameters_0p7NS::ParametersStruct*>(this));
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

class ClothingPhysicalMeshParameters_0p7Factory : public NvParameterized::Factory
{
	static const char* const vptr;

public:

	virtual void freeParameterDefinitionTable(NvParameterized::Traits* traits)
	{
		ClothingPhysicalMeshParameters_0p7::freeParameterDefinitionTable(traits);
	}

	virtual NvParameterized::Interface* create(NvParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(ClothingPhysicalMeshParameters_0p7), ClothingPhysicalMeshParameters_0p7::ClassAlignment);
		if (!NvParameterized::IsAligned(newPtr, ClothingPhysicalMeshParameters_0p7::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ClothingPhysicalMeshParameters_0p7");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(ClothingPhysicalMeshParameters_0p7)); // always initialize memory allocated to zero for default values
		return NV_PARAM_PLACEMENT_NEW(newPtr, ClothingPhysicalMeshParameters_0p7)(paramTraits);
	}

	virtual NvParameterized::Interface* finish(NvParameterized::Traits* paramTraits, void* bufObj, void* bufStart, int32_t* refCount)
	{
		if (!NvParameterized::IsAligned(bufObj, ClothingPhysicalMeshParameters_0p7::ClassAlignment)
		        || !NvParameterized::IsAligned(bufStart, ClothingPhysicalMeshParameters_0p7::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class ClothingPhysicalMeshParameters_0p7");
			return 0;
		}

		// Init NvParameters-part
		// We used to call empty constructor of ClothingPhysicalMeshParameters_0p7 here
		// but it may call default constructors of members and spoil the data
		NV_PARAM_PLACEMENT_NEW(bufObj, NvParameterized::NvParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (ClothingPhysicalMeshParameters_0p7*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (ClothingPhysicalMeshParameters_0p7::staticClassName());
	}

	virtual uint32_t getVersion()
	{
		return (ClothingPhysicalMeshParameters_0p7::staticVersion());
	}

	virtual uint32_t getAlignment()
	{
		return (ClothingPhysicalMeshParameters_0p7::ClassAlignment);
	}

	virtual const uint32_t* getChecksum(uint32_t& bits)
	{
		return (ClothingPhysicalMeshParameters_0p7::staticChecksum(bits));
	}
};
#endif // NV_PARAMETERIZED_ONLY_LAYOUTS

} // namespace parameterized
} // namespace nvidia

#if PX_VC
#pragma warning(pop)
#endif

#endif
