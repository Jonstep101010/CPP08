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
unsigned int Span::shortestSpan() { return 1; }
unsigned int Span::longestSpan() { return 2; }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */