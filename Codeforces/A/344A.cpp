#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string prev, current;
    int n, groups = 1;
    cin >> n; cin.ignore();
    getline( cin, prev );
    for ( int i = 1; i < n; ++i )
    {
        getline( cin, current );
        if ( prev == current ) prev = current;
        else
        {
            prev = current; groups++;
        }
    }
    cout << groups;
 
    return 0;
}