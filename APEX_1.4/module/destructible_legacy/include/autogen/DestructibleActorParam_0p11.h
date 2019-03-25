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


#ifndef HEADER_DestructibleActorParam_0p11_h
#define HEADER_DestructibleActorParam_0p11_h

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

namespace DestructibleActorParam_0p11NS
{

struct P3FilterData_Type;
struct P3ShapeFlags_Type;
struct P3PairFlag_Type;
struct P3ShapeDescTemplate_Type;
struct P3ActorFlags_Type;
struct P3ActorDescTemplate_Type;
struct P3BodyDescFlags_Type;
struct P3BodyDescTemplate_Type;
struct GroupsMask_Type;
struct LODWeights_Type;
struct ShapeDescFlags_Type;
struct ShapeDescTemplate_Type;
struct ContactPairFlag_Type;
struct ActorDescFlags_Type;
struct ActorDescTemplate_Type;
struct BodyDescFlags_Type;
struct BodyDescTemplate_Type;
struct DestructibleDepthParameters_Type;
struct DestructibleParametersFlag_Type;
struct DestructibleParameters_Type;

struct STRING_DynamicArray1D_Type
{
	NvParameterized::DummyStringStruct* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct DestructibleDepthParameters_DynamicArray1D_Type
{
	DestructibleDepthParameters_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct DestructibleDepthParameters_Type
{
	bool OVERRIDE_IMPACT_DAMAGE;
	bool OVERRIDE_IMPACT_DAMAGE_VALUE;
	bool IGNORE_POSE_UPDATES;
	bool IGNORE_RAYCAST_CALLBACKS;
	bool IGNORE_CONTACT_CALLBACKS;
	bool USER_FLAG_0;
	bool USER_FLAG_1;
	bool USER_FLAG_2;
	bool USER_FLAG_3;
};
struct P3BodyDescFlags_Type
{
	bool eKINEMATIC;
};
struct GroupsMask_Type
{
	bool useGroupsMask;
	uint32_t bits0;
	uint32_t bits1;
	uint32_t bits2;
	uint32_t bits3;
};
struct DestructibleParametersFlag_Type
{
	bool ACCUMULATE_DAMAGE;
	bool DEBRIS_TIMEOUT;
	bool DEBRIS_MAX_SEPARATION;
	bool CRUMBLE_SMALLEST_CHUNKS;
	bool ACCURATE_RAYCASTS;
	bool USE_VALID_BOUNDS;
};
struct P3FilterData_Type
{
	uint32_t word0;
	uint32_t word1;
	uint32_t word2;
	uint32_t word3;
};
struct ShapeDescFlags_Type
{
	bool NX_TRIGGER_ON_ENTER;
	bool NX_TRIGGER_ON_LEAVE;
	bool NX_TRIGGER_ON_STAY;
	bool NX_SF_VISUALIZATION;
	bool NX_SF_DISABLE_COLLISION;
	bool NX_SF_FEATURE_INDICES;
	bool NX_SF_DISABLE_RAYCASTING;
	bool NX_SF_POINT_CONTACT_FORCE;
	bool NX_SF_FLUID_DRAIN;
	bool NX_SF_FLUID_DISABLE_COLLISION;
	bool NX_SF_FLUID_TWOWAY;
	bool NX_SF_DISABLE_RESPONSE;
	bool NX_SF_DYNAMIC_DYNAMIC_CCD;
	bool NX_SF_DISABLE_SCENE_QUERIES;
	bool NX_SF_CLOTH_DRAIN;
	bool NX_SF_CLOTH_DISABLE_COLLISION;
	bool NX_SF_CLOTH_TWOWAY;
	bool NX_SF_SOFTBODY_DRAIN;
	bool NX_SF_SOFTBODY_DISABLE_COLLISION;
	bool NX_SF_SOFTBODY_TWOWAY;
};
struct ShapeDescTemplate_Type
{
	ShapeDescFlags_Type flags;
	uint16_t collisionGroup;
	GroupsMask_Type groupsMask;
	uint16_t materialIndex;
	float density;
	float skinWidth;
	uint64_t userData;
	uint64_t name;
};
struct DestructibleParameters_Type
{
	float damageThreshold;
	float damageToRadius;
	float damageCap;
	float forceToDamage;
	float impactVelocityThreshold;
	float materialStrength;
	uint32_t minimumFractureDepth;
	int32_t impactDamageDefaultDepth;
	int32_t debrisDepth;
	uint32_t essentialDepth;
	float debrisLifetimeMin;
	float debrisLifetimeMax;
	float debrisMaxSeparationMin;
	float debrisMaxSeparationMax;
	float debrisDestructionProbability;
	physx::PxBounds3 validBounds;
	float maxChunkSpeed;
	DestructibleParametersFlag_Type flags;
	float fractureImpulseScale;
	uint16_t dynamicChunkDominanceGroup;
	GroupsMask_Type dynamicChunksGroupsMask;
};
struct P3ShapeFlags_Type
{
	bool eSIMULATION_SHAPE;
	bool eSCENE_QUERY_SHAPE;
	bool eTRIGGER_SHAPE;
	bool eVISUALIZATION;
	bool ePARTICLE_DRAIN;
	bool eDEFORMABLE_DRAIN;
	bool eUSE_SWEPT_BOUNDS;
};
struct P3ShapeDescTemplate_Type
{
	P3ShapeFlags_Type flags;
	P3FilterData_Type simulationFilterData;
	P3FilterData_Type queryFilterData;
	uint64_t material;
	float contactOffset;
	float restOffset;
	uint64_t userData;
	uint64_t name;
};
struct P3ActorFlags_Type
{
	bool eVISUALIZATION;
	bool eDISABLE_GRAVITY;
	bool eSEND_SLEEP_NOTIFIES;
};
struct P3BodyDescTemplate_Type
{
	float density;
	P3BodyDescFlags_Type flags;
	float sleepThreshold;
	float wakeUpCounter;
	float linearDamping;
	float angularDamping;
	float maxAngularVelocity;
	uint32_t solverIterationCount;
	float contactReportThreshold;
	float sleepLinearVelocity;
};
struct ContactPairFlag_Type
{
	bool NX_IGNORE_PAIR;
	bool NX_NOTIFY_ON_START_TOUCH;
	bool NX_NOTIFY_ON_END_TOUCH;
	bool NX_NOTIFY_ON_TOUCH;
	bool NX_NOTIFY_ON_IMPACT;
	bool NX_NOTIFY_ON_ROLL;
	bool NX_NOTIFY_ON_SLIDE;
	bool NX_NOTIFY_FORCES;
	bool NX_NOTIFY_ON_START_TOUCH_FORCE_THRESHOLD;
	bool NX_NOTIFY_ON_END_TOUCH_FORCE_THRESHOLD;
	bool NX_NOTIFY_ON_TOUCH_FORCE_THRESHOLD;
	bool NX_NOTIFY_CONTACT_MODIFICATION;
};
struct LODWeights_Type
{
	float maxDistance;
	float distanceWeight;
	float maxAge;
	float ageWeight;
	float bias;
};
struct BodyDescFlags_Type
{
	bool NX_BF_DISABLE_GRAVITY;
	bool NX_BF_FILTER_SLEEP_VEL;
	bool NX_BF_ENERGY_SLEEP_TEST;
	bool NX_BF_VISUALIZATION;
};
struct BodyDescTemplate_Type
{
	BodyDescFlags_Type flags;
	float wakeUpCounter;
	float linearDamping;
	float angularDamping;
	float maxAngularVelocity;
	float CCDMotionThreshold;
	float sleepLinearVelocity;
	float sleepAngularVelocity;
	uint32_t solverIterationCount;
	float sleepEnergyThreshold;
	float sleepDamping;
	float contactReportThreshold;
};
struct P3PairFlag_Type
{
	bool eRESOLVE_CONTACTS;
	bool eMODIFY_CONTACTS;
	bool eNOTIFY_TOUCH_FOUND;
	bool eNOTIFY_TOUCH_PERSISTS;
	bool eNOTIFY_TOUCH_LOST;
	bool eNOTIFY_THRESHOLD_FORCE_FOUND;
	bool eNOTIFY_THRESHOLD_FORCE_PERSISTS;
	bool eNOTIFY_THRESHOLD_FORCE_LOST;
	bool eNOTIFY_CONTACT_POINTS;
	bool eNOTIFY_CONTACT_FORCES;
	bool eNOTIFY_CONTACT_FORCE_PER_POINT;
	bool eNOTIFY_CONTACT_FEATURE_INDICES_PER_POINT;
	bool eSWEPT_CONTACT_GENERATION;
	bool eSWEPT_INTEGRATION_LINEAR;
	bool eSWEPT_INTEGRATION_FULL;
	bool eCONTACT_DEFAULT;
	bool eTRIGGER_DEFAULT;
};
struct P3ActorDescTemplate_Type
{
	P3ActorFlags_Type flags;
	uint8_t dominanceGroup;
	uint8_t ownerClient;
	uint32_t clientBehaviorBits;
	P3PairFlag_Type contactReportFlags;
	uint64_t userData;
	uint64_t name;
};
struct ActorDescFlags_Type
{
	bool NX_AF_DISABLE_COLLISION;
	bool NX_AF_DISABLE_RESPONSE;
	bool NX_AF_LOCK_COM;
	bool NX_AF_FLUID_DISABLE_COLLISION;
	bool NX_AF_CONTACT_MODIFICATION;
	bool NX_AF_FORCE_CONE_FRICTION;
	bool NX_AF_USER_ACTOR_PAIR_FILTERING;
};
struct ActorDescTemplate_Type
{
	ActorDescFlags_Type flags;
	float density;
	uint16_t actorCollisionGroup;
	uint16_t dominanceGroup;
	ContactPairFlag_Type contactReportFlags;
	uint16_t forceFieldMaterial;
	uint64_t userData;
	uint64_t name;
	uint64_t compartment;
};

struct ParametersStruct
{

	NvParameterized::DummyStringStruct crumbleEmitterName;
	float crumbleParticleSpacing;
	NvParameterized::DummyStringStruct dustEmitterName;
	float dustParticleSpacing;
	float globalPose[12];
	physx::PxVec3 scale;
	bool dynamic;
	uint32_t supportDepth;
	bool formExtendedStructures;
	bool keepPreviousFrameBoneBuffer;
	bool useAssetDefinedSupport;
	bool useWorldSupport;
	bool renderStaticChunksSeparately;
	bool createChunkEvents;
	STRING_DynamicArray1D_Type overrideSkinnedMaterialNames;
	STRING_DynamicArray1D_Type overrideStaticMaterialNames;
	float sleepVelocitySmoothingFactor;
	DestructibleParameters_Type destructibleParameters;
	DestructibleDepthParameters_DynamicArray1D_Type depthParameters;
	ShapeDescTemplate_Type shapeDescTemplate;
	ActorDescTemplate_Type actorDescTemplate;
	BodyDescTemplate_Type bodyDescTemplate;
	P3ShapeDescTemplate_Type p3ShapeDescTemplate;
	P3ActorDescTemplate_Type p3ActorDescTemplate;
	P3BodyDescTemplate_Type p3BodyDescTemplate;

};

static const uint32_t checksum[] = { 0xdd5dd270, 0x74d8996a, 0x63268e74, 0xb3dc6115, };

} // namespace DestructibleActorParam_0p11NS

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
class DestructibleActorParam_0p11 : public NvParameterized::NvParameters, public DestructibleActorParam_0p11NS::ParametersStruct
{
public:
	DestructibleActorParam_0p11(NvParameterized::Traits* traits, void* buf = 0, int32_t* refCount = 0);

	virtual ~DestructibleActorParam_0p11();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("DestructibleActorParam");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const uint32_t ClassVersion = ((uint32_t)0 << 16) + (uint32_t)11;

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
		bits = 8 * sizeof(DestructibleActorParam_0p11NS::checksum);
		return DestructibleActorParam_0p11NS::checksum;
	}

	static void freeParameterDefinitionTable(NvParameterized::Traits* traits);

	const uint32_t* checksum(uint32_t& bits) const
	{
		return staticChecksum(bits);
	}

	const DestructibleActorParam_0p11NS::ParametersStruct& parameters(void) const
	{
		DestructibleActorParam_0p11* tmpThis = const_cast<DestructibleActorParam_0p11*>(this);
		return *(static_cast<DestructibleActorParam_0p11NS::ParametersStruct*>(tmpThis));
	}

	DestructibleActorParam_0p11NS::ParametersStruct& parameters(void)
	{
		return *(static_cast<DestructibleActorParam_0p11NS::ParametersStruct*>(this));
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

class DestructibleActorParam_0p11Factory : public NvParameterized::Factory
{
	static const char* const vptr;

public:

	virtual void freeParameterDefinitionTable(NvParameterized::Traits* traits)
	{
		DestructibleActorParam_0p11::freeParameterDefinitionTable(traits);
	}

	virtual NvParameterized::Interface* create(NvParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(DestructibleActorParam_0p11), DestructibleActorParam_0p11::ClassAlignment);
		if (!NvParameterized::IsAligned(newPtr, DestructibleActorParam_0p11::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class DestructibleActorParam_0p11");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(DestructibleActorParam_0p11)); // always initialize memory allocated to zero for default values
		return NV_PARAM_PLACEMENT_NEW(newPtr, DestructibleActorParam_0p11)(paramTraits);
	}

	virtual NvParameterized::Interface* finish(NvParameterized::Traits* paramTraits, void* bufObj, void* bufStart, int32_t* refCount)
	{
		if (!NvParameterized::IsAligned(bufObj, DestructibleActorParam_0p11::ClassAlignment)
		        || !NvParameterized::IsAligned(bufStart, DestructibleActorParam_0p11::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class DestructibleActorParam_0p11");
			return 0;
		}

		// Init NvParameters-part
		// We used to call empty constructor of DestructibleActorParam_0p11 here
		// but it may call default constructors of members and spoil the data
		NV_PARAM_PLACEMENT_NEW(bufObj, NvParameterized::NvParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (DestructibleActorParam_0p11*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (DestructibleActorParam_0p11::staticClassName());
	}

	virtual uint32_t getVersion()
	{
		return (DestructibleActorParam_0p11::staticVersion());
	}

	virtual uint32_t getAlignment()
	{
		return (DestructibleActorParam_0p11::ClassAlignment);
	}

	virtual const uint32_t* getChecksum(uint32_t& bits)
	{
		return (DestructibleActorParam_0p11::staticChecksum(bits));
	}
};
#endif // NV_PARAMETERIZED_ONLY_LAYOUTS

} // namespace parameterized
} // namespace nvidia

#if PX_VC
#pragma warning(pop)
#endif

#endif
