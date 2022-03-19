#include "stdio.h"
#include "Scomplex.h"

int main()
{
	struct complex A = ReadComplex();
	struct complex B = ReadComplex();
	struct complex result;

	result = AddComplex(A, B);
	printf("result of A + B is\n: ");
	PrintComplex(result);

	result = SubComplex(A, B);
	printf("result of A - B is\n: ");
	PrintComplex(result);

	result = MultComplex(A, B);
	printf("result of A * B is\n: ");
	PrintComplex(result);

	result = DivComplex(A, B);
	printf("result of A / B is\n: ");
	PrintComplex(result);

	printf("%f\n",CalcAmp(result));
	printf("%f\n", calcPhas(result));
}