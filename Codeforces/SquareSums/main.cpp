#include<bits/stdc++.h>

using namespace std;
const int N = 1e1+9, M = 1e3+9, OO = 1000000007;
const double EPS = 0.0000001;

int n, A[N][N],t = 1;
int main(){

while(cin>>n, n) {

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){

            cin>>A[i][j];
        }

    }
            cout<<"Case "<<t++<<":";

        for(int q = 0; q<(n+1)/2; q++){

            int sum = 0;

            for(int i = 0; i<n; i++){
                sum += A[q][i];
                A[q][i] = 0;
            }

            for(int i = 0; i<n; i++){
                sum += A[n-1-q][i];
                A[n-1-q][i] = 0;
            }

            for(int i = 0; i<n; i++){
                sum += A[i][q];
                A[i][q] = 0;
            }

            for(int i = 0; i<n; i++){
                sum += A[i][n-1-q];
                A[i][n-1-q] = 0;
            }

            cout<<" "<<sum;

        }
    cout<<endl;


}
  return 0;
}







/*
*/
