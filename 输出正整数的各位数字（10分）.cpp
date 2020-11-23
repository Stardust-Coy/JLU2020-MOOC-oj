#include <stdio.h>
int shuchu=0;
void qushu(int x){
	if(x==0)return;
	qushu(x/10);
	if(!shuchu){
		printf("%d",x%10);
		shuchu=1;
	}else printf("\n%d",x%10);
}
int main(){
	int n;
	scanf("%d",&n);
	qushu(n);
	return 0;
}

