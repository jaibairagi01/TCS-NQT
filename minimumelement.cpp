#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    cout << "Enter the size of an array: ";
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    int smallest = INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i]<smallest)
        {
         smallest=a[i];
        }

    }
    cout <<  "Smallest number is: " << smallest <<endl;
    return 0;

    // take input 
    // now consider a array where n is size
    // to take input as element
    //  then for loop user give all the elements
    // consider a smallest integer
    // then using for loop again 
    // after that check condition if any element is smaller than any integer 
}