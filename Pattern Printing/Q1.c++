#include <iostream>
using namespace std;

int main()
{
    int i,j,k,l,m,n;
    
    cout << "Enter no of rows: ";
    cin >> n;
    
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout << j << " ";
        }
        
        for(k=n-1;k>(n-i);k--)
        {
            cout << "*" << " ";
        }
        
        for(l=(n-i);l<n-1;l++)
        {
            cout << "*" << " ";
        }
        
        for(m=i;m<=n;m++)
        {
            cout << (n-m+1) << " ";
        }
        cout << endl;
    }
    return 0;
}