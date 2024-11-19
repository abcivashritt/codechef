#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int size, temp;
		bool shyam = false;
		vector < bool > visited_t(101, false);
		vector < bool > visited_d(101, false);
		cin>>size;
		for(int j=0;j<size;j++) {
			cin>>temp;
			visited_t[temp] = true;
		}
		cin>>size;
		for(int j=0;j<size;j++) {
			cin>>temp;
			visited_d[temp] = true;
		}
		cin>>size;
		for(int j=0;j<size;j++) {
			cin>>temp;
			if(!visited_t[temp])
				shyam = true;
		}
		cin>>size;
		for(int j=0;j<size;j++) {
			cin>>temp;
			if(!visited_d[temp])
				shyam = true;
		}
		cout<<(shyam ? "no" : "yes")<<"\n";
	}
	return 0;
}
