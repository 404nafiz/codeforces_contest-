#include <bits/stdc++.h>
using namespace std;
int main()
{
  int test_case,a,even=0,odd=0,positive=0,negative=0;
  cin>>test_case;
  for(int i=1;i<=test_case;i++)
  {
    cin>>a;
    if(a%2==0) even++;
    else odd++;
    if(a==0) continue;
    else if(a>=0) positive++;
    else negative++;
  }
cout<<"Even: "<<even<<endl;
cout<<"Odd: "<<odd<<endl;
cout<<"Positive: "<<positive<<endl;
cout<<"Negative: "<<negative<<endl;
 
 
}
