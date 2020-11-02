#include <stdio.h>
int main(){
	int h,m,s;
	scanf("%d%d%d",&h,&m,&s);
	if((h>=0)&&(h<24)&&(m>=0)&&(m<60)&&(s>=0)&&(s<60))printf("OK\n");
		else printf("NO\n");
	return 0;
}
