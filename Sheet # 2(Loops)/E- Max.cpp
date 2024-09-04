#include <bits/stdc++.h>
using namespace std;
int main()
{
 int max=0,input,test_case;
 cin>>test_case;
 for(int i=1;i<=test_case;i++)
{
 cin>>input;
 if(max<input) max=input;
 
}
cout<<max;
 
}
