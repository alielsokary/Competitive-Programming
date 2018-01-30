#include <bits/stdc++.h>

using namespace std;

int main()
{

int n, B[4], workingYear = 0;
bool distinct = false;
cin>>workingYear;


while(!distinct){
        workingYear++;
        distinct = true;
        n = workingYear;
    for(int i = 0; i<4; i++){

        B[i] = n%10;
        n /=10;
    }

    for(int i = 0; i<4; i++){
        for(int j = i+1; j<4; j++){
            if (B[i] == B[j]){
               distinct = false;
               break;
            }
        }
    }
}
cout<<workingYear<<endl;

    return 0;
}
