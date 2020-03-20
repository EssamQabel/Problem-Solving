#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cmath>
#include <map>
#include <utility>

#define all(v) ((v).begin()), ((v).end())

using namespace std;

int main(){
    int n, m, diff_l, diff_r, inp;
    cin>>n>>m;
    vector<int> vec;
    for (int i = 0; i < 2*n+1; ++i){
        int temp; cin>>temp;
        vec.push_back(temp);
    }
    diff_l = vec[1] - vec[0];
    diff_r = vec[1] - vec[2];
    cout<<vec[0]<<' ';
    for (int i = 1; i < 2*n+1; ++i){
        if (i%2==1){
            diff_l = vec[i] - vec[i-1];
            diff_r = vec[i] - vec[i+1];
            if (min(diff_l, diff_r) > 1 && m){
                cout<<vec[i]-1<<' ';
                m--;
            }
            else
                cout<<vec[i]<<' ';
        }
        else
            cout<<vec[i]<<' ';
    }
    return 0;
}