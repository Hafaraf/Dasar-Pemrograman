#include <stdio.h>

int main ()
{
	int A, B, C;
	scanf ("%d %d", &A, &B);
	if (A>=1 && A<=100){
		C=A+B;
		printf ("%d\n", C);
	}
	
	return 0;
}
