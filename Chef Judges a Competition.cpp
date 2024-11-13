#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,a_sum = 0, b_sum = 0, a_diff = 0, b_diff = 0,temp;
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>temp;
			a_sum += temp;
			a_diff = max(a_diff, temp);
		}
		for(int i=0;i<n;i++) {
			cin>>temp;
			b_sum += temp;
			b_diff = max(b_diff, temp);
		}
		a_sum -= a_diff;
		b_sum -= b_diff;
		cout<<(a_sum < b_sum ? "Alice" : (a_sum > b_sum ? "Bob" : "Draw"))<<"\n";
	}
	return 0;
}
