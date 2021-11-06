#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	char a[110];
	int ans[26]={0};
	int l,maxn,minn,d;
	scanf("%s",a);
	l=strlen(a);
	for(int i=0;i<l;i++){
		ans[a[i]-'a']++;
	}
	maxn=0;minn=10000;
	for(int i=0;i<26;i++){
		if(ans[i]>maxn)maxn=ans[i];
		if(ans[i]!=0 && ans[i]<minn)minn=ans[i];
	}
	d=maxn-minn;
	if(d==0||d==1){
		printf("No Answer\n0\n");
		return 0;
	}
	for(int h=2;h*h<=d;h++){
		if(d%h==0){
			printf("No Answer\n0\n");
			return 0;
		}
	}
	printf("Lucky word\n%d\n",maxn-minn);
	return 0;
}
