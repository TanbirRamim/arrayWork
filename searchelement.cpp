// search an element from an array
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
    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << "Element found at index " << i << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "Element not found" << endl;
    }
    return 0;
}