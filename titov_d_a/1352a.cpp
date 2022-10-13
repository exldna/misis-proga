# include <iostream>
# include <vector>
 
using uint = unsigned int;
 
int main() {
	uint t; std::cin >> t;
	for (uint ti = 0; ti < t; ++ti) {
		std::string n;
		std::cin >> n;
		uint k = 1;
		for (uint i = 0; i < n.size(); ++i) 
			k *= 10;
		uint c = 0;
		std::vector<uint> ans{};
		for (char i : n) {
			k /= 10;
			if (i == '0') {
				++c;
			}
			else {
				ans.push_back((i - '0') * k);
			}
		}
		std::cout << ans.size() << '\n';
		for (auto& i : ans) 
			std::cout << i << ' ';
		std::cout << '\n';
	}
	return 0;
}