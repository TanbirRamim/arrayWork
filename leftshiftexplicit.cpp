// left shift from a particular index of an array
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
    cout << "Enter the index from which you want to left shift: ";
    cin >> index;
    for (i = index; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    a[n - 1] = 0;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}