#include <stdio.h>
#include <string.h>
struct Xinxi{
	char name[10010];
	int yuwen,shuxue,zongfen;
}stu[10010];
int main(){
	int n;
	scanf("%d",&n);
	int maxfen=-1;
	for(int i=1;i<=n;i++){
		scanf("%s",stu[i].name);
		scanf("%d%d",&stu[i].shuxue,&stu[i].yuwen);
		stu[i].zongfen=stu[i].yuwen+stu[i].shuxue;
	}
	for(int i=1;i<n;i++){
		printf("%s",stu[i].name);
		printf(" %d\n",stu[i].zongfen);
	}
	printf("%s",stu[n].name);
	printf(" %d",stu[n].zongfen);
	return 0;
}
