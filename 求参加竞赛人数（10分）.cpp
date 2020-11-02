#include <stdio.h>
int main(){
	for(int i=1;i<=100;i+=4){//i为一年级生
		for(int j=7;j<=100;j+=7){//j为二年级生 
			if(j/7*6==(i-1)/4*3+1+5)printf("%d\n",i+j); 
		} 
	}
	return 0;
}
