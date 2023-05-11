// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class URE_Trajectory : ModuleRules
{
	public URE_Trajectory(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
