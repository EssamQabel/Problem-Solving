#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n; cin >> n; cin.ignore();
    string input;
    int counter = 0;
    getline( cin, input );
    for ( int i = 0; i < n-1; ++i )
        if ( input[i] == input[i+1] ) counter++;
    cout << counter;
    return 0;
}