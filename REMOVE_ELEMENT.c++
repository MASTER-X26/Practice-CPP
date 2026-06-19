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

    int val;

    cout << "Enter a value to remove: ";
    cin >> val;

    int k = 0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        } 
    }

    cout << "ARRAY AFTER REMOVING: ";

    for(int i=0;i<k;i++)
    {
        cout << nums[i] << " ";
    }
    
    return 0;
}