

#include "UtilFunctions/UtilFunctions.h"

FText UUtilFunctions::GetEnumDisplayName(StorageType type)
{
	const UEnum* Enum = StaticEnum<StorageType>();  // C++中使用StaticEnum
	return Enum ? Enum->GetDisplayNameTextByValue(static_cast<int32>(type)) : FText::GetEmpty();
}
