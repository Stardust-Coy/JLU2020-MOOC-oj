#include <stdio.h>
#include <string.h>
int main(){
	char ch[10010];
	gets(ch);
	ch[strlen(ch)]=' ';
	int maxlen=0,tlen=0,pos=0;
	for(int i=0;i<=strlen(ch);i++){
		if(ch[i]!=' ')tlen++;
			else{
				if(tlen>maxlen){
					maxlen=tlen;
					pos=i;
				}
				tlen=0;
			} 
	}
	printf("%d ",maxlen);
	for(int i=pos-maxlen;i<pos;i++){
		printf("%c",ch[i]);
	}
	return 0;
}

