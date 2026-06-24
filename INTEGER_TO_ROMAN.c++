#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number less than 4000: ";
    cin >> num;

    string roman = "";
    int digits = 0;
    int temp = num;
    string temp2 = to_string(num);

    while(temp > 0)
    {
        digits ++;
        temp /= 10;
    }

    for(int i=0;i<temp2.size();i++)
    {
        if(digits == 4)
        {
            roman += string(temp2[i] - '0','M');
            digits --;
        }
        else if(digits == 3)
        {
            if(temp2[i] == '4')
            {
                roman += "CD";
                digits --;
            }
            else if(temp2[i] == '9')
            {
                roman += "CM";
                digits --;
            }
            else if(temp2[i] == '5')
            {
                roman += 'D';
                digits --;
            }
            else if(temp2[i] == '6')
            {
                roman += "DC";
                digits --;
            }
            else if(temp2[i] == '7')
            {
                roman += "DCC";
                digits --;
            }
            else if(temp2[i] == '8')
            {
                roman += "DCCC";
                digits --;
            }
            else
            {
                roman += string(temp2[i] - '0','C');
                digits --;
            }
        }
        else if(digits == 2)
        {
            if(temp2[i] == '4')
            {
                roman += "XL";
                digits --;
            }
            else if(temp2[i] == '9')
            {
                roman += "XC";
                digits --;
            }
            else if(temp2[i] == '5')
            {
                roman += 'L';
                digits --;
            }
            else if(temp2[i] == '6')
            {
                roman += "LX";
                digits --;
            }
            else if(temp2[i] == '7')
            {
                roman += "LXX";
                digits --;
            }
            else if(temp2[i] == '8')
            {
                roman += "LXXX";
                digits --;
            }
            else
            {
                roman += string(temp2[i] - '0','X');
                digits --;
            }
        }
        else if(digits == 1)
        {
            if(temp2[i] == '4')
            {
                roman += "IV";
                digits --;
            }
            else if(temp2[i] == '9')
            {
                roman += "IX";
                digits --;
            }
            else if(temp2[i] == '5')
            {
                roman += 'V';
                digits --;
            }
            else if(temp2[i] == '6')
            {
                roman += "VI";
                digits --;
            }
            else if(temp2[i] == '7')
            {
                roman += "VII";
                digits --;
            }
            else if(temp2[i] == '8')
            {
                roman += "VIII";
                digits --;
            }
            else
            {
                roman += string(temp2[i] - '0','I');
                digits --;
            }
        }
    }

    cout << "INTEGER TO ROMAN: " << roman;
    
    return 0;
}