// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_AI : ModuleRules
{
	public UE_AI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
