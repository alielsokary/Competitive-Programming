#include <bits/stdc++.h>

using namespace std;
char c[1000009],res;
int n,x,y, cas = 1;
bool isnotEqual = false;
int main()
{
    while(cin>>c && !cin.fail()){
//    for(int i = 0; c[i] != '\0'; i++){
//
//    }
//        if(c == '\0')
//            return 0;
    cout<<"Case "<<cas<<":"<<endl;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>x>>y;
        int mini = min(x,y);
        int maxi = max(x,y);
//        cout<<"mini is"<<mini<<endl;
//        cout<<"maxi is"<<maxi<<endl;
        res = c[mini];
//        cout<<"res is "<<res<<endl;
        for(int z = mini; z<=maxi; z++){
//                cout<<"z is: "<<z<<" "<<c[z]<<endl;
            if(c[z] != res){
                isnotEqual = true;
                break;
            }
        }
    if(isnotEqual){
        cout<<"No"<<endl;
        isnotEqual = false;
    }else{
        cout<<"Yes"<<endl;
    }
  }
  cas+=1;
}

    return 0;
}
