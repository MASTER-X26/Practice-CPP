#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    cout << "Enter a string: ";
    getline(cin,s);

    int ans = -1;
    for(int i=0;i<s.length();i++)
    {
        bool condition = true;
        for(int j=0;j<s.length();j++)
        {
            if(s[i] == s[j] && i!=j)
            {
                condition = false;
                break;
            }
        }
        if(condition == true)
        {
            ans = i;
            break;
        }
    }

    if(ans == -1)
    {
        cout << "No unique character exists in the string";
    }
    else
    {
        cout << "Index of first unique character is: " << ans;
    }
    
    return 0;
}