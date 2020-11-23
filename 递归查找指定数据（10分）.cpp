#include <stdio.h>
int ffind(int s[],int x,int k){
	if(x==-1)return -1;
	if(s[x]==k)return x;
	return ffind(s,x-1,k);
}
int main(){
	int n;
	scanf("%d",&n);
	int a[100010];
	for(int i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	int key;
	scanf("%d",&key);
	printf("%d",ffind(a,n-1,key));
	return 0;
}
