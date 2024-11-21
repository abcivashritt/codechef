#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	int n, k, temp;
	string s;
	unordered_set < int > vis;
	cin>>n>>k;
	while(k--) {
		cin>>s;
		if(s == "CLICK") {
			cin>>temp;
			if(vis.find(temp) != vis.end())
				vis.erase(temp);
			else
				vis.insert(temp);
		}
		else
			vis.clear();
		cout<<vis.size()<<"\n";
	}
	return 0;
}
