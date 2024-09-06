
#include<bits/stdc++.h>
 
using namespace std;
int main()
{
   long long int t,sum=0;
   cin>>t;
   int input[t];
   for(int i=0;i<t;i++)
   {
     cin>>input[i];
     sum=sum+input[i];
   }
   
   cout<<abs(sum);

   
   
 return 0;
}
 
 
 
 
