// Fill out your copyright notice in the Description page of Project Settings.


#include "States/STDivisionArmy.h"

FSTDivisionArmyData USTDivisionArmy::ToFSTDivisionArmyData()
{
	FSTDivisionArmyData Data;
	Data.ArmyID = ArmyID;
	Data.ArmyName = ArmyName;
	for (auto& [RegimentID, RegimentPtr] : RegimentData)
	{
		Data.RegimentData.Add(RegimentPtr->Data);
	}
	Data.ArmyLeaderID = ArmyLeaderID;
	Data.SecondArmyLeaderID = SecondArmyLeaderID;
	return Data;
}
