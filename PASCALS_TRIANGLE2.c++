#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int numRows;

    cout << "Enter row to be print: ";
    cin >> numRows;

    vector<vector<int>> pascal;
    vector<int> temp;

    for(int i=0;i<numRows+1;i++)
    {
        int sum = 0;
        for(int j=0;j<i+1;j++)
        {
            if(j==0 || j==i)
            {
                temp.push_back(1);
            }
            else
            {
                sum = pascal[i-1][j-1] + pascal[i-1][j];
                temp.push_back(sum);
            }
        }
        if(i == numRows+1)
        {
            break;
        }
        else
        {
            pascal.push_back(temp);
            temp.clear();
            sum = 0;
        }
    }

    for(int i=0;i<pascal.size();i++)
    {
        for(int j=0;j<pascal[i].size();j++)
        {
            if(i != numRows-1)
            {
                continue;
            }
            else
            {
                cout << pascal[i][j] << " ";
            }
        }
    }
    return 0;
}