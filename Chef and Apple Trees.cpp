#include <iostream>
#include <set>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, temp;
		set < int > st;

		cin>>n;
		while(n--) {
			cin>>temp;
			st.insert(temp);
		}
		cout<<st.size()<<"\n";
	}
	return 0;
}
