#include<iostream>
#include<cstring>
using namespace std;
string s;
int l;
int main(){
	getline(cin,s);
	l=s.length();
	int as=l;
	for(int i=0;i<l;i++){
		if(s[i]==' ') as--;
	}
	cout<<as<<endl;
	return 0;
}
