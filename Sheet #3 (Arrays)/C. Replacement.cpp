
#include<bits/stdc++.h>
 
using namespace std;
int main()
{
   
   int test_case,test_input,x;
   cin>>test_case;
   int arry_input[test_case];
   for(int i=0;i<test_case;i++)
   {
    cin>>arry_input[i];
   }
   for(int a=0;a<test_case;a++)
   {
    if(arry_input[a]>0)
    {
      arry_input[a]=1;
    }
    else if(arry_input[a]<0)
    {
      arry_input[a]=2;
    }
    else if(arry_input[a]==0)
    {
      arry_input[a]=0;
    }
   }
   for(int i=0;i<test_case;i++)
   {
    cout<<arry_input[i]<<" ";
   }
  

   
 return 0;
}
 
 
 
 
