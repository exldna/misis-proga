# include <iostream>
# include <cmath>
# define _USE_MATH_DEFINES
# include <math.h>

int fact(int x) {
    int r = 1;
    for (int i = 1; i <= x; ++i) r *= i;
    return r;
}

double step(double x, int i) {
    return x * std::sin(i * M_PI / 4);
}

double sum(double x, double epsilon) {
    double s = 0, p = 1, st;
    for (int i = 1; ; ++i) {
        s += (st = step(p, i));
        p *= x;
        if (std::abs(st) < epsilon) break;
    }
    return s;
}

double f(double x) {
    return (x * std::sin(M_PI / 4)) / (1 - 2 * x * std::cos(M_PI / 4));
}

void show(double x, double s, double f) {
    std::cout << x << " | " << s << " | " << f << '\n';
}

int main() {
    const int a = 0, b = 1;
    const double sigma = 0.05, epsilon = 0.001;

    for (double x = a; x < b; x += sigma) {
        double s = sum(x, epsilon);
        show(x, s, f(x));
    }

    std::cout << std::endl;
    return 0;
}