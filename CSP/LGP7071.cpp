#include<bits/stdc++.h>
using namespace std;
typedef int LPX_NB;
typedef void V;
LPX_NB in,out[30],save;
V change(int a){
    LPX_NB res=0;
    while(a){
        if(a&1) out[res]=pow(2,res);
        res++;
        a>>=1;
    }
    save=res;
}
LPX_NB main(){
    cin>>in;
    if(in%2==1||in==0){
    	cout<<-1<<endl;
    	return 0;
    }
    else{
    	change(in);
    	for(LPX_NB i=save;i>=1;i--){
    		if(out[i]!=0){
    			printf("%d ",out[i]);
			}		    		
		}
    	return 0;
	}
}