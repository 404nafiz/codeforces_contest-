#include <iostream>
using namespace std;

int main()
{
 long long int a,b,factorial=1;
cin>>a;
for(int i=1;i<=a;i++)
{
 cin>>b;
 for(int i=1;i<=b;i++)
 {
   factorial=factorial*i;

 }
 cout<<factorial<<endl;
 factorial=1;
}


}
