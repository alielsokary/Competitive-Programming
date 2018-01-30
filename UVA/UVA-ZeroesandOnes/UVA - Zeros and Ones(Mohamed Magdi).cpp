#include <bits/stdc++.h>

using namespace std;
const int N = 1e6+9, OO = 1000000009;

int n, last0, last1, last[N], q, l, r, t;
char s[N];

int main(){
  // freopen("i.in", "rt", stdin);
  // freopen("o.out", "w", stdout);
  while(~scanf("%s", s)){
    printf("Case %d:\n", ++t);
    n = strlen(s);
    last0 = -1, last1 = -1;
    for(int i = 0 ; i < n ; ++i){
      if(s[i] == '0'){
        last[i] = last1;
        last0 = i;
      }
      else{
        last[i] = last0;
        last1 = i;
      }
    }
    scanf("%d", &q);
    while(q--){
      scanf("%d %d", &l, &r);
      if(l>r) swap(l, r);
      if(last[r]<l) puts("Yes");
      else  puts("No");
    }
  }
  return 0;
}
