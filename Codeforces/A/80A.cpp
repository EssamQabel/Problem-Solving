#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cmath>
#include <map>
#include <utility>

using namespace std;

vector<int> get_prime_numbers_between(int a, int b){
    vector<int> v;
    for (int i = a; i < b; i++){
        if (i == 0||i == 1) continue;
        int flag = 1;
        for (int j = 2; j <= i / 2; ++j){
            if (i % j == 0){
                flag = 0; break;
            }
        }
        if (flag) v.push_back(i);
    }
    return v;
}

int main(){
    int a , b; cin>>a>>b;
    int flag = 0;
    vector<int> r = get_prime_numbers_between(a, b+1);
    vector<int>::iterator it = r.begin();
    while(it!=r.end()){
        if (*it++ == a && *it == b) flag = 1;
    }
    if (flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}