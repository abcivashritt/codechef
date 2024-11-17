#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, temp, even_count = 0;
		bool odd_present = false;

		cin>>n;

		while(n--) {
			cin>>temp;
			if(temp%2)
				odd_present = true;
			else
				even_count++;
		}
		cout<<(odd_present ? even_count : 0)<<"\n";
	}
	return 0;
}
