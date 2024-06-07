#pragma once

#include <algorithm>
#include <iostream>

class NotFoundException : public std::exception {
	const char* what() const throw() {
		return "Element not found in container";
	}
};

template <typename T> void easyfind(T container, int to_find) {
	typename T::iterator iter = std::find(
		container.begin(), container.end(), to_find);

	if (iter == container.end()) {
		throw NotFoundException();
	}
	std::cout << "target found in container\n";
}