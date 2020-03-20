#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int A[101];
int main(){
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++) cin>>A[i];
    sort(A, A+n);
    double sum = 0.0;
    for (int i = 0; i < n; i++) sum += A[i];
    sum = sum / 2;
    int e = n; int ns = 0;
    while(e && !(ns > sum)){
        ns = 0;
        e--;
        for (int i = e; i < n; i++) ns += A[i];
    }
    cout<<(n-e);
    return 0;
}
