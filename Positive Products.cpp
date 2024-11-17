#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp;
		long long int pos_count = 0, neg_count = 0;
		cin>>n;
		while(n--) {
			cin>>temp;
			if(temp > 0)
				pos_count++;
			else if(temp < 0)
				neg_count++;
		}
		cout<<(pos_count * (pos_count - 1) / 2) + (neg_count * (neg_count - 1) / 2)<<"\n";
	}
	return 0;
}
