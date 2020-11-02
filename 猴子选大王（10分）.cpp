#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int k=1,count=0,death=0;
	int b[1010]={0};//0±íÊ¾Ã»ËÀ
	//int shuchuguo=0;
	do{
		if(k>n)k=1;
		if(!b[k]){
			count++;
			if(count==m){
				count=0;
				death++;
				b[k]=1;
				/*if(!shuchuguo){
					printf("%d",k);
					shuchuguo=1;
				}else printf(" %d",k);*/
				printf("%d ",k);
			} 
		}
		k++;
	}while(death<n); 
	return 0;
}
