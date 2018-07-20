// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class OJAMAUnrealTestTarget : TargetRules
{
	public OJAMAUnrealTestTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "OJAMAUnrealTest" } );
	}
}
