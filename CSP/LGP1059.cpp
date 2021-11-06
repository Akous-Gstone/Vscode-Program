#include<bits/stdc++.h>
using namespace std;
int a[105],n,t,nn;
bool s[1005];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>t;
    	if(s[t]==1){
    		continue;
		}
    	s[t]=1;
    	a[nn++]=t;
    }
    sort(a,a+nn);
    cout<<nn<<endl;
    for(int i=0;i<nn;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
