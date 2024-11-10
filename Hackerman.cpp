#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int prime[] = {2,3,5,7,11};
	while(t--) {
		int a,b;
		cin>>a>>b;
		a = a+b;
		bool is_prime = false;
		for(int i=0;i<5;i++)
			if(prime[i] == a)
				is_prime = true;
		cout<<(is_prime?"ALICE":"BOB")<<"\n";
	}
	return 0;
}
