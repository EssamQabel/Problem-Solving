#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cmath>

using namespace std;

const int num = 8;
int units[] = {8, 4, 2, 6};

int main(){
    long long n; cin>>n;
    if (n == 0) cout<<'1';
    else{
        n = (n-1)%4;
        cout<<units[n];
    }
    return 0;
}