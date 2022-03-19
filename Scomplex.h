#ifndef _SCOMPLEX_H_INCLUDED
#define _SCOMPLEX_H_INCLUDED
struct complex
{
	float Re;
	float Im;
};
struct complex ReadComplex();
struct complex AddComplex(struct complex A, struct complex B);
struct complex SubComplex(struct complex A, struct complex B);
struct complex MultComplex(struct complex A, struct complex B);
struct complex DivComplex(struct complex A, struct complex B);
float CalcAmp(struct complex A);
float calcPhas(struct complex A);
void PrintComplex(struct complex A);

#endif
