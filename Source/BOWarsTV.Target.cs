// Rights Property of Bryan A Quero

using UnrealBuildTool;
using System.Collections.Generic;

public class BOWarsTVTarget : TargetRules
{
	public BOWarsTVTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "BOWarsTV" } );
	}
}
