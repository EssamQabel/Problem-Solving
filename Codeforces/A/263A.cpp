#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int matrix[5][5];
    int row, col;
    bool found = false;
 
    for ( int i = 0; i < 5; ++i)
    {
        cin >> matrix[i][0] >> matrix[i][1] >> matrix[i][2] >> matrix[i][3] >> matrix[i][4];
    }
 
    for ( int i = 1; i <= 5; ++i)
    {
        for ( int j = 1; j <= 5; ++j )
        {
            if ( matrix[i-1][j-1] == 1 )
            {
                row = i; col = j; found = true;
            }
        }
        if ( found ) break;
    }
    cout << abs( 3 - row ) + abs( 3 - col );
 
    return 0;
}