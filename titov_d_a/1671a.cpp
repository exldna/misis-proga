# include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int ti = 0; ti < t; ++ti) {
        std::string s;
        std::cin >> s;
        bool key = true;
        int c = 1;
        for (int i = 0; i < s.size() - 1; ++i) {
            if (s[i] == s[i + 1]) {
                ++c;
            } else {
                if (c == 1) {
                    key = false;
                    break;
                }
                c = 1;
            }
        }
        if (c == 1) {
            key = false;
        }
        std::cout << (key ? "YES" : "NO") << '\n';
    }
    return 0;
}