#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, temp1, temp2, sum = 0;
		vector < int > score(8, 0);
		cin>>n;
		while(n--) {
			cin>>temp1>>temp2;
			if(1 <= temp1 && temp1 <= 8)
				score[temp1 - 1] = max(score[temp1 - 1], temp2);
		}
		for(int i=0;i<8;i++) {
			sum += score[i];
		}
		cout<<sum<<"\n";
	}
	return 0;
}
