# include <iostream>
# include <cmath>
# define _USE_MATH_DEFINES
# include <math.h>

template <typename T>
T my_pow(T b, int p) {
    T r = 1;
    for (int i = 0; i < p; ++i) r *= b;
    return r;
}

int fact(int x) {
    int r = 1;
    for (int i = 1; i <= x; ++i) r *= i;
    return r;
}

double step(double x, int i) {
    return my_pow(2 * x, i) / fact(i);
}

double sum(double x, double epsilon) {
    double s = 0, st;
    for (int i = 0; ; ++i) {
        s += (st = step(x, i)); // operator= return left operand
        if (std::abs(st) < epsilon) break;
    }
    return s;
}

double f(double x) {
    return pow(M_E, 2 * x);
}

void show(double x, double s, double f) {
    std::cout << x << " | " << s << " | " << f << '\n';
}

int main() {
    const int a = 0, b = 1;
    const double sigma = 0.1, epsilon = 0.0001;

    for (double x = a; x < b; x += sigma) {
        double s = sum(x, epsilon);
        show(x, s, f(x));
    }

    std::cout << std::endl;
    return 0;
}