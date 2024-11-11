#include <iostream>
#include <map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		string s;
		map < string, int > mymap;
		cin>>n;
		while(n--) {
			cin>>s;
			if(mymap.find(s) == mymap.end())
				mymap.insert(pair<string ,int>(s, 1));
			else
				mymap.find(s)->second++;
		}
		cout<<mymap.find("START38")->second<<" "<<mymap.find("LTIME108")->second<<"\n";
	}
}
