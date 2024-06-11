#include "Span.hpp"
#include <algorithm>
#include <iostream>

#define MAX_VAL 10000

int main() {
	std::vector<int> v;

	for (int i = 0; i < MAX_VAL; i++) {
		v.push_back(i);
	}

	v.push_back(MAX_VAL);
	std::random_shuffle(v.begin(), v.end());
	Span sp = Span(MAX_VAL + 1);

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