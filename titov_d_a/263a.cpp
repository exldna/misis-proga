# include <iostream>
 
int main() {
	int s;
	for (int i = 0; i < 25; ++i) {
		char tmp; std::cin >> tmp;
		if (tmp == '1') s = i;
	}
	std::cout << std::abs(s / 5 - 2) + std::abs(s % 5 - 2) << '\n';
	return 0;
}