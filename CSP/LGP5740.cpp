#include<bits/stdc++.h>
using namespace std;
struct student{
	string name;
	int c,m,e;//chinese,math,english
}a[1000];
int main(){
	int ans[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].name>>a[i].c>>a[i].m>>a[i].e;
		ans[i]=a[i].c+a[i].m+a[i].e;
	}
	int minn=100,maxx,x;//"X" is used to mark the "xia biao(subscript)" of the most "NB" classmate.

	for(int i=0;i<n;i++){
		if(ans[i]>maxx){
			maxx=ans[i];
			x=i;
		}
	}
	cout<<a[x].name<<" "<<a[x].c<<" "<<a[x].m<<" "<<a[x].e;
	return 0;
}