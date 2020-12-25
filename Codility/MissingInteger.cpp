#include <bits/stdc++.h>
using namespace std;

int main() {
	int num = 0;
	long long N = 2147483647;
	map<int, int> freqCount; 
	for (int i = 0; i<A.size(); i++) {
		freqCount[A[i]]++;
	}
	
	for(int i = 1; i<N; i++) {
		if(freqCount[i] == 0) {
			num = i;
			break;
		}
	}
	
	return num;
	return 0;
}

// Swift 5
// public func solution(_ A : inout [Int]) -> Int {
//     var freqArr = [Int: Bool]()
    
//     for i in A {
//         freqArr[i] = true
//     }
    
//     var i = 1
    
//     while true {
//         if freqArr[i] == nil {
//             return i
//         } else {
//             i += 1
//         }
//     }
// }
