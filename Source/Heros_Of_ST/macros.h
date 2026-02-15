

#pragma once

#define PRINT_SCREEN(format_str, ...) GEngine->AddOnScreenDebugMessage( \
	-1, \
	5.f, \
	FColor::Green, \
	FString::Printf(TEXT(format_str), ##__VA_ARGS__));

#define CHECK_FUNC_RET_BOOL(expr) \
	do { \
		if (!(expr)) { \
			UE_LOG(LogTemp, Error, TEXT("Expression '%s' failed at %s:%d"), TEXT(#expr), TEXT(__FILE__), __LINE__); \
			return false; \
		} \
	} while (0)
