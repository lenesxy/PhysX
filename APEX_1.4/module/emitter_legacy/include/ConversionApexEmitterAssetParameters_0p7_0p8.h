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



#ifndef MODULE_CONVERSIONAPEXEMITTERASSETPARAMETERS_0P7_0P8H_H
#define MODULE_CONVERSIONAPEXEMITTERASSETPARAMETERS_0P7_0P8H_H

#include "NvParamConversionTemplate.h"
#include "ApexEmitterAssetParameters_0p7.h"
#include "ApexEmitterAssetParameters_0p8.h"

#include "nvparameterized/NvParamUtils.h"

#define PARAM_RET(x) if( (x) != NvParameterized::ERROR_NONE ) \
								{ PX_ASSERT(0 && "INVALID Parameter"); return false; }

namespace nvidia {
namespace apex {
namespace legacy {


typedef NvParameterized::ParamConversionTemplate<nvidia::parameterized::ApexEmitterAssetParameters_0p7, 
						nvidia::parameterized::ApexEmitterAssetParameters_0p8, 
						nvidia::parameterized::ApexEmitterAssetParameters_0p7::ClassVersion, 
						nvidia::parameterized::ApexEmitterAssetParameters_0p8::ClassVersion>
						ConversionApexEmitterAssetParameters_0p7_0p8Parent;

class ConversionApexEmitterAssetParameters_0p7_0p8: public ConversionApexEmitterAssetParameters_0p7_0p8Parent
{
public:
	static NvParameterized::Conversion* Create(NvParameterized::Traits* t)
	{
		void* buf = t->alloc(sizeof(ConversionApexEmitterAssetParameters_0p7_0p8));
		return buf ? PX_PLACEMENT_NEW(buf, ConversionApexEmitterAssetParameters_0p7_0p8)(t) : 0;
	}

protected:
	ConversionApexEmitterAssetParameters_0p7_0p8(NvParameterized::Traits* t) : ConversionApexEmitterAssetParameters_0p7_0p8Parent(t) {}

	const NvParameterized::PrefVer* getPreferredVersions() const
	{
		static NvParameterized::PrefVer prefVers[] =
		{
			//TODO:
			//	Add your preferred versions for included references here.
			//	Entry format is
			//		{ (const char*)longName, (uint32_t)preferredVersion }

			{ 0, 0 } // Terminator (do not remove!)
		};

		return prefVers;
	}

	bool convert()
	{
		//TODO:
		//	Write custom conversion code here using mNewData and mLegacyData members.
		//
		//	Note that
		//		- mNewData has already been initialized with default values
		//		- same-named/same-typed members have already been copied
		//			from mLegacyData to mNewData
		//		- included references were moved to mNewData
		//			(and updated to preferred versions according to getPreferredVersions)
		//
		//	For more info see the versioning wiki.


		NvParameterized::Handle hOld(*mLegacyData, "iosAssetName");
		PX_ASSERT(hOld.isValid());

		NvParameterized::Handle hNew(*mNewData, "iosAssetName");
		PX_ASSERT(hNew.isValid());


		NvParameterized::Interface* oldRef = NULL;

		PARAM_RET(hOld.getParamRef(oldRef));
		PARAM_RET(hOld.setParamRef(0));
		PX_ASSERT(hOld);

		if (oldRef)
		{
			if (!physx::shdfnd::strcmp("NxBasicIosAsset", oldRef->className()))
			{
				oldRef->setClassName("BasicIosAsset");
			}
			PARAM_RET(hNew.setParamRef(oldRef));
		}

		return true;
	}
};


}
}
} //nvidia::apex::legacy

#endif
