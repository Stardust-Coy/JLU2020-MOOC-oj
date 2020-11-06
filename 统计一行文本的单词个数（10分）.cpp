#include <stdio.h>
int main(){
	char str[100];
	gets(str);//整行输入 
	int sum=0;
	for(int i=1;i<=98;i++){
		if((str[i]==' ')&&(str[i-1]!=' '))sum++;
	}//考虑单词间有多个空格的情况 
	sum++;
	printf("%d",sum);
	return 0;
}
