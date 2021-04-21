#include <bits/stdc++.h>

using namespace std;
int k,n,m,x,y;

using namespace std;
int main(int argc, char *argv[]) {
	while(cin>>k && !cin.fail()){
	scanf("%d%d", &n, &m);
	
	for (int i = 0; i<k; i++) {
		scanf("%d%d", &x, &y);
		if(x > n && y > m) {
			printf("NE\n");
		} else if(x < n && y < m){
			printf("SO\n");
		} else if (x > n && y < m) {
			printf("SE\n");
		} else if (x < n && y > m) {
			printf("NO\n");
		} else {
			printf("divisa\n");
		}
	}
	}
}
