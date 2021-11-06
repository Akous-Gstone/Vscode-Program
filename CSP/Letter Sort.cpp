#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	char s[60];
	int n;
	scanf("%d %s",&n,s);
	for(int i=0;s[i];i++)
	{
		putchar((s[i]-'a'+n)%26+'a');
	}
	return 0;
}
