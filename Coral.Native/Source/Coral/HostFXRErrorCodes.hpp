#pragma once

namespace Coral {

	enum StatusCode
	{
		// Success
		Success = 0,
		Success_HostAlreadyInitialized = 0x00000001,
		Success_DifferentRuntimeProperties = 0x00000002,

		// Failure
		InvalidArgFailure = 0x80008081,
		CoreHostLibLoadFailure = 0x80008082,
		CoreHostLibMissingFailure = 0x80008083,
		CoreHostEntryPointFailure = 0x80008084,
		CoreHostCurHostFindFailure = 0x80008085,

		CoreClrResolveFailure = 0x80008087,
		CoreClrBindFailure = 0x80008088,
		CoreClrInitFailure = 0x80008089,
		CoreClrExeFailure = 0x8000808a,
		ResolverInitFailure = 0x8000808b,
		ResolverResolveFailure = 0x8000808c,
		LibHostCurExeFindFailure = 0x8000808d,
		LibHostInitFailure = 0x8000808e,

		LibHostExecModeFailure = 0x80008090,
		LibHostSdkFindFailure = 0x80008091,
		LibHostInvalidArgs = 0x80008092,
		InvalidConfigFile = 0x80008093,
		AppArgNotRunnable = 0x80008094,
		AppHostExeNotBoundFailure = 0x80008095,
		FrameworkMissingFailure = 0x80008096,
		HostApiFailed = 0x80008097,
		HostApiBufferTooSmall = 0x80008098,
		LibHostUnknownCommand = 0x80008099,
		LibHostAppRootFindFailure = 0x8000809a,
		SdkResolverResolveFailure = 0x8000809b,
		FrameworkCompatFailure = 0x8000809c,
		FrameworkCompatRetry = 0x8000809d,

		BundleExtractionFailure = 0x8000809f,
		BundleExtractionIOError = 0x800080a0,
		LibHostDuplicateProperty = 0x800080a1,
		HostApiUnsupportedVersion = 0x800080a2,
		HostInvalidState = 0x800080a3,
		HostPropertyNotFound = 0x800080a4,
		CoreHostIncompatibleConfig = 0x800080a5,
		HostApiUnsupportedScenario = 0x800080a6,
		HostFeatureDisabled = 0x800080a7,
	};

}
