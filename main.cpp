#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, theta;
    cin >> a >> b >> theta;
    theta = theta * M_PI / 180; // Chuyển đổi góc từ độ sang radian
    double S = 0.5 * a * b * sin(theta);
    cout << fixed << setprecision(2) << S; // Làm tròn kết quả đến 2 chữ số thập phân
    return 0;
}