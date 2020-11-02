#include <stdio.h>
int main(){
	int a,lingdegeshu=0;
	for(int i=1;i<=10;i++){
		scanf("%d",&a);
		if(a==0){
			lingdegeshu++;
		}else{
			printf("%d",a);
		}
	}
	for(int i=1;i<=lingdegeshu;i++){
		printf("0");
	} 
	printf("\n");
	return 0;
}
