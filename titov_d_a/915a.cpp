# include <iostream>
# include <vector>
# include <algorithm>

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    for (int& i: a) std::cin >> i;
    std::sort(a.begin(), a.end());
    for (int i = a.size() - 1; i >=0; --i) {
        if (k % a[i] == 0) {
            std::cout << k / a[i] << '\n';
            break;
        }
    }
    return 0;
}