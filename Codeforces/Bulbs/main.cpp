#include <bits/stdc++.h>

using namespace std;
int n,m,B;
int noBulbes, A[109];

int main()
{

cin>>n>>m;

for(int i = 0; i<n; i++){
    cin>>noBulbes;
    for(int j = 0; j<noBulbes; j++){
        cin>>B;
        A[B]++;
    }
}

for(int i = 1; i<=m; i++){
    if(A[i]==0){
        cout<<"NO"<<endl;
        return 0;
    }

}
cout<<"YES"<<endl;

//for(int i =0; i<n; i++){
//    cin>>x;
//    A[x]++;
//}
//for(int i = 1; i<=n; i++){
//    cout<<A[i]<<" ";
//    if(A[i]==0){
//        cout<<"value of index "<<i<<" = 0";
//    }
//}

    return 0;
}
