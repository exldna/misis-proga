# include <iostream>
 
using uint = unsigned int;
 
int main() {
	int n, k, m = -1'000'000'000;
	std::cin >> n >> k;
	for (uint i = 0; i < n; ++i) {
		int f, t;
		std::cin >> f >> t;
		if (t > k) f -= (t - k);
		m = std::max(m, f);
	}
	std::cout << m << '\n';
	return 0;
}