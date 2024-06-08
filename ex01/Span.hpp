#pragma once

#include <iostream>
#include <string>
#include <vector>

class Span {

public:
	Span();
	Span(unsigned int N);
	Span(Span const& src);
	~Span();

	// members
	void         addNumber(int x);
	unsigned int shortestSpan();
	unsigned int longestSpan();

	Span& operator=(Span const& rhs);

	// @follow-up range of iterators

	class MaxElemException : public std::exception {
		const char* what() const throw() {
			return "maximum capacity exceeded";
		}
	};
	class SpanNotFoundException : public std::exception {
		const char* what() const throw() {
			return "span cannot be found";
		}
	};

private:
	std::vector<int> _data;
	unsigned int     _elem;
};
