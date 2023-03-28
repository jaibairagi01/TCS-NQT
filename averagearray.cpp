#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i=0; i<5 ; i++)
    {
        sum = sum + arr[i];
    }
    double average = sum / n;
    cout << "The average is " << average <<endl;
}