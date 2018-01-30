#include <bits/stdc++.h>

using namespace std;

char c[109],d[109];
int n;

int main()
{

    //Muhammed magdi solution
//    freopen("i.in", "rt", stdin);
//    freopen("o.out", "wt", stout);
//        scanf("%s\n", c);
//        scanf("%s\n", d);
//        n = strlen(c);
//        for(int i = 0; i<n; ++i) {
//            if(c[i] >= 'A' && c[i]<='Z') c[i] += 32;
//            if(d[i] >= 'A' && d[i]<='Z') d[i] += 32;
//        }
//
//        printf("%d\n", (strcmp(c,d) < 0 ? -1 : strcmp(c,d) > 0 ? 1 : 0));
        //at the time i wrote this this solution takes 3 lines of input and i don't know why.
    ///////////
    cin>>c;

    for(int i = 0; c[i] != '\0'; i++){
            if(c[i] >= 'a' && c[i] <= 'z'){
                    c[i] = char(int(c[i]-32));
            }

    }
    cin>>d;

        for(int i = 0; d[i] != '\0'; i++){
            if(d[i] >= 'a' && d[i] <= 'z'){
                    d[i] = char(int(d[i]-32));
            }

    }

    for(int i = 0; c[i] != '\0'; i++){

        if (int(c[i]) > int(d[i])){
            cout<<"1"<<endl;
            return 0;
        }else if(int(c[i]) < int(d[i])){
            cout<<"-1"<<endl;
            return 0;
        }else if (int(c[i]) == int(d[i])){
            continue;
        }
    }
cout<<"0"<<endl;


    return 0;
}
