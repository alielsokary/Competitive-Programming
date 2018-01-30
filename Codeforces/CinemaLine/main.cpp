#include <bits/stdc++.h>

using namespace std;

int n, A[100000], sum, cnt25, cnt50, cnt100;
int main()
{
    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>A[i];
        if(A[0] > 25){
            cout<<"NO";
            return 0;
        }
    }

    for(int i = 0; i<n; i++){
        if(A[i] == 25){

            cnt25++;
        }else if(A[i] == 50){

            cnt50++;
        }else if(A[i] == 100){

            cnt100++;
        }

        for(int j = i+1; j<n; j++){

            if(A[j] == 50){
                if(cnt25>0){

                    cnt25--;
                }else{
                    cout<<"NO";
                    return 0;
                }
            }else if(A[j] == 100){
                if(cnt50>0 && cnt25 >0){
                    cnt50--;
                    cnt25--;
                }else if(cnt25>=3){
                    cnt25 -=3;
                }else{

                    cout<<"NO";
                    return 0;
                }
            }
            break;
        }
    }
    cout<<"YES";
    return 0;
}
