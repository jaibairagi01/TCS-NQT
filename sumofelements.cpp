#include <bits/stdc++.h>
using namespace std;
int main()
{
    int myArr[6]= {1 , 2 , 3 , 4 , 5 , 6};
    int sum = 0;

    for(int i = 0; i<6; i++){
        sum+= myArr[i];
    }
    cout << "Sum is:- " << sum ;
    return 0;
}