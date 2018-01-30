#include <bits/stdc++.h>

using namespace std;
int n, k,a[100000], b[100000], x, cnt,cnt2;


int main()
{
  cin>>n>>k;

  for (int i = 0; i < n; i++) {
    cin>>a[i];
    x = a[i];
    while(x>0){
      int tmp = x%10;
      x/= 10;
      if(tmp == 7 || tmp == 4)
      cnt++;
    }
    b[i] = cnt;
    cnt = 0;
  }

  for (int i = 0; i < n; i++) {
    if (b[i]<=k) {
      cnt2++;
    }
  }
  cout<<cnt2<<endl;

    return 0;
}
