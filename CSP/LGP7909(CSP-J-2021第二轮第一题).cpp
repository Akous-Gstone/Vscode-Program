#include<bits/stdc++.h>
using namespace std;
int n,L,R;
int main(){
	cin>>n>>L>>R;
	cout<<min(R,L+(n-1-L%n))%n;
	return 0;
}