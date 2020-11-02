#include <stdio.h>
int main(){
	int n,d;
	scanf("%d%d",&n,&d);
	int a[100010],k=0;
	while(n){
		a[++k]=n%d;
		n/=d;
	}
	for(int i=k;i>=1;i--){
		printf("%d",a[i]);
	}
	return 0;
}
