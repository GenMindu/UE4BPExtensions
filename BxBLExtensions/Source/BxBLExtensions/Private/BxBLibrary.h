#pragma once
#include "BxBLibrary.generated.h"

///////////////////////////////////////////////
//     Blueprint Extension Library     //
///////////////////////////////////////////////

UCLASS()
class BXBLEXTENSIONS_API UBxBLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
	//
	//
	//** BRANCHES... Branching is love, branching is life. **//
	//
	/** IF Color == Input Color: **/
	UFUNCTION(BlueprintCallable, Category = "Blueprint Extensions", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", FriendlyName = "Check: Color", Keywords = "check color"))
	static bool Branch_Color(FLinearColor Check, FLinearColor Against, float fTolerance = 0.01f);
};