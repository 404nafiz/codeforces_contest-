#include <iostream>
using namespace std;

int main()
{
  int test_case,input;
  cin>>test_case;
  for(int i=1;i<=test_case;i++)
  {
     cin>>input;
     while(input!=0)
     {
      int remainder=input%10;
    cout<<remainder<<" ";
    input=input/10;
     }
     cout<<endl;


  }
}
