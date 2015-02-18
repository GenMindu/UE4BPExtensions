#include "BxBLExtensionsPrivatePCH.h"
#include "BxBLibrary.h"


///////////////////////////////////////////////
//     Blueprint Extension Library     //
///////////////////////////////////////////////

UBxBLibrary::UBxBLibrary(const class FObjectInitializer& PCIP) : Super(PCIP) {}
//
//
/////////////////////////////////////////////////////////
//     ::BRANCHES::                                      //
/////////////////////////////////////////////////////////
//
//
void UBxBLibrary::Branch_OEquals(UObject *Check, UObject *Against, TEnumAsByte<EN_Equals>&Branches)
{
	if (Check == Against) {
		Branches = EN_Equals::IfEquals;
	}
	else {
		Branches = EN_Equals::IfNot;
	}
}
//
void UBxBLibrary::Branch_ONotEqual(UObject *Check, UObject *Against, TEnumAsByte<EN_NotEqual>&Branches)
{
	if (Check != Against) {
		Branches = EN_NotEqual::IfNotEqual;
	}
	else {
		Branches = EN_NotEqual::IfSo;
	}
}
//
//
void UBxBLibrary::Branch_STEquals(FString Check, FString Against, TEnumAsByte<EN_Equals>&Branches)
{
	if (Check == Against) {
		Branches = EN_Equals::IfEquals;
	}
	else {
		Branches = EN_Equals::IfNot;
	}
}
//
void UBxBLibrary::Branch_TXEquals(FText Check, FText Against, TEnumAsByte<EN_Equals>&Branches)
{
	if (Check.ToString() == Against.ToString()) {
		Branches = EN_Equals::IfEquals;
	} else {
		Branches = EN_Equals::IfNot;
	}
}
//
//
void UBxBLibrary::Branch_INTEquals(int32 Check, int32 Against, TEnumAsByte<EN_Equals>&Branches)
{
	if (Check == Against) {
		Branches = EN_Equals::IfEquals;
	} else {
		Branches = EN_Equals::IfNot;
	}
}
//
void UBxBLibrary::Branch_INTNotEqual(int32 Check, int32 Against, TEnumAsByte<EN_NotEqual>&Branches)
{
	if (Check != Against) {
		Branches = EN_NotEqual::IfNotEqual;
	} else {
		Branches = EN_NotEqual::IfSo;
	}
}
//
void UBxBLibrary::Branch_INTLessThan(int32 Check, int32 Against, TEnumAsByte<EN_IfThenElse>&Branches)
{
	if (Check < Against) {
		Branches = EN_IfThenElse::IfTrue;
	} else {
		Branches = EN_IfThenElse::ElseDo;
	}
}
//
void UBxBLibrary::Branch_INTGreaterThan(int32 Check, int32 Against, TEnumAsByte<EN_IfThenElse>&Branches)
{
	if (Check > Against) {
		Branches = EN_IfThenElse::IfTrue;
	} else {
		Branches = EN_IfThenElse::ElseDo;
	}
}
//
void UBxBLibrary::Branch_INTLessOREqual(int32 Check, int32 Against, TEnumAsByte<EN_IfThenElse>&Branches)
{
	if (Check <= Against) {
		Branches = EN_IfThenElse::IfTrue;
	} else {
		Branches = EN_IfThenElse::ElseDo;
	}
}
//
void UBxBLibrary::Branch_INTGreaterOREqual(int32 Check, int32 Against, TEnumAsByte<EN_IfThenElse>&Branches)
{
	if (Check >= Against) {
		Branches = EN_IfThenElse::IfTrue;
	} else {
		Branches = EN_IfThenElse::ElseDo;
	}
}
//
//
void UBxBLibrary::Branch_FEquals(float Check, float Against, TEnumAsByte<EN_Equals>&Branches)
{
	if (Check == Against) {
		Branches = EN_Equals::IfEquals;
	}
	else {
		Branches = EN_Equals::IfNot;
	}
}
//
void UBxBLibrary::Branch_FNotEqual(float Check, float Against, TEnumAsByte<EN_NotEqual>&Branches)
{
	if (Check != Against) {
		Branches = EN_NotEqual::IfNotEqual;
	}
	else {
		Branches = EN_NotEqual::IfSo;
	}
}
//
void UBxBLibrary::Branch_FLessThan(float Check, float Against, TEnumAsByte<EN_IfThenElse>&Branches)
{
	if (Check < Against) {
		Branches = EN_IfThenElse::IfTrue;
	}
	else {
		Branches = EN_IfThenElse::ElseDo;
	}
}
//
void UBxBLibrary::Branch_FGreaterThan(float Check, float Against, TEnumAsByte<EN_IfThenElse>&Branches)
{
	if (Check > Against) {
		Branches = EN_IfThenElse::IfTrue;
	}
	else {
		Branches = EN_IfThenElse::ElseDo;
	}
}
//
void UBxBLibrary::Branch_FLessOREqual(float Check, float Against, TEnumAsByte<EN_IfThenElse>&Branches)
{
	if (Check <= Against) {
		Branches = EN_IfThenElse::IfTrue;
	}
	else {
		Branches = EN_IfThenElse::ElseDo;
	}
}
//
void UBxBLibrary::Branch_FGreaterOREqual(float Check, float Against, TEnumAsByte<EN_IfThenElse>&Branches)
{
	if (Check >= Against) {
		Branches = EN_IfThenElse::IfTrue;
	}
	else {
		Branches = EN_IfThenElse::ElseDo;
	}
}
//
//
void UBxBLibrary::Branch_Color(FLinearColor Check, FLinearColor Against, TEnumAsByte<EN_Match>&Branches, float Tolerance)
{
	if (Check.Equals(Against, Tolerance)) {
		Branches = EN_Match::IfMatch;
	} else {
		Branches = EN_Match::IfNot;
	}
}
//
//
void UBxBLibrary::Branch_AEquals(AActor *Check, AActor *Against, TEnumAsByte<EN_Equals>&Branches)
{
	if (Check == Against) {
		Branches = EN_Equals::IfEquals;
	}
	else {
		Branches = EN_Equals::IfNot;
	}
}
//
void UBxBLibrary::Branch_ANotEqual(AActor *Check, AActor *Against, TEnumAsByte<EN_NotEqual>&Branches)
{
	if (Check != Against) {
		Branches = EN_NotEqual::IfNotEqual;
	}
	else {
		Branches = EN_NotEqual::IfSo;
	}
}
//
//
void UBxBLibrary::Branch_SCEquals(USceneComponent *Check, USceneComponent *Against, TEnumAsByte<EN_Equals>&Branches)
{
	if (Check == Against) {
		Branches = EN_Equals::IfEquals;
	}
	else {
		Branches = EN_Equals::IfNot;
	}
}
//
void UBxBLibrary::Branch_SCNotEqual(USceneComponent *Check, USceneComponent *Against, TEnumAsByte<EN_NotEqual>&Branches)
{
	if (Check != Against) {
		Branches = EN_NotEqual::IfNotEqual;
	}
	else {
		Branches = EN_NotEqual::IfSo;
	}
}
//
//
void UBxBLibrary::Branch_PCEquals(UPrimitiveComponent *Check, UPrimitiveComponent *Against, TEnumAsByte<EN_Equals>&Branches)
{
	if (Check == Against) {
		Branches = EN_Equals::IfEquals;
	}
	else {
		Branches = EN_Equals::IfNot;
	}
}
//
void UBxBLibrary::Branch_PCNotEqual(UPrimitiveComponent *Check, UPrimitiveComponent *Against, TEnumAsByte<EN_NotEqual>&Branches)
{
	if (Check != Against) {
		Branches = EN_NotEqual::IfNotEqual;
	}
	else {
		Branches = EN_NotEqual::IfSo;
	}
}
//
//
void UBxBLibrary::Branch_Trace(TEnumAsByte<ETraceTypeQuery>Check, TEnumAsByte<ETraceTypeQuery>Against, TEnumAsByte<EN_Match>&Branches)
{
	if (Check.GetValue() == Against.GetValue()) {
		Branches = EN_Match::IfMatch;
	}
	else {
		Branches = EN_Match::IfNot;
	}
}
//
void UBxBLibrary::Branch_PhysMat(TEnumAsByte<EObjectTypeQuery>Check, TEnumAsByte<EObjectTypeQuery>Against, TEnumAsByte<EN_Match>&Branches)
{
	if (Check.GetValue() == Against.GetValue()) {
		Branches = EN_Match::IfMatch;
	}
	else {
		Branches = EN_Match::IfNot;
	}
}
//
//
/////////////////////////////////////////////////////////
//     ::ARITHMETICS::                                  //
/////////////////////////////////////////////////////////
//
//
int32 UBxBLibrary::INTPosIncrement(int32 Value)
{
	return Value++;
}
//
int32 UBxBLibrary::INTPreIncrement(int32 Value)
{
	return ++Value;
}
//
int32 UBxBLibrary::INTPosDecrement(int32 Value)
{
	return Value--;
}
//
int32 UBxBLibrary::INTPreDecrement(int32 Value)
{
	return --Value;
}
//
int32 UBxBLibrary::INTIncrement(int32 Value, int32 i)
{
	return (Value += i);
}
//
int32 UBxBLibrary::INTDecrement(int32 Value, int32 i)
{
	return (Value -= i);
}
//
int32 UBxBLibrary::INTMultiply(int32 Value, int32 i)
{
	return (Value *= i);
}
//
int32 UBxBLibrary::INTDivide(int32 Value, int32 i)
{
	return (Value /= i);
}
//
int32 UBxBLibrary::INTModulo(int32 Value, int32 i)
{
	return (Value %= i);
}
//
int32 UBxBLibrary::INTPercent(int32 Value, int32 i)
{
	return (Value = (Value*i) / 100);
}
//
//
float UBxBLibrary::FPosIncrement(float Value)
{
	return Value++;
}
//
float UBxBLibrary::FPreIncrement(float Value)
{
	return ++Value;
}
//
float UBxBLibrary::FPosDecrement(float Value)
{
	return Value--;
}
//
float UBxBLibrary::FPreDecrement(float Value)
{
	return --Value;
}
//
float UBxBLibrary::FIncrement(float Value, float f)
{
	return (Value += f);
}
//
float UBxBLibrary::FDecrement(float Value, float f)
{
	return (Value -= f);
}
//
float UBxBLibrary::FMultiply(float Value, float f)
{
	return (Value *= f);
}
//
float UBxBLibrary::FDivide(float Value, float f)
{
	return (Value /= f);
}
//
float UBxBLibrary::FPercent(float Value, float f)
{
	return (Value = (Value*f) / 100);
}