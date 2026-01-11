

#pragma once

#define PRINT_SCREEN(format_str, ...) GEngine->AddOnScreenDebugMessage( \
	-1, \
	5.f, \
	FColor::Green, \
	FString::Printf(TEXT(format_str), ##__VA_ARGS__));
