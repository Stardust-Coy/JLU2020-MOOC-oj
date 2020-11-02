#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(!((n<10000)&&(n>=1000))){
		printf("0\n");
		return 0;
	}
	while(n){
		printf("%d",n%10);
		n/=10;
	}
	printf("\n");
	return 0;
}
