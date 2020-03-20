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
    int a, b, c;
    cin>>a>>b>>c;
    if (a==b)
        cout<<"YES";
    else{
        if (a < b){
            if (c > 0 && (b-a)%c==0) cout<<"YES";
            else cout<<"NO";
        }
        else{
            if (c < 0 && (b-a)%abs(c)==0) cout<<"YES";
            else cout<<"NO";
        }
    }
    return 0;
}