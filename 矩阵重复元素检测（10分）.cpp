#include <stdio.h>
int main(){
	int a[3][3],b[100010]={0};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
			if(b[a[i][j]]){
				printf("yes");
				return 0;
			}
			b[a[i][j]]=1;
		}
	}
	printf("no");
	return 0;
}
