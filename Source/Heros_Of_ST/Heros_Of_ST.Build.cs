// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class Heros_Of_ST : ModuleRules
{
	public Heros_Of_ST(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "Json" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

        RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "../../Config/History", "Characters.json"));
        RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "../../Config/History", "Holdings.json"));
        RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "../../Config/History", "States.json"));
        RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "../../Config/History", "Houses.json"));
        RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "../../Config/History", "Cultures.json"));
        RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "../../Config/Rules", "StateTemplates.json"));

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
