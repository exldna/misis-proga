# include <iostream>
 
int main() {
	unsigned int s;
    std::cin >> s;
	std::cout << s / 5 + (s % 5 == 0 ? 0 : 1) << '\n';
	return 0;
}