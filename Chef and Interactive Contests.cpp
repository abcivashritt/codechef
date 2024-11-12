#include <iostream>
using namespace std;

int main() {
	int n, r,temp;
	cin>>n>>r;
	while(n--) {
		cin>>temp;
		cout<<(temp < r ? "Bad boi" : "Good boi")<<"\n";
	}
	return 0;
}
