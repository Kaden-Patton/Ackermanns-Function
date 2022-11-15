#include <iostream>

int ackermann(int m, int n);

int main() {
	std::cout << ackermann(0, 0) << std::endl;
	std::cout << ackermann(0, 1) << std::endl;
	std::cout << ackermann(1, 1) << std::endl;
	std::cout << ackermann(1, 2) << std::endl;
	std::cout << ackermann(1, 3) << std::endl;
	std::cout << ackermann(2, 2) << std::endl;
	std::cout << ackermann(3, 2) << std::endl;

	return 0;
}

int ackermann(int m, int n) {
	if (m == 0) {
		return n + 1;
	}
	else if (n == 0) {
		return ackermann(m - 1, 1);
	}
	else {
		return ackermann(m - 1, ackermann(m, n - 1));
	}
}