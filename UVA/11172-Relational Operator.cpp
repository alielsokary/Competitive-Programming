#include <bits/stdc++.h>

using namespace std;
int participants,budget,hotles,weeks;
int price, bed;
int finalCost;
bool isAvail = false;
long long n,a,b;
int main(int argc, char *argv[]) {
	
	scanf("%lld", &n);
	for (int i = 0; i<n; i++) {
		scanf("%lld%lld", &a,&b);
		if (a > b) {
			printf(">\n");
		} else if (a < b) {
			printf("<\n");
		} else {
			printf("=\n");
		}
	}
}
