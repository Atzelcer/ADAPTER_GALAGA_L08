// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ADAPTER_GALAGA_L08Target : TargetRules
{
	public ADAPTER_GALAGA_L08Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("ADAPTER_GALAGA_L08");
	}
}
