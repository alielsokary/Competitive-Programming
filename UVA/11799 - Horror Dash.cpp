#include <bits/stdc++.h>

using namespace std;
int k,n,m,x,y,t,c;

using namespace std;
int main(int argc, char *argv[]) {
	scanf("%d", &t);
	int cnt = 1;
	while (t--) {
		scanf("%d", &n);
		int min = 0;
		while (n--) {
			scanf("%d", &c);
			if (min < c) {
				min = c;
			}
		}
		printf("Case %d: %d\n", cnt++, min);
	}
}
