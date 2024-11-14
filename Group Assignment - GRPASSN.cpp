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
		cin>>n;
		while(n--) {
			cin>>temp;
			count[temp]++;
		}
		for(map <int,int>::iterator it = count.begin(); it != count.end(); it++) {
			if(it->second % it->first != 0)
				ans = false;
		}
		cout<<(ans ? "YES" : "NO")<<"\n";
	}
	return 0;
}
