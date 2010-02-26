
#include <testngpp/testngpp.hpp>

#include <CFoo.h>

FIXTURE(CFoo)
{
	TEST(should be able to add up 2 integers)
	{
		ASSERT_EQ(4, CFoo::add(1, 3));
	}

	TEST(should be able to substract 2 integers)
	{
		ASSERT_EQ(-1, CFoo::sub(2, 3));
	}
};