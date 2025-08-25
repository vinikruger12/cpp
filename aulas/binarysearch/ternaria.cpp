#include <bits/stdc++.h>
using namespace std;

int n, m;
int a, b;
double f(double x) {
    a = n;
    b = m;
    return x * (a - 2*x) * (b - 3*x) / 2.0;
}

const double eps = 1e-6;

void bb(double l = 0, double r = 1000000.0) {
    double res = 0;
    while (abs(r - l) > eps) {
        double mid1 = l + (r-l)/3.0;
        double mid2 = r - (r-l)/3.0;

        if (2*mid1 >= n || 2*mid2 >= n) {
            r = mid2;
            continue;
        }

        double f1 = f(mid1);
        double f2 = f(mid2);

        if (f1 >= f2) {
            r = mid2;
        } else {
            l = mid1;
        }
        res = max({res, f1, f2});
    }
    cout << fixed << setprecision(12);
    cout << l << ' ' << res << endl;
}

int main() {
    cin >> n >> m;
    bb();
    return 0;
}
