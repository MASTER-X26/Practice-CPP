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

    vector<int> nums(terms);
    int single,duplicate=0;

    for(int i=0;i<nums.size();i++)
    {
        cout << "Please enter a term: ";
        cin >> nums[i];
    }

    for(int i=0;i<nums.size();i++)
    {
        int count = 0;

        for(int j=0;j<nums.size();j++)
        {
            if(nums[i] == nums[j])
            {
                count ++;
            }
        }
        if(count == 1)
        {
            single = nums[i];
        }
    }

    cout << single;
    
    return 0;
}