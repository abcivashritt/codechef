#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, temp;
		unordered_set < int > vis;
		cin>>n;
		while(n--) {
			cin>>temp;
			vis.insert(temp);
		}
		cout<<vis.size()<<"\n";
	}
	return 0;
}
