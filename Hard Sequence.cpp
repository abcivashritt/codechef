#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
	
	int T;
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		map < int, int > index;
		vector < int > c(129, 0); 
		int curr = 0;
		c[curr]++;
		for(int i=1;i<=n;i++) {
			if(index.find(curr) == index.end()) {
				index[curr] = i-1;
				curr = 0;
				c[curr]++;
			}
			else {
				int old_index = index[curr];
				index[curr] = i-1;
				curr = i - 1 - old_index;
				c[curr]++;
			}
		}
		cout<<c[curr]<<"\n";
	}
	return 0;
}
