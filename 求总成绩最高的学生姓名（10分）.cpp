#include <stdio.h>
#include <string.h>
struct Xinxi{
	char name[10010];
	int yuwen,shuxue,zongfen;
}stu[10010];
int main(){
	int n;
	scanf("%d",&n);
	char winner[10010];
	int maxfen=-1;
	for(int i=1;i<=n;i++){
		scanf("%s",stu[i].name);
		scanf("%d%d",&stu[i].shuxue,&stu[i].yuwen);
		stu[i].zongfen=stu[i].yuwen+stu[i].shuxue;
		if(stu[i].zongfen>maxfen){
			maxfen=stu[i].zongfen;
			for(int k=0;k<strlen(stu[i].name);k++){
				winner[k]=stu[i].name[k];
			}
			winner[strlen(stu[i].name)]='\0';
		} 
	}
	puts(winner);
	return 0;
}
