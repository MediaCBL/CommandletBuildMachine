// © Felix Courteau-Boutin All Right Reserved

#include "ToolRunnerCommandlet.h"

DEFINE_LOG_CATEGORY(LogToolRunnerCommandlet);

int32 UToolRunnerCommandlet::Main(const FString& Params)
{
	UE_LOG(LogToolRunnerCommandlet, Display, TEXT("Tool Runner Commandlet Started"));
	UE_LOG(LogToolRunnerCommandlet, Display, TEXT("Params: %s"), *Params);

	// Parse arguments
	FString Mode;
	FString Target;

	FParse::Value(*Params, TEXT("mode="), Mode);
	FParse::Value(*Params, TEXT("target="), Target);

	UE_LOG(LogToolRunnerCommandlet, Display, TEXT("Mode: %s"), *Mode);
	UE_LOG(LogToolRunnerCommandlet, Display, TEXT("Target: %s"), *Target);

	if (Mode.IsEmpty())
	{
		UE_LOG(LogToolRunnerCommandlet, Log, TEXT("Missing -mode argument"));
		return 1;
	}

	// Call your logic
	if (Mode == TEXT("build"))
	{
		UE_LOG(LogToolRunnerCommandlet, Log, TEXT("Run code build"));
		//RunBuild(Target);
	}
	else if (Mode == TEXT("cook"))
	{
		UE_LOG(LogToolRunnerCommandlet, Log, TEXT("Run cook"));
		//RunCook(Target);
	}
	else
	{
		UE_LOG(LogToolRunnerCommandlet, Error, TEXT("Unknown mode"));
		return 1;
	}

	UE_LOG(LogToolRunnerCommandlet, Display, TEXT("Finished Successfully"));

	return 0;
}

