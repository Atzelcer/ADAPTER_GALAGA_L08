// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ADAPTER_GALAGA_L08EditorTarget : TargetRules
{
	public ADAPTER_GALAGA_L08EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("ADAPTER_GALAGA_L08");
	}
}
