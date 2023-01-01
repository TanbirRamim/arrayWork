// user defined size array
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
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}