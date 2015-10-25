#include <stdio.h>

int main(){
	int N, B, c, hasil=0;
	scanf("%d", &N);
	for(B=1;B<=N;B++){
		scanf("%d", &c); //kenapa harus pake variabel c sih??!! ah ga paham. kamvret dah
		hasil=hasil+c;
	}
	printf("%d\n", hasil);
	
	return 0;
}
