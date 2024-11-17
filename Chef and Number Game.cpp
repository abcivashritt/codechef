#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, temp, pos_count = 0, neg_count = 0;

		cin>>n;
		while(n--) {
			cin>>temp;
			if(temp > 0)
				pos_count++;
			else
				neg_count++;
		}
		cout<<max(pos_count, neg_count)<<" "<<(min(pos_count, neg_count) == 0 ? max(pos_count, neg_count) : min(pos_count, neg_count))<<"\n";
	}
	return 0;
}
