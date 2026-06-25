#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int terms;

    cout << "Enter no of terms: ";
    cin >> terms;

    vector<int> nums(terms);

    for(int i=0;i<terms;i++)
    {
        cout << "Enter element: ";
        cin >> nums[i];
    }

    int max = 0;
    int count = 0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] == 1)
        {
            count ++;
            if(max < count)
            {
                max = count;
            }
        }
        else 
        {
            count = 0;
        }
    }

    cout << "MOST CONSECUTIVES 1: " << max;
    
    return 0;
}