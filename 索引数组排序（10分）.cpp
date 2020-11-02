#include <stdio.h>
int main(){
	int a[5],b[5];
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
		printf("%d",a[i]);
		b[i]=i;
	}
	printf("\n");
	int temp;
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("%d",b[i]);
	}
	return 0;
}
