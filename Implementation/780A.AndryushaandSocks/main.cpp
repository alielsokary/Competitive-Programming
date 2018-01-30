#include <bits/stdc++.h>

using namespace std;
//didn't splve
int n, maxNum = -1, num, x;
set<int> s;
int main()
{
    cin>>n;

    for(int i = 0; i<2*n; i++){
            maxNum = max(maxNum, (int)s.size());
        cin>>x;

        if(s.count(x))
           s.erase(s.find(x));
           else
            s.insert(x);

    }

    cout<<maxNum<<endl;

    return 0;
}
