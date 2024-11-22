#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int main() {
    int T;
    cin>>T;
    while(T--) {
        int x,y, g, count = 0;
        cin>>x>>y;

        g = abs(x-y);
        for(long long i=1;i*i<=g;i++) {
            if(g%i == 0) {
                count++;
                if(i*i != g)
                    count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
