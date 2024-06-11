#pragma once

#include <stack>

/*
std::stack:
	- std::stack is designed to only allow access to the top element Last-In-First-Out
	- std::stack is a "container adapator", not a container, it holds another container and provides a limited interface
*/

// clang-format off
template <typename T, typename Container = std::deque<T> >
// clang-format on

class MutantStack : public std::stack<T, Container> {
public:
	MutantStack()
		: std::stack<T, Container>() {}
	MutantStack(const MutantStack& src)
		: std::stack<T, Container>(src) {}
	MutantStack& operator=(const MutantStack& src) {
		if (this != &src) {
			std::stack<T, Container>::operator=(src);
		}
		return *this;
	}

	typedef typename Container::iterator iterator;

	~MutantStack() {}

	iterator begin() { return std::stack<T, Container>::c.begin(); }
	iterator end() { return std::stack<T, Container>::c.end(); }
};