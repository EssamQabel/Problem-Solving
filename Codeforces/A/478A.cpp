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
    int cnt = 0, temp;
    for (int i = 0; i < 5; ++i){
        cin>>temp; cnt += temp;
    }
    if (cnt % 5 == 0 && cnt!=0) cout<<cnt/5;
    else cout<<"-1";
    return 0;
}