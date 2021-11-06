#include <iostream>
using namespace std;
int main()
{
	char a[100]={};
	int i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if('a'<=a[i]&&a[i]<='z')
		{
			a[i]-='a'-'A';
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}
