#include <iostream>
#include <map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		map <string, int> scores;
		string team;
		int s;
		for(int i=0;i<4;i++) {
			cin>>team>>s;
			scores.insert(pair<string, int> (team, s));
		}
		cout<<((scores["RealMadrid"] < scores["Malaga"] && scores["Barcelona"] > scores["Eibar"]) ? "Barcelona" : "RealMadrid")<<"\n";
	}
	return 0;
}
