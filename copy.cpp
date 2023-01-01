// copy an array from another array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n];
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}