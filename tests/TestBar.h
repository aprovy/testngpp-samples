
#include <testngpp/testngpp.hpp>

#include <CBar.h>

FIXTURE(CBar)
{
	TEST(should be able to multiply 2 integers)
	{
		ASSERT_EQ(6, CBar::multiply(2, 3));
	}

	TEST(should be able to div 2 integers)
	{
		INFO("the result should be double type");
		ASSERT_EQ(3, CBar::divide(6, 2));
	}

	TEST(if devident is 0 => throw exception)
	{
		WARN("not implemented yet");
	}
};