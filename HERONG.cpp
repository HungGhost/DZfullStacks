#include <bits/stdc++.h>
using namespace std;
int main(void) {
    double a,b,c,p;
    cin >> a >> b >> c;
    p = 0.5 * (a + b + c);
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << fixed << setprecision(2) << S;
}
