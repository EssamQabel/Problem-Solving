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
    int n, up, r, l;
    cin>>n;cin>>up;
    while(n--){
        cin>>r>>l;
        int arr[4] = {r, l, 7-r, 7-l};
        vector<int> vec(arr, arr+4);
        if (find(all(vec), up)!= vec.end() || find(all(vec), 7-up)!= vec.end()){
            cout<<"NO"; return 0;
        }
    }
    cout<<"YES";
    return 0;
}