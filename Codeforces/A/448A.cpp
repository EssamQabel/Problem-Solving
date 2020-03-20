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
    int a=0, b=0, n, t=0;
    for (int i = 0; i < 3; ++i){
        int temp; cin>>temp; a+=temp;
    }
    for (int i = 0; i < 3; ++i){
        int temp; cin>>temp; b+=temp;
    }
    cin>>n;
    t+=ceil(a/5.0); t+=ceil(b/10.0);
    if (t<=n) cout<<"YES";
    else cout<<"NO";
    return 0;
}