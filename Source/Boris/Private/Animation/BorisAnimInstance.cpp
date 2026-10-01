// No Copyright.

#include "Animation/BorisAnimInstance.h"
#include "Character/BorisCharacterBase.h"
#include "GameFramework/CharacterMovementComponent.h"

void UBorisAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
	BorisCharacterBase = Cast<ABorisCharacterBase>(TryGetPawnOwner());
	
	if (BorisCharacterBase)
	{
		BorisMovementComponent = BorisCharacterBase->GetCharacterMovement();
	}
}

void UBorisAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	
	if (!BorisCharacterBase || !BorisMovementComponent) return;
}

void UBorisAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);
}
