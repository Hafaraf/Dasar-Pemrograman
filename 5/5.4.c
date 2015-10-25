#include <stdio.h>

int main(){
	long int N;
	scanf("%ld", &N);
	if (N>0 && N<=100000){
		printf("positif\n");
	}
	else if(N<0 && N>=-100000){
		printf("negatif\n");
	}
	else if (N==0){
		printf("nol\n");
	}
	
	return 0;
}
