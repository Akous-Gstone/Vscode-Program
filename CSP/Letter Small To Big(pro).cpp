#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	char s;
	int i,n;
	while(1)
	{
		s=getchar();
		if(s==EOF)break;
		if('a'<=s&&s<='z')
			s+='A'-'a';
	}
	return 0;
}
