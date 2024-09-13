#include <bits/stdc++.h>
using namespace std;

int main()     
{
  long long int t,bucket,sum=0,input;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
     cin>>bucket;
     for(int j=1;j<=bucket;j++)
     {
      cin>>input; 
     sum=sum+input;
     }
      long long int s=sqrt(sum);
      if(s*s==sum) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      sum=0;
      
     }
    return 0;
}
