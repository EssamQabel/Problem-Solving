#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <set>
#include <string>
#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define p_b push_back
using namespace std;
int main(){
    int n, m, a, b, cnt=0;
    cin>>n>>m>>a>>b;
    int x = n/m;
    int y = ceil(n/(double)m);
    int p1 = (x*b) + ((n - (x * m)) * a);
    int p2 = n*a;
    int p3 = y*b;
    cout<<min(p1, min(p2,p3));
    return 0;
}