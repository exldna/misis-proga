# include <iostream>
# include <vector>
# include <algorithm>

struct item_t {
    int i;
    int x;
    int y;
};

int main() {
    int t; std::cin >> t;
    for (int ti = 0; ti < t; ++ti) {
        int n, m;
        std::cin >>  n >> m;
        std::vector<item_t> r1;
        std::vector<item_t> r2;
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            std::string line;
            std::cin >> line;
            for (int j = 0; j < m; ++j) {
                if (line[j] == 'R') {
                    r1.push_back({cnt, j, i});
                    r2.push_back({cnt, j, i});
                    ++cnt;
                }
            }
        }
        std::sort(r1.begin(), r1.end(), [](item_t a, item_t b){ 
            return a.x < b.x; 
        });
        std::sort(r2.begin(), r2.end(), [](item_t a, item_t b){ 
            return a.y < b.y; 
        });

        bool key = false;
        int min_x = r1[0].x, min_y = r2[0].y;
        int i = 0, j;
        while (r1[i].x == min_x) {
            j = 0;
            while (r2[j].y == min_y) {
                if (r1[i].i == r2[j].i) {
                    key = true;
                    break;
                }
                ++j;
            }
            if (key) break;
            ++i;
        }
        std::cout << (key ? "YES" : "NO") << '\n';
    }

    return 0;
}