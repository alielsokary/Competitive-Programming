#include <bits/stdc++.h>

using namespace std;
int n, d, noOfSongs[109], sum, noOfJokes;
int main()
{
//Muhammed magdi solution
/*
const int N = 100009;
int n, d, t[109], sum;

int main(){
	//freopen("i.in", "r", stdin);
	//freopen("o.out", "w", stdout);
	scanf("%d %d", &n, &d);
	for(int i = 0 ; i < n ; ++i){
		scanf("%d", &t[i]);
		sum += t[i];
	}

	if(d<sum+(n-1)*10)
		printf("-1\n");
	else{
		printf("%d\n",(d-sum)/5);
	}
	return 0;
}
*/

    cin>>n>>d;

    for(int i = 0; i<n; i++){
        cin>>noOfSongs[i];

        if (i< n-1){
            sum+= noOfSongs[i] + 10;
            noOfJokes +=2;
            if (sum > d){
                cout<<"-1"<<endl;
                return 0;
            }

        }
        if (i == n-1){
            sum+= noOfSongs[i];
            if (sum > d){
                cout<<"-1"<<endl;
                return 0;
            }
        }

    }
    cout<<noOfJokes + (d-sum)/5<<endl;
    //cout<<sum<<endl;

    return 0;
}
