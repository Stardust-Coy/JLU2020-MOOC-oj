#include <stdio.h>
#include <string.h>
struct Zifuchuan{
	char str[110];
}ch[110];
int zuida(struct Zifuchuan a[],int x){
	if(x==1)return 1;
	int y=zuida(a,x-1);
	return strcmp(a[x].str,a[y].str)>0?x:y;
}
int main(){
	int n;
	scanf("%d",&n);
	getchar();//¹ıÂË»»ĞĞ 
	for(int i=1;i<=n;i++){
		gets(ch[i].str);
	}
	printf("%s",ch[zuida(ch,n)].str);
	return 0;
}
