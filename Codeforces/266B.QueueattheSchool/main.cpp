#include <bits/stdc++.h>

using namespace std;

int n, t, cnt, cnt2;
char c[50];

int main()
{
    cin>>n>>t>>c;

    for(int i = 0; c[i] != '\0'; i++){
        cnt++;
    }

for(int i = 0; i<t; i++){

    for(int j = 0; j<cnt;){
        if(c[j] == 'B' && c[j+1] == 'G'){

            c[j] = 'G';
            c[j+1] = 'B';
            j= j+2;
        }else{
            j++;
        }

    }
}
        for(int i = 0; i<cnt; i++){
                cout<<c[i];
        }

    return 0;
}
