#include <bits/stdc++.h>

//https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=979

using namespace std;

int n, A[3009], B[3009],C[3009];
bool isJully = true;
int main()
{
while(cin>>n){
    isJully = true;

if(n<0){
        isJully = false;
    continue;
}
    for(int i = 0; i<n; i++){
        cin>>A[i];
        C[i] +=i+1;
    }

    for(int i = 0; i<n; i++){
        for(int j = i+1;j<n; j++){
            B[i] += abs(A[i]-A[j]);
            break;
        }
    }

    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n-1; j++){
            if(B[i] > B[j]){
                int tmp = B[i];
                B[i] = B[j];
                B[j] = tmp;
            }
        }
    }

for(int i = 0; i<n-1; i++){
    if(C[i] != B[i])
        isJully = false;
}


for(int i = 0; i<3000; i++){
    A[i] = 0;
    B[i] = 0;
    C[i] = 0;
}

if(isJully)
    cout<<"Jolly"<<endl;
    else
     cout<<"Not jolly"<<endl;

}

    return 0;
}
