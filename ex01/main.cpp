#include "Span.hpp"
#include <algorithm>
#include <iostream>

int main() {
	std::vector<int> v;

	for (int i = 0; i < 10000; i++) {
		v.push_back(i);
	}

	v.push_back(6);
	std::random_shuffle(v.begin(), v.end());
	Span sp = Span(10001);

	sp.addRange(v.begin(), v.end());

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}

/*
> ./Span
2
14
*/