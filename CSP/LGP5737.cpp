#include <iostream>
using namespace std;
int x,y,ans[50],cnt;
int main(){
	cin>>x>>y;
	for(int i=x;i<=y;i++){
		if(!(i%400)||!(i%4)&&i%100){
			ans[cnt++]=i;
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
