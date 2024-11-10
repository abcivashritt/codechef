#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector < vector < int > > div(2, vector < int > (101, 0));
	for(int i=1;i<=100;i++) {
		for(int j=i;j<=100;j+=i) {
			div[i%2][j]++;
		}
	}
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		cout<<(div[0][n] == div[1][n] ? 0 : (div[0][n] > div[1][n] ? 1 : -1))<<"\n";
	}
	return 0;
}
