#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, temp, ones = 0, zeros = 0;
		cin>>n;
		while(n--) {
			cin>>temp;
			if(temp == 1)
				ones++;
			else
				zeros++;
		}
		cout<<(ones >= zeros ? 1 : 0)<<"\n";
	}
	return 0;
}
