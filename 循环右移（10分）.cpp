#include <stdio.h>
int main(){
	int j,a[15];
	for(int i=1;i<=10;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&j);
	if(j>=10)j%=10;
	int k=10-j+1,count=0;//k用来控制当前输出位 count用来计算已输出个数
	if(k>10)k=k%10;
	while(count<10){
		printf("%d",a[k]);
		count++;
		k++;
		if(k>10)k=k%10;
		if(k==0)k+=10;
	}
	printf("\n");
	return 0;
}
