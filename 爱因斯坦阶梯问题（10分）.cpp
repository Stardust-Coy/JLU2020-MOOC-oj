#include <stdio.h>
int main(){
	for (int i=7;;i++){
		if((i%2==1)&&(i%3==2)&&(i%5==4)&&(i%7==0)){
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
