#include <iostream>

void basic_io()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0;
	int v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
}

void q_1_03()
{
	std::cout << "Hello, World." << std::endl;
}

void q_1_04()
{
	std::cout << "Enter two numbers:" << std::endl;
	int a;
	int b;
	std::cin >> a >> b;
	std::cout << "The mul of " << a << " and " << b << " is " << a * b << std::endl;
}

void q_1_05()
{
	int a = 2;
	int b = 3;
	std::cout << "The mul of ";
	std::cout << a;
	std::cout << " and ";
	std::cout << b;
	std::cout << " is ";
	std::cout << a * b;
	std::cout << std::endl;
}

void q_1_07()
{
	/*
	* 注释界定符不能嵌套
	*
	*/
}

void q_1_08()
{
	std::cout << "/*" << std::endl;
	std::cout << "*/"<< std::endl;
	std::cout << /*"*/"/*"/*"*/ << std::endl;
}

void basic_while()
{
	int sum = 0, val = 1;
	while (val <= 10) {
		sum += val;
		val++;
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
}

void q_1_09()
{
	int sum = 0, val = 50;
	while (val <= 100) {
		sum += val;
		val++;
	}
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
}

void q_1_10()
{
	int start = 10;
	while (start >= 0) {
		std::cout << start << std::endl;
		start--;
	}
}

void q_1_11()
{
	int a, b;
	std::cout << "Enter two number" << std::endl;
	std::cin >> a >> b;
	if (a >= b)
	{
		while (a >= b)
		{
			std::cout << a << std::endl;
			a--;
		}
	}
	else if (a <= b)
	{
		while (a <= b)
		{
			std::cout << a << std::endl;
			a++;
		}
	}
}

void basic_for()
{
	int sum = 0;
	for (int val = 1; val <= 10; val++)
	{
		sum += val;
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
}

void q_1_12()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
	{
		sum += i;
	}
	std::cout << sum << std::endl;
}

void q_1_13()
{
	int sum = 0;
	for (int start = 50; start <= 100; start++)
	{
		sum += start;
	}
	std::cout << "q_1_9 redo: " << sum << std::endl;

	for (int start = 10; start >= 0; start--)
	{
		std::cout << "q_1_10_redo: " << start << std::endl;
	}
}

void basic_cin()
{
	int sum = 0, value = 0;
	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << "Sum is: " << sum << std::endl;
}

void basic_if()
{
	int currVal = 0, val = 0;
	if (std::cin >> currVal)
	{
		int cnt = 1;
		while (std::cin >> val)
		{
			if (val == currVal)
			{
				++cnt;
			}
			else
			{
				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}

		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	}
}

void basic_class_io()
{

}

int main()
{	
	printf("chap1\n");
	//basic_io();
	//basic_while();
	//basic_for();
	//basic_cin();
	//basic_if();
	basic_class_io();

	//q_1_03();
	//q_1_04();
	//q_1_05();
	//q_1_07();
	//q_1_08();
	//q_1_09();
	//q_1_10();
	//q_1_11();
	//q_1_12();
	//q_1_13();


	return 0;
}