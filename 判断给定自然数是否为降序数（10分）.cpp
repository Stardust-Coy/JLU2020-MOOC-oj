#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int b=1;
	int youyiwei=n%10,dangqianwei;
	n/=10;
	while(n){
		dangqianwei=n%10;
		if(dangqianwei<youyiwei){
			b=0;
			break;
		}
		youyiwei=dangqianwei;
		n/=10; 
	}
	if(b)printf("YES");
		else printf("NO");
	return 0;
}
