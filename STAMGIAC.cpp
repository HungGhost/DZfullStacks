#include <bits/stdc++.h>
using namespace std;
int main() {
    double a, b, theta;
    cin >> a >> b >> theta;
    theta = theta * M_PI / 180; 
    double S = 0.5 * a * b * sin(theta);
    cout << fixed << setprecision(2) << S;
    return 0;
}
