#include<bits/stdc++.h>
using namespace std;
int a[10001],n,m;
double q,ans,x,minn=1e9,maxx;
int main() {
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j) cin>>x,ans+=x,minn=min(x,minn),maxx=max(maxx,x);
        ans=ans-minn-maxx;
        ans=1.0*ans/(1.0*(m-2));
        if(ans>q) q=ans;
        ans=0;
        minn=1e9;
    }
    printf("%0.2f\n",q);
    return 0;
}
