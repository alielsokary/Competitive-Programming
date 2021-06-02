#include <bits/stdc++.h>
using namespace std;
string s;
int main(int argc, char *argv[]) {
	string str;
	string newStr;
	while(getline(cin,str) && str != "DONE"){
		for (int i = 0; i<str.length(); i++) {
			if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '?' || str[i] == '!') {
				continue;
			} else {
				newStr += str[i];
			}
		}
		transform(newStr.begin(), newStr.end(), newStr.begin(), ::tolower);
		if (newStr == string(newStr.rbegin(), newStr.rend())) {
			printf("You won't be eaten!\n");
		} else {
			printf("Uh oh..\n");
		}
		str = "";
		newStr = "";
	}
	return 0;
}
