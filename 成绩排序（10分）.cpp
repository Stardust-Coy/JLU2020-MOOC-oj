#include <stdio.h>
#include <string.h>
struct Xinxi{
	char name[10010];
	int fenshu;
}stu[10010];
void jiaohuan(char *p1,char *p2){
	char tmp;
	while(*p1!='\0'||*p2!='\0'){
		tmp=*p1;
		*p1=*p2;
		*p2=tmp;
		p1++;
		p2++;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int maxfen=-1;
	for(int i=1;i<=n;i++){
		scanf("%s",stu[i].name);
		scanf("%d",&stu[i].fenshu);
	}
	int kmin=1,minn=stu[1].fenshu,temp;
	for(int i=1;i<=n-1;i++){
		for(int j=i+1;j<=n;j++){
			if(stu[j].fenshu<minn){
				kmin=j;
				minn=stu[j].fenshu;
			}
		}
		temp=stu[i].fenshu;
		stu[i].fenshu=stu[kmin].fenshu;
		stu[kmin].fenshu=temp;
		jiaohuan(stu[i].name,stu[kmin].name); 
	} 
	for(int i=n;i>1;i--){
		printf("%s",stu[i].name);
		printf(" %d\n",stu[i].fenshu);
	}
	printf("%s",stu[1].name);
	printf(" %d",stu[1].fenshu);
	return 0;
}
