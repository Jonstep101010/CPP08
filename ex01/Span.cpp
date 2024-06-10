#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
	: _elem(2) {}

Span::Span(unsigned int N)
	: _elem(N) {}

Span::Span(const Span& src)
	: _data(src._data), _elem(src._elem) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span& Span::operator=(Span const& rhs) {
	if (this != &rhs) {
		(void)rhs;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int x) {
	if (_elem == _data.size())
		throw MaxElemException();
	_data.push_back(x);
}
unsigned int Span::shortestSpan() {
	if (_data.size() < 2)
		throw SpanNotFoundException();
	return -1;
}

unsigned int Span::longestSpan() {
	if (_data.size() < 2)
		throw SpanNotFoundException();
	bool init = false;
	int  min;
	int  max;

	for (std::vector<int>::iterator iter = _data.begin(); iter != _data.end(); iter++) {
		if (!init) {
			min  = *iter;
			max  = *iter;
			init = true;
		}
		if (*iter < min)
			min = *iter;
		if (*iter > max)
			max = *iter;
	}
	return max - min;
}

// @follow-up range of iterators

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */