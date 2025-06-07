// MyDoor.cpp

#include "MyDoor.h"
#include "Engine/Engine.h"
#include "Kismet/KismetSystemLibrary.h"

AMyDoor::AMyDoor()
{
	PrimaryActorTick.bCanEverTick = true;

	UE_LOG(LogTemp, Warning, TEXT("AMyDoor Constructor Called"));
}

void AMyDoor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("BeginPlay Called"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, TEXT("BeginPlay Called"));
	}

	// Blueprint‚Æ“¯‚¶‚æ‚¤‚É•\Ž¦
	UKismetSystemLibrary::PrintString(this, "C++ Hello World!", true, true, FColor::Cyan, 2.f, TEXT("None"));
}

void AMyDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("Tick Called"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, TEXT("Tick Called"));
	}
}

void AMyDoor::TestLog()
{
	UE_LOG(LogTemp, Warning, TEXT("TestLog() was called from BP!"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Cyan, TEXT("TestLog() called"));
	}
}
