#include <bits/stdc++.h>

using namespace std;
int n, a[100];
int main()
{
    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    if (n == 1){
            if(a[0] == 15){
                cout<<"DOWN"<<endl;
                return 0;
            }else if(a[0] == 0){
                cout<<"UP"<<endl;
                return 0;
            }
        cout<<"-1"<<endl;
        return 0;
    }

    for(int i = 0; i<n; i++){

        if(a[n-1] == 15){
            cout<<"DOWN"<<endl;
            return 0;
        }else if (a[n-1] == 0){
            cout<<"UP"<<endl;
            return 0;
        }else{
            if(a[n-1] < a[n-2]){
                cout<<"DOWN"<<endl;
                return 0;
            }else if(a[n-1] > a[n-2]){
                cout<<"UP"<<endl;
                return 0;
            }
        }
    }

    return 0;
}
