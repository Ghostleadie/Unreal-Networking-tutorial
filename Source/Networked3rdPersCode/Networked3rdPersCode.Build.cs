// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Networked3rdPersCode : ModuleRules
{
	public Networked3rdPersCode(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
