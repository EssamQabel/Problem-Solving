#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, maxi, mini, maxi1, maxi2, mini1, mini2;
    cin >> n; cin.ignore();
    int arr[n];
    for ( int i = 0; i < n; ++i ) cin >> arr[i];

    for ( int i = 0; i < n; ++i )
    {
        if ( i == 0 )
        {
            maxi = abs(arr[n-1] - arr[0]);
            mini = abs(arr[1] - arr[0]);
        }
        else if ( i == n-1 )
        {
            maxi = abs(arr[n-1] - arr[0]);
            mini = abs(arr[n-1] - arr[n-2]);
        }
        else
        {
            maxi1 = abs(arr[n-1] - arr[i]);
            maxi2 = abs(arr[i] - arr[0]);
            if ( maxi1 > maxi2 ) maxi = maxi1;
            else maxi = maxi2;
            mini1 = abs(arr[i+1] - arr[i]);
            mini2 = abs(arr[i-1] - arr[i]);
            if ( mini1 < mini2 ) mini = mini1;
            else mini = mini2;
        }
        cout << abs(mini) << ' ' << abs(maxi) << '\n';
    }

    return 0;
}
