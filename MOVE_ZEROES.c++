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

    int k=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] != 0)
        {
            swap(nums[i],nums[k++]);
        }
    }

    cout << "ARRAY AFTER MOVING ZEROES: ";
    for(int i=0;i<terms;i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}