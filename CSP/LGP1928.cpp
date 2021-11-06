#include<bits/stdc++.h>
using namespace std;
string expand(){
    string s="",X;
    char c;int D;
    while(cin>>c){
        if(c=='['){
            cin>>D;
            X=expand();
            while(D--) s+=X;
        }
        else if(s=="]"){
            return s;
        }
        else s+=c;
    }
    return s;
}
int main(){
    cout<<expand()<<endl;;
    system("pause");
    return 0;
}