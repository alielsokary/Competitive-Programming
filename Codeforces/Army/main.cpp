#include <bits/stdc++.h>

using namespace std;

int n, d[109], a, b,sum;

int main()
{
    cin>>n;
    for(int i = 1; i<=n-1; i++)
        cin>>d[i];

    cin>>a>>b;

    for(int i = a; i<b; i++)
        sum +=d[i];

    cout<<sum<<endl;

    return 0;
}
