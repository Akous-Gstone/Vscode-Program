#include<bits/stdc++.h>
using namespace std;
typedef int LPX_NB;
typedef void V;
LPX_NB main(){
	LPX_NB n,w,a[605]={};
	scanf("%d%d",&n,&w);
	for(LPX_NB i=1;i<=n;i++){
		LPX_NB t;
		scanf("%d",&t);
		a[t]++;
		LPX_NB sum=0;
		for(LPX_NB j=600;j>=0;j--){
			sum+=a[j];
			if(sum>=max(1,i*w/100)){
				printf("%d ",j);
				break;
			}
		}
	}
	return 0;
}