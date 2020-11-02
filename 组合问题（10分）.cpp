#include <stdio.h>
int jiecheng(int x){
	if(x<=0)return 0;
	int sum=1;
	for(int i=2;i<=x;i++){
		sum*=i;
	}
	return sum;
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	if((m<n)&&(m>0)&&(n>0)){
		printf("0\n");
		return 0;
	}
	if((m==n)&&(m>0)&&(n>0)){
		printf("1\n");
		return 0;
	}
	if((m>n)&&(m>0)&&(n>0)){
		printf("%d\n",jiecheng(m)/jiecheng(n)/jiecheng(m-n));
		return 0;
	}
	printf("-1\n");
	return 0;
}
