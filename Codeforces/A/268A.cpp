#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, games = 0;
    cin >> n; cin.ignore();
    int homes[n], aways[n];
 
    for ( int i = 0; i < n; ++i )
        cin >> homes[i] >> aways[i];
 
    for ( int i = 0; i < n; ++i )
        for ( int j = 0; j < n; ++j )
            if ( homes[i] == aways[j] )
                games++;
 
    cout << games;
 
    return 0;
}