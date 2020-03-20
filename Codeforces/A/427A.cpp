#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, input, officers = 0, uCrimes = 0;
    cin >> n; cin.ignore();
    for ( int i = 0; i < n; ++i )
    {
        cin >> input;
        if ( input == -1 )
        {
            if ( officers != 0)
                officers--;
            else if ( officers == 0 )
                uCrimes++;
        }
        else if ( input != -1)
            officers += input;
    }
    cout << uCrimes;
 
    return 0;
}