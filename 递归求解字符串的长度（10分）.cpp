#include <stdio.h>
#include <string.h>
int changdu(char s[],int n){
	if(s[n]=='\0')return 0;
	return 1+changdu(s,n+1);
}
int main(){
	char str[100010];
	gets(str);
	printf("%d",changdu(str,0));
	return 0;
}
