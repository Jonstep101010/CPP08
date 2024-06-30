#pragma once

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
	// range iterator
	void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	Span& operator=(Span const& rhs);

	class MaxElemException : public std::exception {
		const char* what() const throw() { return "maximum capacity exceeded"; }
	};
	class SpanNotFoundException : public std::exception {
		const char* what() const throw() { return "span cannot be found"; }
	};

private:
	std::vector<int> _data;
	unsigned int     _elem;
};
