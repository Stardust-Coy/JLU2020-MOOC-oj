#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n>=90)printf("A\n");
	if((n>=80)&&(n<=89))printf("B\n");
	if((n>=70)&&(n<=79))printf("C\n");
	if((n>=60)&&(n<=69))printf("D\n");
	if(n<60)printf("E\n");
	return 0;
}
