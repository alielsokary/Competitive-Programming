#include <bits/stdc++.h>
//
// didn't solve read tutorial
using namespace std;
int n, a[1009],x,sum,cnt;
int main()
{
    cin>>n>>x;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        sum += a[i];
    }

    if(sum > 0){
        for(int i = 0; sum>0; i++){
            cnt++;
            sum-=x;

        }
    }else if(sum < 0){
        for(int i = 0; sum<0; i++){

            cnt++;
            sum+=x;

        }
    }
    cout<<cnt<<endl;
    return 0;
}
