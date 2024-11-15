#include <iostream>
#include <map>
using namespace std;

int main() {
	int n1,n2,n3,temp,n=0;
	map < int, int > count;
	cin>>n1>>n2>>n3;
	
	while(n1--) {
		cin>>temp;
		count[temp]++;
		if(count[temp] == 2)
			n++;
	}

	while(n2--) {
		cin>>temp;
		count[temp]++;
		if(count[temp] == 2)
			n++;
	}

	while(n3--) {
		cin>>temp;
		count[temp]++;
		if(count[temp] == 2)
			n++;
	}

	cout<<n<<"\n";
	for(auto it : count) {
		if(it.second >=2)
			cout<<it.first<<"\n";
	}
	return 0;
}
