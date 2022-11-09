#include <iostream>

#include "lib.hxx"

int main() {
	std::cout << my_hidden_symbol()
	          << ' '
	          << my_visible_symbol()
	          << std::endl;

    return 0;
}
