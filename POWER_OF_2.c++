#include <iostream>
using namespace std;

int main()
{
    bool condition;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int temp = n;

    if(n == 1)
    {
        condition = true;
    }
    else if(n == 0)
    {
        condition = false;
    }
    else if(n == 2)
    {
        condition = true;
    }
    else if(n % 2 != 0)
    {
        condition = false;
    }
    else
    {
        while(n != 1)
        {
            n = n / 2;
            if(n == 2)
            {
                condition = true;
                break;
            }
            else if(n % 2 != 0)
            {
                condition = false;
                break;
            }
            condition = false;
        }
    }
    if(condition == true)
    {
        cout << temp << " is a power of 2";
    }
    else
    {
        cout << temp << " is not a power of 2";
    }
    return 0;
}