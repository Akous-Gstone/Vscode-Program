#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int n,m;
double s=0,ans,x,mmin=100,mmax=0;
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        	cin>>x;
			ans+=x;
			mmin=min(x,mmin);
			mmax=max(mmax,x);
		}
        ans=ans-mmin-mmax;
        ans=1.0*ans/(1.0*(m-2));
        if(ans>s){
        	s=ans;
		}
        ans=0;
        mmin=100;
    }
    printf("%0.2f",s);
    return 0;
}
