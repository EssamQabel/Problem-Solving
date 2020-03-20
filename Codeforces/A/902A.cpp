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
    int n, m, a, b;
    cin>>n>>m;
    vector<bool> v(m+1, false);
    for (int i = 0; i < n; ++i){
        cin>>a>>b;
        if (a==0) v[0] = true;
        for (int j = a+1; j <= b; ++j){
            v[j] = true;
        }
    }
    if (find(all(v), false) != v.end()) cout<<"NO";
    else cout<<"YES";
    return 0;
}