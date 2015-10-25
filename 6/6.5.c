#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);
	while(x%2==0){
		if(x%2==1)
			printf("ya\n");
		else
			printf("bukan\n");
	}
	return 0;
}
