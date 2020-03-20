#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, b, d, o, j = 0, count = 0;
    cin >> n >> b >> d; cin.ignore();
    for ( int i = 0; i < n; ++i )
    {
        cin >> o; cin.ignore();
        if ( o <= b )
        {
            j += o;
            if ( j > d )
            {
                count++;
                j = 0;
            }
        }
    }
    cout << count;
    return 0;
}