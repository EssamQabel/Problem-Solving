#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

#define loop(i, n) for(int i = 0; i < n; i++)

int solution(int X, vector<int> &A)
{
    set<int> s;
    loop(i, A.size())
    {
        s.insert(A[i]);
        if (s.size() == X) return i;
    }
    return -1;
}