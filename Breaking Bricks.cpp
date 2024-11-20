#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int s, w, count = 1, s_copy;
		cin>>s;
		s_copy = s;
		for(int i=0;i<3;i++) {
			cin>>w;
			if(w <= s_copy)
				s_copy -= w;
			else {
				s_copy = s - w;	 
				count++;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
