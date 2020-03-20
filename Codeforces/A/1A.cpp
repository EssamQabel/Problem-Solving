#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cmath>

using namespace std;

int main(){
    long long n, m, a, x, y;
    cin>>n>>m>>a;
    x = m / a;
    y = n / a;
    if (m%a!=0) ++x;
    if (n%a!=0) ++y;
    cout<<x*y;

    return 0;
}