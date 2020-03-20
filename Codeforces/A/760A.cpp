#include <bits/stdc++.h>
using namespace std;
int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
    int m, d, l;
    cin>>m>>d;
    l = 8-d;
    cout<<ceil((double)(arr[m-1]-l)/7)+1;
    return 0;
}
