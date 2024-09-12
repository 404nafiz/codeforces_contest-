#include<bits/stdc++.h>
 
using namespace std;
int main()     
{
 int test_case,a,b,c;
 cin>>test_case;
 int input[test_case];
 for(int i=0;i<test_case;i++)
 {
  cin>>a>>b>>c;
  if(a==b) cout<<c<<endl;
  else if(a==c) cout<<b<<endl;
  else if(c==b) cout<<a<<endl;
 }
 

 
  return 0;
}
