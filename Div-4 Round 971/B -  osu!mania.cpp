#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,r,a;
 string  rank_input ="";
 cin>>t;
 for(int i=1;i<=t;i++)
 {
  cin>>r;
  for (int i=1;i<=r;i++)
  {
    string input;
   cin>>input;
   for(int j=0;j<4;j++)
   {
     if(input[j]=='#')
      {
         a=j+1;
         rank_input += (48+a);
         rank_input+=" ";
      
      }
      
    
    }
 
 
 
  }
 reverse(rank_input.begin(),rank_input.end());
 cout<<rank_input<<endl;
  rank_input ="";
  
 } 
 
 return 0;
 
}
