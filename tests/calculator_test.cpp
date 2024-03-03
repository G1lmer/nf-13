#include <gtest/gtest.h>
#include <Calculator.h>
#include <SymbolOperationMApper.h>

TEST(CalculatorTests, MinusTest)
{
	Calculator calculator = Calculator(new SymbolOperationMapper());
	double a = 7.1;
	double b = 3.4;

	double minusResult = calculator.calculate(a, b, "-");

	ASSERT_EQ(a - b, minusResult);
	
}

TEST(CalculatorTests, PlusTest)
{
	Calculator calculator = Calculator(new SymbolOperationMapper());
	double a = 7.1;
	double b = 3.4;

	double plusResult = calculator.calculate(a, b, "+");

	ASSERT_EQ(10.5, plusResult);

}

/**TEST(CalculatorTests, MultiplyTest)
{
	Calculator calculator = Calculator(new SymbolOperationMapper());
	double a = 2;
	double b = 3;

	double multiplyResult = calculator.calculate(a, b, "*");

	ASSERT_EQ(2 * 3, multiplyResult);

}**/

/**TEST(CalculatorTests, DivideTest)
{
	Calculator calculator = Calculator(new SymbolOperationMapper());
	double a = 6;
	double b = 3;

	double divideResult = calculator.calculate(a, b, "/");

	ASSERT_EQ(6 / 3, divideResult);

}**/

/**TEST(CalculatorTests, PlusNameTest)
{
	Calculator calculator = Calculator(new NameOperationMapper());
	double a = 6;
	double b = 3;

	double plusResult = calculator.calculate(a, b, "plus");

	ASSERT_EQ(9, plusResult);

}**/

/**TEST(CalculatorTests, MinusNameTest)
{
	Calculator calculator = Calculator(new NameOperationMapper());
	double a = 7;
	double b = 3;

	double minusResult = calculator.calculate(a, b, "minus");

	ASSERT_EQ(7 - 3, minusResult);

}**/

/**TEST(CalculatorTests, MultiplyTest)
{
	Calculator calculator = Calculator(new NameOperationMapper());
	double a = 2;
	double b = 3;

	double multiplyResult = calculator.calculate(a, b, "multiply");

	ASSERT_EQ(2 * 3, multiplyResult);

}**/

/**TEST(CalculatorTests, DivideTest)
{
	Calculator calculator = Calculator(new NameOperationMapper());
	double a = 6;
	double b = 3;

	double divideResult = calculator.calculate(a, b, "divide");

	ASSERT_EQ(6 / 3, divideResult);

}**/
