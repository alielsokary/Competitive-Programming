#include <bits/stdc++.h>

using namespace std;
int participants,budget,hotles,weeks;
int price, bed;
int finalCost;
bool isAvail = false;
int main(int argc, char *argv[]) {
	
	while(cin>>participants>>budget>>hotles>>weeks && !cin.fail()){
	finalCost = 0;
	int nmax = 1e6+9;
	isAvail = false;
	for (int i = 0; i<hotles; i++) {
		scanf("%d", &price);
		
		for (int j = 0; j<weeks; j++) {
			scanf("%d", &bed);
			if (bed >= participants) {
				if ((price*participants)<=budget) {
					isAvail = true;
					if ((price*participants) < nmax) {
						finalCost = (price*participants);
						nmax = finalCost;
					}
				}
			}
		}
	}
		
	if (isAvail) {
		printf("%d\n",finalCost);
	} else {
		printf("stay home\n");
	}
		
}
		
}
