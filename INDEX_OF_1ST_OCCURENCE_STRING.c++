#include <iostream>
#include <string>
using namespace std;

int main()
{
    string haystack,needle;

    cout << "Enter first string: ";
    getline(cin,haystack);

    cout << "Enter second string: ";
    getline(cin,needle);

    int condition = -1;

    if(haystack.size() < needle.size())
    {
        condition = -1;
    }
    else
    {
        for(int i=0;i<haystack.size()-needle.size()+1;i++)
        {
            if(haystack.substr(i,needle.size()) == needle)
            {
                condition = i;
                break;
            }
        }
    }
    
    if(condition == -1)
    {
        cout << "No occurence";
    }
    else
    {
        cout << "Index of first occurence = " << condition;
    }

    return 0;
}