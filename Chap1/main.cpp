#include <iostream>
#include "Sales_item.h"

void demo_io()
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

void demo_while()
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

void demo_for()
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

void demo_cin()
{
	int sum = 0, value = 0;
	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << "Sum is: " << sum << std::endl;
}

void demo_if()
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

void demo_class_io()
{
	Sales_item book;
	std::cin >> book;
	std::cout << book << std::endl;
}

void demo_class_sum()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;
}

void q_1_22()
{
	Sales_item item, item_sum;
	std::cin >> item_sum;
	while (std::cin >> item)
	{
		item_sum += item;
	}
	std::cout << "Sum of sale items: " << item_sum << std::endl;
}

void demo_member_function()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn())
	{
		std::cout << item1 + item2 << std::endl;
	}
	else
	{
		std::cerr << "Data must refer to same ISBN" << std::endl;
	}
}

void q_1_23()
{
	Sales_item item, item_sum;
	std::cin >> item_sum;
	
	int i = 1;
	while (std::cin >> item)
	{
		if (item.isbn() == item_sum.isbn())
		{
			i++;
		}
		else
		{
			std::cout << item_sum << " : " << i << std::endl;
			item_sum = item;
			i = 1;
		}
	}
	std::cout << item_sum << " : " << i << std::endl;
}

void q_1_24()
{
	Sales_item item, item_sum;
	std::cin >> item_sum;
	while (std::cin >> item)
	{
		if (item.isbn() == item_sum.isbn())
		{
			item_sum += item;
		}
		else
		{
			std::cout << item_sum << std::endl;
			item_sum = item;
		}
	}

	std::cout << item_sum << std::endl;
}

int demo_bookstore()
{
	Sales_item total;
	if (std::cin >> total) {
		Sales_item trans;
		while (std::cin >> trans) {
			if (total.isbn() == trans.isbn()) {
				total += trans;
			}
			else {
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl;
		return 0;
	}
	else {
		std::cerr << "No data ?!" << std::endl;
		return -1;
	}
}

int main()
{	
	printf("chap1\n");
	//demo_io();
	//demo_while();
	//demo_for();
	//demo_cin();
	//demo_if();
	//demo_class_io();
	//demo_class_sum();
	//demo_member_function();
	demo_bookstore();


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
	//q_1_22();
	//q_1_23();
	//q_1_24();


	return 0;
}