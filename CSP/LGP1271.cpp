#include<iostream>
using namespace std;
int main(){
	int a[1000],n,m,t;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>t;
		a[t]++;
	}
	for(int j=1;j<=n;j++){
		for(int i=0;i<a[j];i++){
			cout<<j<<" ";
		}
	}
	return 0;
}