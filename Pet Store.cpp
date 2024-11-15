#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp;
		bool ans = true;
		vector < int > count(100, 0);
		cin>>n;
		while(n--) {
			cin>>temp;
			count[temp-1]++;
		}
		for(int i=0;i<100;i++) {
			if(count[i] % 2)
				ans = false;
		}
		cout<<(ans ? "YES" : "NO")<<"\n";
	}
	return 0;
}
