// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class project20183043 : ModuleRules
{
	public project20183043(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule", "Niagara", "UMG" });
    }
}
