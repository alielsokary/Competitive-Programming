#include <bits/stdc++.h>

using namespace std;

char c[100000];
int n, anton, dankin;
int main()
{
cin>>n;

for(int i = 0; i<n; i++){
    cin>>c[i];
}

for(int i = 0; i<n; i++){
    if(c[i] == 'A')
        anton++;
    else if(c[i] == 'D')
        dankin++;
}
if(anton > dankin)
    cout<<"Anton"<<endl;
else if(dankin > anton)
    cout<<"Danik"<<endl;
else{
    cout<<"Friendship"<<endl;
}
    return 0;
}
