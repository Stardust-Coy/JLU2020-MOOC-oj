#include <stdio.h>
#include <string.h>
#define N 60
struct Xinxi{
	char name[10010];
	int fenshu;
}stu[10010];
int main(){
	int n;
	scanf("%d",&n);
	int huanhang=1;
	for(int i=1;i<=n;i++){
		scanf("%s",stu[i].name);
		scanf("%d",&stu[i].fenshu);
		if(stu[i].fenshu<N){
			if(huanhang){
				printf("%s %d",stu[i].name,stu[i].fenshu);
				huanhang=0;
			}else printf("\n%s %d",stu[i].name,stu[i].fenshu);
		} 
	}
	return 0;
}
