#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int rn, cn;
	bool guess = true;
	cin>>rn>>cn;
	vector < vector < int > > a(rn, vector < int > (cn));
	vector < int > b(rn), c(cn);
	for(int i=0;i<rn;i++)
		for(int j=0;j<cn;j++) 
			cin>>a[i][j];
	for(int i=0;i<rn;i++)
		b[i] = *min_element(a[i].begin(), a[i].end());
	for(int i=0;i<cn;i++) {
		int max_element = 0;
		for(int j=0;j<rn;j++) {
			max_element = max(max_element, a[j][i]);
		}
		c[i] = max_element;
	}
	for(int i=0;i<rn && guess;i++) {
		for(int j=0;j<cn && guess;j++) {
			if(b[i] == c[j]) {
				cout<<b[i]<<"\n";
				guess = false;
			}
		}
	}
	if(guess)
		cout<<"GUESS\n";
	return 0;
}
