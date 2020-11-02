#include <stdio.h>
#include <string.h>
int main(){
	char num[1000010];
	scanf("%s",&num);
	int i=0,j=strlen(num)-1;
	while(i<=j){
		if(num[i]!=num[j]){
			printf("NO\n");
			return 0;
		}
		i++;
		j--;
	}
	printf("YES\n");
	return 0;
}
