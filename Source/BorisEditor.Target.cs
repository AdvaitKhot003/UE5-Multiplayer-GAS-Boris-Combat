// No Copyright.

using UnrealBuildTool;

public class BorisEditorTarget : TargetRules
{
	public BorisEditorTarget(TargetInfo target) : base(target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V7;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_8;
		
		ExtraModuleNames.AddRange(["Boris"]);
	}
}
