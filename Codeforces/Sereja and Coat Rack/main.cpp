#include <bits/stdc++.h>

using namespace std;

int n,d,m, A[109], total;
int main()
{
    cin>>n>>d;
    for(int i = 0; i<n; i++){
        cin>>A[i];
            total +=A[i];

    }
    cin>>m;


 if (m>n){

    cout<<total - (m - n)*d<<endl;
 }else{


for(int i = 0; i<n; i++){
    for(int j = i+1; j<n; j++){
        if(A[j] < A[i]){
        int tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
    }
}
}
    total = 0;
for(int i = 0; i<m; i++){
        total += A[i];
}

    cout<<total<<endl;

 }

    return 0;
}
