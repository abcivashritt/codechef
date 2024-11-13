#include <iostream>
#include <map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,temp;
		bool ans = true;
		map < int, int > count;
		map < int, int >::iterator it;

		cin>>n;

		for(int i=0;i<2*n;i++) {
			cin>>temp;
			if((it = count.find(temp)) == count.end())
				count.insert(pair<int, int> (temp, 1));
			else
				it->second++;
		}
		for(it = count.begin(); it != count.end(); it++) {
			if(it->second > 2) {
				ans = false;
				break;
			}
		}
		cout<<(ans ? "Yes" : "No")<<"\n";
	}
	return 0;
}
