#include <iostream>
using namespace std;

int main() {
	long long int n,temp, sum = 0;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>temp;
		sum += temp;
	}
	cout<<(sum == ((n*(n+1)/2)) ? "YES" : "NO")<<"\n";
	return 0;
}
