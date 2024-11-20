#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		long long n, allocated = 0, curr = 0, temp;
		cin>>n;
		while(n--) {
			cin>>temp;
			if(curr < temp)
				allocated += (temp - curr);
			curr = temp;
		}
		cout<<allocated<<"\n";
	}
	return 0;
}
