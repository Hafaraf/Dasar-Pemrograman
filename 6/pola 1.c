#include <stdio.h>

int main(){
	int N, K, a;
	scanf("%d %d", &N, &K);
	for(a=1;a<=N;a++){
		if(a%K==0)
			printf("*");
		else if(a%K!=0)
			printf("%d", a);
		if(a>=N)
			break;
		printf(" ");		
		}
	
	printf("\n");
	
	return 0;
}
