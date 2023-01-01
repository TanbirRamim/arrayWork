// remove duplicate data from an array
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
    int j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                a[j] = a[n - 1];
                n--;
                j--;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}