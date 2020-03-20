#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define p_b push_back

using namespace std;

const int MAX = 105;
int input[MAX];

int main()
{
    int n, a, cnt=0;
    scanf("%d %d", &n, &a);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &input[i]);
    for (int i = 1; i <= n; ++i) if (input[i]){
        int dist = i - a;
        int j = a - dist;
        if (j < 1 || j > n || input[i]==input[j])
            cnt++;
    }
    cout<<cnt;
}