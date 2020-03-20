#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int y, m, count = 0;
    cin >>y >> m;
    for ( int i = max(y, m); i <= 6; ++i ) count++;
    switch(count)
    {
    case 0:
        cout << "0/1";
        break;
    case 1:
        cout << "1/6";
        break;
    case 2:
        cout << "1/3";
        break;
    case 3:
        cout << "1/2";
        break;
    case 4:
        cout << "2/3";
        break;
    case 5:
        cout << "5/6";
        break;
    default:
        cout << "1/1";
        break;
    }
 
    return 0;
}