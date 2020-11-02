#include <stdio.h>
int main(){
	double x;
	int n;
	scanf("%lf%d",&x,&n);
	int count=0;//count记录弹跳次数
	double changdu=0;//路径长度 
	while(x>1e-5){
		changdu+=x*1.5;
		x/=2.0;
		count++;
		if(count==n)printf("%.6f ",x);
	}
	printf("%.6f",changdu-x);
	return 0;
}
