#include <iostream>

bool check(unsigned int a) {
    unsigned int c1, c2, c3, c4;
    c1 = a % 10;
    a = (a - c1) / 10;
    c2 = a % 10;
    a = (a - c2) / 10;
    c3 = a % 10;
    a = (a - c3) / 10;
    c4 = a;
    return c1 != c2 && c1 != c3 && c1 != c4 &&
           c2 != c3 && c2 != c4 &&
           c3 != c4;
}

int main() {
    unsigned int m;
    std::cin >> m;
    for (unsigned int i = m + 1; true; ++i) {
        if (check(i)) {
            std::cout << i;
            break;
        }
    }
    return 0;
}