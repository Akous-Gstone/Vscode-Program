#include<bits/stdc++.h>
using namespace std;
typedef int LPX_NB;
typedef char C;
LPX_NB ans=0;
C s[100];
LPX_NB main(){
	cin>>s;
	for(LPX_NB i=0;i<8;i++){
		if(s[i]=='1'){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}