#include <iostream>
using namespace std;

int main()
{
    long long int input, o = 0;
    cin >> input;
    for (int i = 2; i < input; i++)
    {
        if (input % i == 0)
            o++;
       
    }
    if (o == 0)
    {
        cout <<"YES";
    }
    else
    cout<<"NO";
}
