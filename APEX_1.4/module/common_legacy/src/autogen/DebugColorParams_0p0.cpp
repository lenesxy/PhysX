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


#include "DebugColorParams_0p0.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace parameterized
{

using namespace DebugColorParams_0p0NS;

const char* const DebugColorParams_0p0Factory::vptr =
    NvParameterized::getVptr<DebugColorParams_0p0, DebugColorParams_0p0::ClassAlignment>();

const uint32_t NumParamDefs = 37;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
	24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 36 },
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Default), NULL, 0 }, // Default
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->PoseArrows), NULL, 0 }, // PoseArrows
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->MeshStatic), NULL, 0 }, // MeshStatic
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->MeshDynamic), NULL, 0 }, // MeshDynamic
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Shape), NULL, 0 }, // Shape
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Text0), NULL, 0 }, // Text0
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Text1), NULL, 0 }, // Text1
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->ForceArrowsLow), NULL, 0 }, // ForceArrowsLow
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->ForceArrowsNorm), NULL, 0 }, // ForceArrowsNorm
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->ForceArrowsHigh), NULL, 0 }, // ForceArrowsHigh
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Color0), NULL, 0 }, // Color0
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Color1), NULL, 0 }, // Color1
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Color2), NULL, 0 }, // Color2
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Color3), NULL, 0 }, // Color3
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Color4), NULL, 0 }, // Color4
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Color5), NULL, 0 }, // Color5
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Red), NULL, 0 }, // Red
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Green), NULL, 0 }, // Green
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Blue), NULL, 0 }, // Blue
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->DarkRed), NULL, 0 }, // DarkRed
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->DarkGreen), NULL, 0 }, // DarkGreen
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->DarkBlue), NULL, 0 }, // DarkBlue
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->LightRed), NULL, 0 }, // LightRed
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->LightGreen), NULL, 0 }, // LightGreen
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->LightBlue), NULL, 0 }, // LightBlue
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Purple), NULL, 0 }, // Purple
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->DarkPurple), NULL, 0 }, // DarkPurple
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Yellow), NULL, 0 }, // Yellow
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Orange), NULL, 0 }, // Orange
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Gold), NULL, 0 }, // Gold
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Emerald), NULL, 0 }, // Emerald
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->White), NULL, 0 }, // White
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Black), NULL, 0 }, // Black
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->Gray), NULL, 0 }, // Gray
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->LightGray), NULL, 0 }, // LightGray
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->DarkGray), NULL, 0 }, // DarkGray
};


bool DebugColorParams_0p0::mBuiltFlag = false;
NvParameterized::MutexType DebugColorParams_0p0::mBuiltFlagMutex;

DebugColorParams_0p0::DebugColorParams_0p0(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &DebugColorParams_0p0FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

DebugColorParams_0p0::~DebugColorParams_0p0()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void DebugColorParams_0p0::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~DebugColorParams_0p0();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* DebugColorParams_0p0::getParameterDefinitionTree(void)
{
	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

const NvParameterized::DefinitionImpl* DebugColorParams_0p0::getParameterDefinitionTree(void) const
{
	DebugColorParams_0p0* tmpParam = const_cast<DebugColorParams_0p0*>(this);

	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			tmpParam->buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

NvParameterized::ErrorType DebugColorParams_0p0::getParameterHandle(const char* long_name, Handle& handle) const
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

NvParameterized::ErrorType DebugColorParams_0p0::getParameterHandle(const char* long_name, Handle& handle)
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

void DebugColorParams_0p0::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<DebugColorParams_0p0::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void DebugColorParams_0p0::freeParameterDefinitionTable(NvParameterized::Traits* traits)
{
	if (!traits)
	{
		return;
	}

	if (!mBuiltFlag) // Double-checked lock
	{
		return;
	}

	NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);

	if (!mBuiltFlag)
	{
		return;
	}

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		ParamDefTable[i].~DefinitionImpl();
	}

	traits->free(ParamDefTable);

	mBuiltFlag = false;
}

#define PDEF_PTR(index) (&ParamDefTable[index])

void DebugColorParams_0p0::buildTree(void)
{

	uint32_t allocSize = sizeof(NvParameterized::DefinitionImpl) * NumParamDefs;
	ParamDefTable = (NvParameterized::DefinitionImpl*)(mParameterizedTraits->alloc(allocSize));
	memset(ParamDefTable, 0, allocSize);

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		NV_PARAM_PLACEMENT_NEW(ParamDefTable + i, NvParameterized::DefinitionImpl)(*mParameterizedTraits);
	}

	// Initialize DefinitionImpl node: nodeIndex=0, longName=""
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[0];
		ParamDef->init("", TYPE_STRUCT, "STRUCT", true);






	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="Default"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("Default", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Default color value", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="PoseArrows"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("PoseArrows", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Pose arrows color value", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="MeshStatic"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("MeshStatic", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Static mesh color value", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="MeshDynamic"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("MeshDynamic", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Dynamic mesh color value", true);
		ParamDefTable[4].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="Shape"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("Shape", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Shape color value", true);
		ParamDefTable[5].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="Text0"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("Text0", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Text0 color value", true);
		ParamDefTable[6].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="Text1"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("Text1", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Text1 color value", true);
		ParamDefTable[7].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=8, longName="ForceArrowsLow"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[8];
		ParamDef->init("ForceArrowsLow", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Force arrows color value (low value)", true);
		ParamDefTable[8].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=9, longName="ForceArrowsNorm"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[9];
		ParamDef->init("ForceArrowsNorm", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Force arrows color value (normal value)", true);
		ParamDefTable[9].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=10, longName="ForceArrowsHigh"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[10];
		ParamDef->init("ForceArrowsHigh", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Force arrows color value (high value)", true);
		ParamDefTable[10].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=11, longName="Color0"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[11];
		ParamDef->init("Color0", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Color0 value", true);
		ParamDefTable[11].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=12, longName="Color1"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[12];
		ParamDef->init("Color1", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Color1 value", true);
		ParamDefTable[12].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=13, longName="Color2"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[13];
		ParamDef->init("Color2", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Color2 value", true);
		ParamDefTable[13].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=14, longName="Color3"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[14];
		ParamDef->init("Color3", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Color3 value", true);
		ParamDefTable[14].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=15, longName="Color4"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[15];
		ParamDef->init("Color4", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Color4 value", true);
		ParamDefTable[15].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=16, longName="Color5"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[16];
		ParamDef->init("Color5", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Color5 value", true);
		ParamDefTable[16].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=17, longName="Red"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[17];
		ParamDef->init("Red", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Red color value", true);
		ParamDefTable[17].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=18, longName="Green"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[18];
		ParamDef->init("Green", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Green color value", true);
		ParamDefTable[18].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=19, longName="Blue"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[19];
		ParamDef->init("Blue", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Blue color value", true);
		ParamDefTable[19].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=20, longName="DarkRed"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[20];
		ParamDef->init("DarkRed", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Dark red value", true);
		ParamDefTable[20].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=21, longName="DarkGreen"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[21];
		ParamDef->init("DarkGreen", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Dark green value", true);
		ParamDefTable[21].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=22, longName="DarkBlue"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[22];
		ParamDef->init("DarkBlue", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Dark blue value", true);
		ParamDefTable[22].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=23, longName="LightRed"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[23];
		ParamDef->init("LightRed", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Light red value", true);
		ParamDefTable[23].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=24, longName="LightGreen"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[24];
		ParamDef->init("LightGreen", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Light green value", true);
		ParamDefTable[24].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=25, longName="LightBlue"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[25];
		ParamDef->init("LightBlue", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Light blue value", true);
		ParamDefTable[25].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=26, longName="Purple"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[26];
		ParamDef->init("Purple", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Purple value", true);
		ParamDefTable[26].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=27, longName="DarkPurple"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[27];
		ParamDef->init("DarkPurple", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Dark purple value", true);
		ParamDefTable[27].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=28, longName="Yellow"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[28];
		ParamDef->init("Yellow", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Yellow value", true);
		ParamDefTable[28].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=29, longName="Orange"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[29];
		ParamDef->init("Orange", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Orange value", true);
		ParamDefTable[29].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=30, longName="Gold"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[30];
		ParamDef->init("Gold", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Gold value", true);
		ParamDefTable[30].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=31, longName="Emerald"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[31];
		ParamDef->init("Emerald", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Emerald value", true);
		ParamDefTable[31].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=32, longName="White"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[32];
		ParamDef->init("White", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "White value", true);
		ParamDefTable[32].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=33, longName="Black"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[33];
		ParamDef->init("Black", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Black value", true);
		ParamDefTable[33].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=34, longName="Gray"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[34];
		ParamDef->init("Gray", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Gray value", true);
		ParamDefTable[34].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=35, longName="LightGray"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[35];
		ParamDef->init("LightGray", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Light gray value", true);
		ParamDefTable[35].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=36, longName="DarkGray"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[36];
		ParamDef->init("DarkGray", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Dark gray value", true);
		ParamDefTable[36].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[36];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);
		Children[2] = PDEF_PTR(3);
		Children[3] = PDEF_PTR(4);
		Children[4] = PDEF_PTR(5);
		Children[5] = PDEF_PTR(6);
		Children[6] = PDEF_PTR(7);
		Children[7] = PDEF_PTR(8);
		Children[8] = PDEF_PTR(9);
		Children[9] = PDEF_PTR(10);
		Children[10] = PDEF_PTR(11);
		Children[11] = PDEF_PTR(12);
		Children[12] = PDEF_PTR(13);
		Children[13] = PDEF_PTR(14);
		Children[14] = PDEF_PTR(15);
		Children[15] = PDEF_PTR(16);
		Children[16] = PDEF_PTR(17);
		Children[17] = PDEF_PTR(18);
		Children[18] = PDEF_PTR(19);
		Children[19] = PDEF_PTR(20);
		Children[20] = PDEF_PTR(21);
		Children[21] = PDEF_PTR(22);
		Children[22] = PDEF_PTR(23);
		Children[23] = PDEF_PTR(24);
		Children[24] = PDEF_PTR(25);
		Children[25] = PDEF_PTR(26);
		Children[26] = PDEF_PTR(27);
		Children[27] = PDEF_PTR(28);
		Children[28] = PDEF_PTR(29);
		Children[29] = PDEF_PTR(30);
		Children[30] = PDEF_PTR(31);
		Children[31] = PDEF_PTR(32);
		Children[32] = PDEF_PTR(33);
		Children[33] = PDEF_PTR(34);
		Children[34] = PDEF_PTR(35);
		Children[35] = PDEF_PTR(36);

		ParamDefTable[0].setChildren(Children, 36);
	}

	mBuiltFlag = true;

}
void DebugColorParams_0p0::initStrings(void)
{
}

void DebugColorParams_0p0::initDynamicArrays(void)
{
}

void DebugColorParams_0p0::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	Default = uint32_t(0x00000000);
	PoseArrows = uint32_t(0x00000000);
	MeshStatic = uint32_t(0x00000000);
	MeshDynamic = uint32_t(0x00000000);
	Shape = uint32_t(0x00000000);
	Text0 = uint32_t(0x00000000);
	Text1 = uint32_t(0x00000000);
	ForceArrowsLow = uint32_t(0xFFFFFF00);
	ForceArrowsNorm = uint32_t(0xFF00FF00);
	ForceArrowsHigh = uint32_t(0xFFFF0000);
	Color0 = uint32_t(0x00000000);
	Color1 = uint32_t(0x00000000);
	Color2 = uint32_t(0x00000000);
	Color3 = uint32_t(0x00000000);
	Color4 = uint32_t(0x00000000);
	Color5 = uint32_t(0x00000000);
	Red = uint32_t(0xFFFF0000);
	Green = uint32_t(0xFF00FF00);
	Blue = uint32_t(0xFF0000FF);
	DarkRed = uint32_t(0xFF800000);
	DarkGreen = uint32_t(0xFF008000);
	DarkBlue = uint32_t(0xFF000080);
	LightRed = uint32_t(0xFFFF8080);
	LightGreen = uint32_t(0xFF80FF00);
	LightBlue = uint32_t(0xFF00FFFF);
	Purple = uint32_t(0xFFFF00FF);
	DarkPurple = uint32_t(0xFF800080);
	Yellow = uint32_t(0xFFFFFF00);
	Orange = uint32_t(0xFFFF8000);
	Gold = uint32_t(0xFF808000);
	Emerald = uint32_t(0xFF008080);
	White = uint32_t(0xFFFFFFFF);
	Black = uint32_t(0x00000000);
	Gray = uint32_t(0xFF808080);
	LightGray = uint32_t(0xFFC0C0C0);
	DarkGray = uint32_t(0xFF404040);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void DebugColorParams_0p0::initReferences(void)
{
}

void DebugColorParams_0p0::freeDynamicArrays(void)
{
}

void DebugColorParams_0p0::freeStrings(void)
{
}

void DebugColorParams_0p0::freeReferences(void)
{
}

} // namespace parameterized
} // namespace nvidia
