#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int terms;

    while (true)
    {
        cout << "Enter no of terms in input array ";
        cin >> terms;

        if(terms > 0)
        {
            break;
        }
        else
        {
            cout << "Please enter a positive integer" << endl;
        }
    }

    vector<int> input(terms);
    int target;
    int i,j;
    vector<int> output;

    for(i=0;i<input.size();i++)
    {
        cout << "Please enter a term: ";
        cin >> input[i];
    }

    cout << "Please enter a target sum: ";
    cin >> target;
    
    for(i=0;i<input.size();i++)
    {
        for(j=i+1;j<input.size();j++)
        {
            if(input[i] + input[j] == target)
            {
                output.push_back(i);
                output.push_back(j);
                break;
            }
        }
    }

    cout << "OUTPUT ARRAY: ";
    for(i=0;i<output.size();i++)
    {
        cout << output[i] << " ";
    }

    return 0;
}