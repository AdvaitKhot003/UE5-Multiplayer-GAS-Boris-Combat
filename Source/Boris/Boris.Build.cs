// No Copyright.

using UnrealBuildTool;

public class Boris : ModuleRules
{
	public Boris(ReadOnlyTargetRules target) : base(target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(
		[
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore"
		]);
		
		PrivateDependencyModuleNames.AddRange([]);
	}
}
