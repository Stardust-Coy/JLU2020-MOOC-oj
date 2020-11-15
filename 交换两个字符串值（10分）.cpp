#include <stdio.h>
#include <string.h>
char ch1[10010],ch2[10010];
void swap(char *p1,char *p2){
	char temp;
	while(*p1!='\0'||*p2!='\0'){
		temp=*p1;
		*p1=*p2;
		*p2=temp;
		p1++;
		p2++;
	}
	
}
int main(){
	gets(ch1);
	gets(ch2);
	swap(ch1,ch2); 
	puts(ch1);
	puts(ch2);
	return 0;
}
