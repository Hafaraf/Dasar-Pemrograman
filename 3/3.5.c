#include <stdio.h>

int main(){
	float A, T, L;
	scanf("%f %f", &A, &T);
	if ((A>=1 && A<=1000) && (T>=1 && T<=1000)){
		L=(A*T)/2;
		printf("%.2f\n", L);
	}
	
	return 0;
}
