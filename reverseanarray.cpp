#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input size of an array
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    // declaring array
    int arr[n];

    // input elements in array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    // reverse array logic
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
