#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a=n,b=0;
	while(n){
		b=b*10+n%10;
		n/=10;
	}
	if(a==b)printf("OK\n");
		else printf("NO\n");
	return 0;
}
