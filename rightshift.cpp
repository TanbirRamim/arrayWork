// right shift by 1 index of an array
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
    int temp = a[n - 1];
    for (i = n - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}