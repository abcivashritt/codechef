#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, temp, mode = 0, mode2 = 0;
		vector < int > count(10, 0);
		map < int, int > count2;
		
		cin>>n;
		mode2 = n;
		while(n--) {
			cin>>temp;
			count[temp-1]++;
		}
		for(int i = 0;i<10;i++) {
			if(count[i] > 0) {
				count2[count[i]]++;
				mode = max(mode, count2[count[i]]);
			}
		}

		for(auto a : count2) {
			if(mode == a.second) {
				mode2 = min(mode2, a.first);
			}
		}
		cout<<mode2<<"\n";
	}
	return 0;
}
