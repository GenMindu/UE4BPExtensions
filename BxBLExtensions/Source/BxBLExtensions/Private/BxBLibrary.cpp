#include "BxBLExtensionsPrivatePCH.h"
#include "BxBLibrary.h"

///////////////////////////////////////////////
//     Blueprint Extension Library     //
///////////////////////////////////////////////

UBxBLibrary::UBxBLibrary(const class FObjectInitializer& PCIP) : Super(PCIP)
{
	
}
/*
FRotator UBxBLibrary::Conversions__VectorToRotator(const FVector& TheVector)
{
	return TheVector.Rotation();
}*/

bool UBxBLibrary::Branch_Color(FLinearColor Check, FLinearColor Against, float fTolerance)
{
	return Check.Equals(Against, fTolerance);
}