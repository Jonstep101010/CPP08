#include "easyfind.hpp"
#include <exception>
#include <vector>

int main() {
	std::vector<int> arr_int;
	arr_int.push_back(10);

	easyfind(arr_int, 10);

	std::vector<int> arr_int_more;
	for (int i = 0; i < 6; i++) {
		arr_int_more.push_back(i);
	}

	easyfind(arr_int_more, 1);
	easyfind(arr_int_more, 2);
	easyfind(arr_int_more, 3);
	easyfind(arr_int_more, 4);
	easyfind(arr_int_more, 5);
	arr_int_more.push_back(6);
	easyfind(arr_int_more, 6);
	try {
		easyfind(arr_int_more, 7);
	} catch (std::exception& e) {
		std::cout << "caught exception: " << e.what() << "\n";
	}
}