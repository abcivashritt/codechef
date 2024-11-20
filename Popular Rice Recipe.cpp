#include <iostream>
#include <map>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n,sum = 0;
		string temp1;
		char temp2;
		map < string, int > vote;

		cin>>n;
		while(n--) {
			cin>>temp1>>temp2;
			if(temp2 == '+')
				vote[temp1] = 1;
			else
				vote[temp1] = -1;
		}

		for(auto i : vote) {
			sum += i.second;
		}
		cout<<sum<<"\n";
	}
	return 0;
}
