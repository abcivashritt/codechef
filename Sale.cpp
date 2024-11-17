#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		long long sum = 0, largest = 0, temp;
		
		cin>>n;

		while(n--) {
			cin>>temp;
			largest = max(largest, sum + 2*temp);
			sum += temp;
		}

		cout<<largest<<"\n";
	}
	return 0;
}
