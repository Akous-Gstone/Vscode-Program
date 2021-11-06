#include<cstdio>
#include<iostream>
int main(){
	int n,h[1000]={1,1};
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		for(int j=0;j<i;j++){
			h[i]+=h[i]*h[i-j-1];
		}
	}
	printf("%d",h[n]);
	return 0;
}