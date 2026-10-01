// No Copyright.

#include "Character/BorisCharacterBase.h"

ABorisCharacterBase::ABorisCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;
	
	// Always updates pose and bones, even when not visible (Important for server-side hit detection and gameplay logic)
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
}
