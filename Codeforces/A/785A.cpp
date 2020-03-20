#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cmath>
#include <map>
#include <utility>

using namespace std;

int main(){
    int n; cin>>n; long long sum = 0;
    map<string, int> m;
    m.insert(pair<string, int>("Tetrahedron", 4));
    m.insert(pair<string, int>("Octahedron", 8));
    m.insert(pair<string, int>("Dodecahedron", 12));
    m.insert(pair<string, int>("Icosahedron", 20));
    m.insert(pair<string, int>("Cube", 6));
    for (int i = 0; i < n; ++i){
        string input; cin>>input;
        sum += m[input];
    }
    cout<<sum;

    return 0;
}