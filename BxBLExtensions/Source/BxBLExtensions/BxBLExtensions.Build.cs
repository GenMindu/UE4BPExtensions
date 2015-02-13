using UnrealBuildTool;

public class BxBLExtensions : ModuleRules
{
	public BxBLExtensions(TargetInfo Target)
	{
        PrivateIncludePaths.AddRange(new string[] { 
			"BxBLExtensions/Private"
		});
        PublicDependencyModuleNames.AddRange(
			new string[] { 
				"Core", 
				"CoreUObject", 
				"Engine", 
				//"InputCore",
				//"RHI"
			}
		);
	}
}