// right shift from a particular index of an array

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
    int index;
    cout << "Enter the index from which you want to right shift: ";
    cin >> index;
    int temp = a[n - 1];
    for (i = n - 1; i > index; i--)
    {
        a[i] = a[i - 1];
    }
    a[index] = temp;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}