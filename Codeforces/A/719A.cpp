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
    int n; cin>>n;
    vi v;
    for (int i = 0; i < n; ++i) { int temp; cin>>temp; v.p_b(temp); }
    if (n==1){
        if (v[0]==0) {cout<<"UP"; return 0;}
        else if (v[0]==15) {cout<<"DOWN"; return 0;}
    }else{
        if (v[n-1]==15){ cout<<"DOWN"; return 0;}
        if (v[n-1]==0){ cout<<"UP"; return 0;}
        if (v[n-2]>v[n-1]){ cout<<"DOWN"; return 0;}
        if (v[n-2]<v[n-1]){ cout<<"UP"; return 0;}
    }
    cout<<"-1";
    return 0;
}