// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PowerUpPlugin : ModuleRules
{
	public PowerUpPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				"PowerUpPlugin/Public"
                // 필요한 다른 public include 경로를 여기에 추가한다  
			}
            );
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"PowerUpPlugin/Private",
                // 필요한 다른 private include 경로를 여기에 추가한다  
			}
            );
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "CoreUObject",
                // ... 정적으로 링크된 다른 public 종속성을 추가한다 ... 
			}
            );
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
