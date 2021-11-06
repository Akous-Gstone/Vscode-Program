#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
bool ispn(int a){
	if(a<=1) return false;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return false;
		}
		else{
			return true;
		}
	}
}
int main(){
	int n,in;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>in;
		if(ispn(in)){
			printf("%d",in);
		}
	}
	return 0;
}
