#include <stdio.h>
int main(){
	char s1[100],s2[100],s3[100],s4[100],s5[100],s6[100];
	for(int i=0;i<=99;i++){
		s1[i]='-';
	}
	for(int i=0;i<=99;i++){
		s2[i]='-';
	}
	for(int i=0;i<=99;i++){
		s3[i]='-';
	}
	for(int i=0;i<=99;i++){
		s4[i]='-';
	}
	for(int i=0;i<=99;i++){
		s5[i]='-';
	}
	for(int i=0;i<=99;i++){
		s6[i]='-';
	}
	scanf("%s%s%s%s%s%s",&s1,&s2,&s3,&s4,&s5,&s6);
	int b=1,sum=0;
	for(int i=0;i<=99;i++){
		if(s1[i]!=s6[i]){
			b=0;
			break;
		}
	}
	if(b)sum++;
	b=1;
	for(int i=0;i<=99;i++){
		if(s2[i]!=s6[i]){
			b=0;
			break;
		}
	}
	if(b)sum++;
	b=1;
	for(int i=0;i<=99;i++){
		if(s3[i]!=s6[i]){
			b=0;
			break;
		}
	}
	if(b)sum++;
	b=1;
	for(int i=0;i<=99;i++){
		if(s4[i]!=s6[i]){
			b=0;
			break;
		}
	}
	if(b)sum++;
	b=1;
	for(int i=0;i<=99;i++){
		if(s5[i]!=s6[i]){
			b=0;
			break;
		}
	}
	if(b)sum++;
	printf("%d",sum);
	return 0;
}
