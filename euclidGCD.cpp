//If we subtract two nos. whose gcd is to be found we see that the new number obtained and the smaller of
//the previous 2 numbers give the same gcd as that of the previous two numbers. Repeat this till the diff is 0.
//Same can be done with mod.

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while(b!=0) {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main() {
    cout << gcd(42, 24) << endl;
    return 0;
}