#include <iostream>
using namespace std;

int main() {
	double a,b;
	char c;
	cin>>a>>b>>c;
	switch(c) {
		case '+':a = a+b;
				 break;
		case '-':a = a-b;
				 break;
		case '/':a = a/b;
				 break;
		case '*':a = a*b;
				 break;
	}
	cout<<fixed<<a<<"\n";
	return 0;
}
