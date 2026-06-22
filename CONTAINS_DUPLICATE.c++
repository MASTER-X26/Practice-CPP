#include <iostream>
#include <vector>
#include <algorithm>
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

    bool ans = false;

    sort(nums.begin(),nums.end());

    for(int i=0;i<nums.size();i++)
    {
        if(i<nums.size()-1 && nums[i] == nums[i+1])
        {
            ans = true;
            break;
        }
    }

    if(ans == true)
    {
        cout << "THERE IS A DUPLICATE IN ARRAY";
    }
    else
    {
        cout << "THERE IS NOT A DUPLICATE IN ARRAY";
    }
    
    return 0;
}