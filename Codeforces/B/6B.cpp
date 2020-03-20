#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <map>
#include <cmath>
#include <utility>
#include <set>
using namespace std;
#define MAX 100
char c;
int n, m;
vector<string> arr;
set<char> m_set;
void check_add(int x, int y){
    if (x>=0&&x<n&&y>=0&&y<m){
        if (arr[x][y]!=c && arr[x][y] != '.')
            m_set.insert(arr[x][y]);
    }
}
int main(){
    cin>>n>>m>>c;
    for (int x = 0; x < n; ++x){
        string temp; cin>>temp;
        arr.push_back(temp);
    }
    for (int x = 0; x < n; ++x){
        for (int y = 0; y < m; ++y){
            if ( arr[x][y] == c ){
                check_add(x+1, y);
                check_add(x-1, y);
                check_add(x, y+1);
                check_add(x, y-1);
            }
        }
    }
    cout<<m_set.size();
    return 0;
}