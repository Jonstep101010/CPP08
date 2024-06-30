// the test has to be written in cpp14, but the library is written in cpp98

#include <gtest/gtest.h>
#include <random>
#include <algorithm> // Add this line

#include "Span.hpp"

TEST(SpanTest, test01) {
	std::vector<int> v;

	for (int i = 0; i <= 10000; i++) {
		v.push_back(i);
	}
	std::shuffle(v.begin(), v.end(), std::default_random_engine());
	Span sp = Span(10001);

	sp.addRange(v.begin(), v.end());

	EXPECT_EQ(sp.shortestSpan(), 1);
	EXPECT_EQ(sp.longestSpan(), 10000);
}