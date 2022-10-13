# include <iostream>
 
int main() {
	unsigned int w; 
    std::cin >> w;
	std::cout << (w % 2 == 0 && w != 2 ? "YES" : "NO") << '\n';
	return 0;
}