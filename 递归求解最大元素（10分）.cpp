#include <stdio.h>
int Max(int s[],int n){
	if(n==1)return s[1];
	return s[n]>Max(s,n-1)?s[n]:Max(s,n-1);
}
int main(){
	int a[15]={0};
	for(int i=1;i<=10;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",Max(a,10));
	return 0;
}
