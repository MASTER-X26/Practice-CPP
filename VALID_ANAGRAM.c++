#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s,t;

    cout << "Enter the first string: ";
    getline(cin,s);

    cout << "Enter the second string: ";
    getline(cin,t);

    bool condition = false;

    if(s.length() != t.length())
    {
        condition = false;
    }
    else
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s == t)
        {
            condition  = true;
        }
    }

    if(condition == true)
    cout << "BOTH STRINGS ARE VALID ANAGRAMS";

    else
    cout << "BOTH STRINGS ARE NOT VALID ANAGRAMS";

    return 0;
}
