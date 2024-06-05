// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SegundoParcial_PROO : ModuleRules
{
	public SegundoParcial_PROO(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
