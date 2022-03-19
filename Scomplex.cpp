#define _CRT_SECURE_NO_WARNINGS 
#include "stdio.h"
#include "math.h"
struct complex
{
	float Re;
	float Im;
};
struct complex ReadComplex()
{
	struct complex z;
	printf("Enter the Real part: ");
	scanf("%g", &z.Re);
	printf("Enter the imaginary part: ");
	scanf("%g", &z.Im);
	return z;
}

struct complex AddComplex(struct complex A, struct complex B)
{
	struct complex z;
	z.Im = A.Im + B.Im;
	z.Re = A.Re + B.Re;
	return z;
}

struct complex SubComplex(struct complex A, struct complex B)
{
	struct complex z;
	z.Im = A.Im - B.Im;
	z.Re = A.Re - B.Re;
	return z;
}

struct complex MultComplex(struct complex A, struct complex B)
{
	struct complex z;
	if (A.Im < 0 && B.Im < 0|| A.Im>0 && B.Im>0)
	{
		z.Re = A.Re * B.Re - A.Im * B.Im;
		z.Im = A.Re * B.Im + A.Im * B.Re;
	}
	else
	{
		z.Re = A.Re * B.Re - A.Im * B.Im;
		z.Im = A.Re * B.Im + A.Im * B.Re;
	}
	return z;
}

struct complex DivComplex(struct complex A, struct complex B)
{
	struct complex z= {0,0};
	struct complex conjB= {0,0};
	struct complex temp= { 0, 0 };
	if (B.Im == 0 && B.Re == 0)
	{
		printf("Division by zero isn't allowed");
		return z;
	}
	conjB.Re = B.Re;
	conjB.Im = -B.Im;
	temp = MultComplex(A, conjB);
	z.Re = temp.Re / ((B.Re * B.Re) + (B.Im * B.Im));
	z.Im = temp.Im / ((B.Re * B.Re) + (B.Im * B.Im));
	return z;
}

float CalcAmp(struct complex A)
{
	return sqrt(A.Im * A.Im + A.Re * A.Re);
}

float calcPhas(struct complex A)
{
	return atan(A.Im / A.Re);
}

void PrintComplex(struct complex A)
{
	int sign;
	if (A.Im < 0) sign = -1;
	else if (A.Im == 0) sign = 0;
	else sign = 1;
	switch (sign)
	{
	case 0:
	{
		printf("%g\n", A.Re); return;
	}
	case 1:
	{
		printf("%g + J%g\n", A.Re, fabs(A.Im)); return;
	}
	default:
	{
		printf("%g - J%g\n", A.Re, fabs(A.Im)); return;
	}

	}
}