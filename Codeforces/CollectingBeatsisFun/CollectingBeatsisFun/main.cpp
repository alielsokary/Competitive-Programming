#include<bits/stdc++.h>

using namespace std;
const int N = 1e1+9, M = 1e3+9, OO = 1000000007;
const double EPS = 0.0000001;

int k, c[10];
char A[9][9];

int main(){

    cin>>k;
    k *= 2;

    for(int i = 0; i<4; i++)
        cin>>A[i];

    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            if(A[i][j] != '.')
                c[A[i][j] -'0']++;
        }
    }

    for(int i = 0; i<10; i++)

        if(c[i]>k)
        return cout<<"NO",0;
    cout<<"YES\n";




  return 0;
}







/*
*/
