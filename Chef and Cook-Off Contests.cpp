#include <iostream>
#include <map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		string s;
		map < string, int > count;

		cin>>n;
		while(n--) {
			cin>>s;
			count[s]++;
		}

		if(count["cakewalk"] >= 1 && count["simple"] >= 1 && count["easy"] >= 1 && (count["easy-medium"] >= 1 || count["medium"] >= 1) && (count["medium-hard"] >= 1 || count["hard"] >= 1))
			cout<<"Yes";
		else
			cout<<"No";
		cout<<"\n";
	}
	return 0;
}
