#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int yuwen,shuxue,yingyu;
	int sumyu=0,sumshu=0,sumying=0;
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&yuwen,&shuxue,&yingyu);
		sumyu+=yuwen;
		sumshu+=shuxue;
		sumying+=yingyu;
	}
	printf("%d %d %d\n",sumyu,sumshu,sumying);
	printf("%d %d %d",sumyu/n,sumshu/n,sumying/n);
	return 0;
}
