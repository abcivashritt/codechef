#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n, pos = 0, neg = 0, temp, e_pos = 0, e_neg = 0;
		cin>>n;
		while(n--) {
			cin>>temp;
			if(temp == -1)
				neg++;
			else
				pos++;
		}
		if(pos/2 > neg/2)
			e_pos++;
		else if(neg/2 > pos/2)
			e_neg++;
		e_pos += pos%2;
		e_neg += neg%2;
		cout<<((abs(pos - neg) <= 2 && e_pos <= 1 && e_neg <= 1)? "YES" : "NO")<<"\n";
	}
	return 0;
}
