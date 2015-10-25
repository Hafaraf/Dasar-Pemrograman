#include <stdio.h>
#include <math.h>

int main (){
	float N;
	int C, F;
	scanf ("%f", &N);
	C=ceil(N);
	F=floor(N);
	printf ("%d %d\n", F, C);
	
	return 0;
}
