#include "Span.hpp"
#include <algorithm>

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
		_data = rhs._data;
		_elem = rhs._elem;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int x) {
	if (_elem == _data.size()) {
		throw MaxElemException();
	}
	_data.push_back(x);
}

unsigned int Span::shortestSpan() {
	if (_data.size() < 2) {
		throw SpanNotFoundException();
	}
	std::sort(_data.begin(), _data.end());
	int span = _data[1] - _data[0];
	for (std::vector<int>::iterator iter = _data.begin();
		 iter != _data.end() && iter + 1 != _data.end(); iter++) {
		if ((*(iter + 1) - *iter < span || span == 0) && *iter != 0) {
			span = *(iter + 1) - *iter;
		}
	}
	return span;
}

unsigned int Span::longestSpan() {
	if (_data.size() < 2) {
		throw SpanNotFoundException();
	}

	std::sort(_data.begin(), _data.end());
	return _data.back() - _data.front();
}

/**
 * @brief add a range of numbers to the data
 */
void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	while (begin != end) {
		this->Span::addNumber(*begin);
		begin++;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */