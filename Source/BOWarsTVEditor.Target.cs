// Rights Property of Bryan A Quero

using UnrealBuildTool;
using System.Collections.Generic;

public class BOWarsTVEditorTarget : TargetRules
{
	public BOWarsTVEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "BOWarsTV" } );
	}
}
