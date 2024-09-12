#include<bits/stdc++.h>
 
using namespace std;
int main()     
{
 int test_case,a=0,b=0,c=0;
 int ini=0,inj=0;
 cin>>test_case;
 getchar();
 string input;
 for(int j=1;j<=test_case;j++)
 {
   for (int i=1;i<=3;i++)
   {
     getline(cin,input);
    sort(input.begin(),input.end());
    if(input[0]=='?')
    {
if (input[0] == '?') {
    if ((input[1] == 'B' && input[2] == 'C') || (input[1] == 'C' && input[2] == 'B')) a++; 
    else if ((input[1] == 'A' && input[2] == 'C') || (input[1] == 'C' && input[2] == 'A')) b++; 
    else if ((input[1] == 'A' && input[2] == 'B') || (input[1] == 'B' && input[2] == 'A')) c++; 
} 
    }
    
   }
   if(a!=0) cout<<"A"<<endl;
   else if(b!=0) cout<<"B"<<endl;
   else if (c!=0) cout<<"C"<<endl;
   a=0;
   b=0;
   c=0;
 }
  return 0;
}
