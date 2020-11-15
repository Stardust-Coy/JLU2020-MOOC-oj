#include <stdio.h>
#include <string.h>
int main(){
	char ch[100010];
	gets(ch);
	for(int i=0;i<strlen(ch);i++){
		if((ch[i]>='A')&&(ch[i]<='Z')){
			ch[i]=(char)(155-ch[i]);
		}
	}
	puts(ch);
	return 0;
}
