#include<bits/stdc++.h>
typedef long long int LLI;
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	LLI rec=0,squ=0;
	for(LLI x=0;x<=n;x++){
		for(LLI y=0;y<=m;y++){
			LLI tmp=min(x,y);
			squ+=tmp;
			rec+=x*y-tmp;
		}
	}
	cout<<squ<<" "<<rec;
	return 0;
}
