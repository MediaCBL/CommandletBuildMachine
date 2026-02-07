// © Felix Courteau-Boutin All Right Reserved

#pragma once

#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "ToolRunnerCommandlet.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogToolRunnerCommandlet, Log, All);

/**
 * 
 */
UCLASS(CustomConstructor)
class COMMANDLETBUILDMACHINE_API UToolRunnerCommandlet : public UCommandlet
{
	GENERATED_UCLASS_BODY()
	
	UToolRunnerCommandlet(
	const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	{
		IsClient = false;
		IsEditor = false;
		IsServer = false;

		LogToConsole = true;
		ShowErrorCount = true;
	}

	virtual int32 Main(const FString& Params) override;
};
