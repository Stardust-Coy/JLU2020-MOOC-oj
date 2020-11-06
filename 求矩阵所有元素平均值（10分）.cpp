#include <stdio.h>
int main(){
	int n,m,*pn=&n,*pm=&m;
	scanf("%d%d",pn,pm);
	int a[10010]={0},*pa=a;
	double he=0.0;
	for(int i=1;i<=*pn;i++){
		for(int j=1;j<=*pm;j++){
			scanf("%d",pa+(i-1)*m+j);
			he+=*(pa+(i-1)*m+j);//×¢ÒâÊÇ*m 
		}
	}
	double pingjun=he/(double)(1.0*n*m);
	printf("%.2lf",pingjun);
	for(int i=1;i<=*pn;i++){
		for(int j=1;j<=*pm;j++){
			printf(" %d",*(pa+(i-1)*m+j));
		}
	}
	return 0;
}
