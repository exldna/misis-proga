# include <iostream>

std::string dec_to_tric(int x) {
    std::string r = "";
    while (x > 0) {
        r = (char) ('0' + x % 3) + r;
        x /= 3;
    }
    return r;
}

int tric_to_dec(const std::string& x) {
    int r = 0, b = 1;
    for (int i = x.size() - 1; i >= 0; --i) {
        r += b * (x[i] - '0');
        b *= 3;
    }
    return r;
}

int main() {
    int a, c;
    std::cin >> a >> c;
    std::cout << tric_to_dec(dec_to_tric(12345)) << '\n';

    return 0;
}