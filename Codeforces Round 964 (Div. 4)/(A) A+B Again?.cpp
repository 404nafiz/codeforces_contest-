#include<bits/stdc++.h>
 
using namespace std;
int main()     
{
 int t,x,y,sum=0,d1;
 cin>>t;
 if(t>=1&&t<=90)
 {
 for(int i=1;i<=t;i++)
 {
   cin>>x;
   if(10<=x&&x<=99)
   {
    while(x>0)
    {
      d1=x%10;
      x=x/10;
      sum=d1+sum;
    }
       cout<<sum<<endl;
       sum=0;

 }
 }
 }
  
 return 0;
}
