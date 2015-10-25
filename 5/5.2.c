#include <stdio.h>

int main (){
	long int N;
	scanf ("%ld", &N);
	if (N>0 && N<=100000){
		printf("%ld\n", N);
	}
	if (N<=0){
		printf("");
	}
	
	return 0;
}
