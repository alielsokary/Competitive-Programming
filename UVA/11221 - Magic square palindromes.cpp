#include <bits/stdc++.h>

using namespace std;

int t;
string str;
int main(int argc, char *argv[]) {
	int cnt = 1;
	cin>>t;
	cin.ignore();
	while (t--) {
		string newStr;
		getline(cin,str);
		for (int i = 0; i<str.length(); i++) {
			if (isalpha(str[i])) { 
				newStr += str[i];
			}
		}
		
		printf("Case #%d:\n", cnt);

		if (newStr == string(newStr.rbegin(), newStr.rend())) {
			long double sr = sqrt(newStr.length());
			
			if ((sr - floor(sr)) == 0) {
				printf("%d\n",int(sqrt(newStr.length())));
			} else {
				printf("No magic :(\n");
			}
			
		} else {
			printf("No magic :(\n");
		}
		
		cnt+=1;
	}
	
	return 0;
}
