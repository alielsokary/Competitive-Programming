#include <bits/stdc++.h>

using namespace std;

//http://codeforces.com/problemset/problem/34/A

int n, A[109], best, first, second;

int main()
{
cin>>n;

for(int i = 0; i<n; i++)
    cin>>A[i];
best = abs(A[0] - A[n-1]);
first = 1;
second = n;

for(int i= 0; i<n-1; i++)
    if(abs(A[i]- A[i+1])<best){
        best = abs(A[i]-A[i+1]);
        first = i+1;
        second = i+2;
    }

cout<<first<<" "<<second<<endl;



    return 0;
}
