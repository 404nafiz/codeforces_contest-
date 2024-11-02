#include <iostream>
using namespace std;

int main()
{
    char a;
    int b, c;
    cin >> a;
    cin >> b;
    for (int i = 1; i <=b; i++)
    {
        cin >> c ;
        if (a == '+')
        {
            for (int j = 1; j <= c; j++)
            {
                cout << "+";
            }
            cout<<endl;
        }
        if (a == '-')
        {
            for (int j = 1; j <= c; j++)
            {
                cout << "-";
            }
               cout<<endl;
        }
        if (a == '*')
        {
            for (int j = 1; j <= c; j++)
            {
                cout << "*";
            }
               cout<<endl;
            
        }
        if (a == '/')
        {
            for (int j = 1; j <= c; j++)
            {
                cout << "/";
            }
               cout<<endl;
        }
    }
}
