#include <stdio.h>
int main(){
	char ch=getchar();
	printf("%c%c%c\n",(char)(ch-1),(char)(ch),(char)(ch+1));
	return 0;
}
