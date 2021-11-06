#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a[8888][8888]={},n;
void q01(int x,int y,int n){
	if(n==0) a[x][y]=1;
	else{
		q01(x+(1<<n-1),y,n-1);
		q01(x,y+(1<<n-1),n-1);
		q01(x+(1<<n-1),y+(1<<n-1),n-1);
	}
}
int main(){
	int n;
	cin>>n;
	q01(0,0,n);
	for(int i=0;i<1<<n;i++){
		for(int j=0;j<1<<n;j++){
			printf("%d%c",a[i][j],j==(1<<n)-1?"\n":" ");
		}
	}
}
