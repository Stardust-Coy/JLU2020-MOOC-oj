#include <stdio.h>
int cishu=0;
void jiaogu(int x){
	if(x==1)return;
	if(x%2==0){
		printf("(³ý2)->%d",x/2);
		cishu++; 
		jiaogu(x/2);
	}else{
		printf("(³Ë3¼Ó1)->%d",x*3+1);
		cishu++;
		jiaogu(x*3+1);
	}
	
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",n);
	jiaogu(n); 
	printf("\n%d",cishu);
	return 0;
}
