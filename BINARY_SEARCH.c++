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

    int target;

    cout << "Enter a target value: ";
    cin >> target;

    int beg = 0;
    int end = nums.size() - 1;
    int mid = 0;

    while (beg <= end)
    {
        mid = (beg + end)/2;

        if(target > nums[mid])
        {
            beg = mid+1;
        }
        else if(target < nums[mid])
        {
            end = mid-1;
        }
        else if(target == nums[mid])
        {
            break;
        }
    }
    if(target == nums[mid])
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}