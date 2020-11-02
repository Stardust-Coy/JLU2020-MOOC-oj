#include <stdio.h>
int main(){
	int y,m,d;
	scanf("%d%d%d",&y,&m,&d);
	switch(m){
		case 1:{
			if((d>0)&&(d<=31))printf("OK\n");
				else printf("NO\n");
			break;
		}
		case 3:{
			if((d>0)&&(d<=31))printf("OK\n");
				else printf("NO\n");
			break;
		}
		case 5:{
			if((d>0)&&(d<=31))printf("OK\n");
				else printf("NO\n");
			break;
		}
		case 7:{
			if((d>0)&&(d<=31))printf("OK\n");
				else printf("NO\n");
			break;
		}
		case 8:{
			if((d>0)&&(d<=31))printf("OK\n");
				else printf("NO\n");
			break;
		}
		case 10:{
			if((d>0)&&(d<=31))printf("OK\n");
				else printf("NO\n");
			break;
		}
		case 12:{
			if((d>0)&&(d<=31))printf("OK\n");
				else printf("NO\n");
			break;
		}
		case 4:{
			if((d>0)&&(d<=30))printf("OK\n");
				else printf("NO\n");
			break;
		}
		case 6:{
			if((d>0)&&(d<=30))printf("OK\n");
				else printf("NO\n");
			break;
		}
		case 9:{
			if((d>0)&&(d<=30))printf("OK\n");
				else printf("NO\n");
			break;
		}
		case 11:{
			if((d>0)&&(d<=30))printf("OK\n");
				else printf("NO\n");
			break;
		}
		case 2:{
			if(((y%4==0)&&(y%100!=0))||(y%400==0)){
				if((d>0)&&(d<=29))printf("OK\n");
					else printf("NO\n");
			}else{
				if((d>0)&&(d<=28))printf("OK\n");
					else printf("NO\n");
			}
			break;
		}
		default:printf("NO");
	}
	return 0;
}
