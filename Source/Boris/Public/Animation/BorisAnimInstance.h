// No Copyright.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BorisAnimInstance.generated.h"

class ABorisCharacterBase;
class UCharacterMovementComponent;

UCLASS()
class BORIS_API UBorisAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;
	
private:
	UPROPERTY(Transient)
	TObjectPtr<ABorisCharacterBase> BorisCharacterBase;
	
	UPROPERTY(Transient)
	TObjectPtr<UCharacterMovementComponent> BorisMovementComponent;
};
