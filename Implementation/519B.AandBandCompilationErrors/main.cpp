#include <bits/stdc++.h>

using namespace std;

int n, a, ans1, ans2, Ans;
int main()
{
    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>a;
        ans1 +=a;
    }

    for(int i = 0; i<n-1; i++){
        cin>>a;
        ans2 +=a;
    }

    Ans = ans2;

    cout<<ans1-ans2<<endl;
        ans2 = 0;

    for(int i = 0; i<n-2; i++){
        cin>>a;
        ans2 +=a;
    }
    cout<<Ans-ans2<<endl;
    return 0;
}
