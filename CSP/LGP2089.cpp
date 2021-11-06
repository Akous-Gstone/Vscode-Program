#include<bits/stdc++.h>
#define rep(i,a,b) for (int i=max(1,a);i<=min(3,b);i++)
using namespace std;
int s[10001][11];
int main()  
{  
    int n,ans=0;
    cin>>n;
    for (int a=0;a<3;a++)  
      for (int b=0;b<3;b++)  
        for (int c=0;c<3;c++)  
          for (int d=0;d<3;d++)  
            for (int e=0;e<3;e++)  
              for (int f=0;f<3;f++)  
                for (int g=0;g<3;g++)  
                  for (int h=0;h<3;h++)  
                    for (int k=0;k<3;k++)  
                      for (int l=0;l<3;l++)
                        if (a+b+c+d+e+f+g+h+k+l==n)  
                        {  
                            ans++;
                            s[n][1]=a;s[n][5]=b;s[n][6]=c;  
                            s[n][7]=d;s[n][8]=e;s[n][9]=f;s[n][10]=g;
                        }  
    cout<<n<<endl; 
    for (int i=1;i<=n;i++)  
    {  
        for (int j=1;j<=10;j++)  
          cout<<s[i][j]<<" ";
        cout<<endl; 
    }     
}
