# include <iostream>

std::string to_3(int x) {
    std::string r = "";
    while (x > 0) {
        r = (char) ('0' + x % 3) + r;
        x /= 3;
    }
    return r;
}

int main() {
    int a, c;
    std::cin >> a >> c;
    std::cout << to_3(a) << ' ' << to_3(c);

    return 0;
}