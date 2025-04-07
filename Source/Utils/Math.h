#pragma once

#if defined(WIN32) || defined (_WINDOWS)
	#ifdef _EXPORTING
		#define MATH_API __declspec(dllexport)
	#elif _IMPORTING
		#define MATH_API __declspec(dllimport)
	#else
		#define MATH_API
	#endif
#else
	#define MATH_API __attribute__((visibility("default")))
#endif

namespace MathLib
{
	MATH_API int sum(int a);
	MATH_API int max(int x, int b);
	MATH_API int factorial(int n);
	MATH_API int randomInt(int min, int max);
} 