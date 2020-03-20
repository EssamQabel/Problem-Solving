#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int cals[4];
    int total = 0;
    int n;
    string input;
 
    for ( int i = 0; i < 4; ++i )
        cin >> cals[i];
 
    cin.ignore();
    getline( cin, input );
    n = input.size();
 
    for ( int i = 0; i < n; ++i )
    {
        switch( input[i] )
        {
        case '1':
            total += cals[0];
            break;
        case '2':
            total += cals[1];
            break;
        case '3':
            total += cals[2];
            break;
        case '4':
            total += cals[3];
            break;
        default:
            break;
        }
    }
 
    cout << total;
 
    return 0;
}