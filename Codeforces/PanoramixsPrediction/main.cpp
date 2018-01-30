#include <bits/stdc++.h>

using namespace std;

int n,m, cnt,A[1009], cnt2;
int main()
{
    cin>>n>>m;

//Muhammed_magdi solution
//for(int i = 2; i<m; i++)
//    if (m%i == 0) return cout<< "NO"<< endl, 0;
//
//for(int i = n+1; i<m; i++){
//    bool f = 0;
//
//    for(int j = 2; j<i; j++){
//        if(i%j ==0){
//            f = 1;
//            break;
//        }
//    }
//    if(!f)
//        return cout<< "NO"<<endl,0;
//
//}
//cout<<"YES"<<endl;

for(int i = 1; i<=m; i++){
    if(m%i == 0)
        cnt++;
}

if(cnt == 2){
        for(int i = n+1; i<m; i++){
            for(int j = 1; j<=i; j++){
                if(i%j == 0){
                    cnt2++;
                }
            }
            if(cnt2 == 2){
                cout<<"NO";
                return 0;
            }
            cnt2 = 0;
        }
        cout<<"YES";

}else{
    cout<<"NO";
    return 0;
}
    return 0;
}
