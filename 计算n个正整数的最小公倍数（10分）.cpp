#include <stdio.h>
int gcd(int x,int y){
	return x%y==0?y:gcd(y,x%y);
}
int lcm(int x,int y){
	return x*y/gcd(x,y);
} 
int main(){
	int n,a[1010];
	scanf("%d%d",&n,&a[1]);
	int ans=a[1];
	for(int i=2;i<=n;i++){
		scanf("%d",&a[i]);
		ans=lcm(ans,a[i]);
	}
	printf("%d",ans);
	return 0;
}
