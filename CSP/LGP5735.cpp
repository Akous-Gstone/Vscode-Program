#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
double pf(double x1,double y1,double x2,double y2){
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main(){
	double x1,y1,x2,y2,x3,y3,ans;
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	ans=pf(x1,y1,x2,y2);
	ans+=pf(x2,y2,x3,y3);
	ans+=pf(x1,y1,x3,y3);
	printf("%.2f",ans);
	return 0;
}