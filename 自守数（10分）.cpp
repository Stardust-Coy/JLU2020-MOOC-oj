#include <stdio.h>
int zishou(int x){
	int t=x;
	int wei=1;
	while(t){
		wei*=10;
		t/=10;
	}
	if((x*x-x)%wei==0)return 1;
		else return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(zishou(i))printf("%d\n",i);
	}
	return 0;
}
