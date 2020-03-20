#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, a = 0, b = 0;
    cin >> n; cin.ignore();
    int numbers[n];
    int pf = 0, pl = n-1;
 
    for ( int i = 0; i < n; ++i )
        cin >> numbers[i];
 
    for ( int i = 0; i < n; ++i )
    {
        if ( i % 2 == 0)
        {
            if ( numbers[pf] > numbers[pl] )
                a += numbers[pf++];
            else
                a += numbers[pl--];
        }
        else
        {
            if ( numbers[pf] > numbers[pl] )
                b += numbers[pf++];
            else
                b += numbers[pl--];
        }
    }
 
    cout << a << ' ' << b;
 
    return 0;
}