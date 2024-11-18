#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		string s;
		auto get_index = [](string s)->int {
			if(s == "A")
				return 0;
			else if(s == "B")
				return 1;
			else if(s == "AB")
				return 2;
			else if(s == "O")
				return 3;
		};
		cin>>n;
		vector < int > count(4, 0);
		for(int i=0;i<n;i++) {
			cin>>s;
			count[get_index(s)]++;
		}
		cout<<max(count[0], count[1]) + count[2] + count[3]<<"\n";
	}
	return 0;
}
