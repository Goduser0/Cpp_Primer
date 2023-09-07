#include <iostream>

void q_2_3() 
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
}

void q_2_7()
{
	std::cout << "Who goes with F\145rgus?\012" << std::endl;
}

void q_2_8()
{
	std::cout << 2 << "\115\012";
	std::cout << 2 << "\t\115\012";
}

int reused = 42;
void demo_scope()
{
	int unique = 0;
	std::cout << reused << " " << unique << std::endl;
	int reused = 0;
	std::cout << reused << " " << unique << std::endl;
	std::cout << ::reused << " " << unique << std::endl;
}

int i = 42;
void q_2_13()
{
	int i = 100;
	int j = i;
	std::cout << "j: " << j << std::endl;
}

void q_2_14()
{
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i) {
		sum += i;
	}
	std::cout << i << " " << sum << std::endl;
}

void q_2_17()
{
	int i, &ri = i;
	i = 5; ri = 10;
	std::cout << i << " " << ri << std::endl;
}

void q_2_18()
{
	int a = 1, b = 2, *pr = &a;
	std::cout << pr << " " << *pr << std::endl;
	a = 2;
	std::cout << pr << " " << *pr << std::endl;
	pr = &b;
	std::cout << pr << " " << *pr << std::endl;
}

void q_2_20()
{
	int i = 42;
	int* pi = &i;
	*pi = *pi * *pi;
	std::cout << *pi << std::endl;
}

void demo_pointer()
{
	int ival = 1024;
	int *pi = &ival;
	int **pii = &pi;
	std::cout << "The value of ival\n"
		<< "direct value:" << ival << "\n"
		<< "indirect value:" << *pi << "\n"
		<< "doubly indirect value:" << **pii << std::endl;
}

void demo_reference2pointer()
{
	int i = 42;
	int *p;
	int *&r = p;
	r = &i;
	*r = 0;
	std::cout << i << std::endl;
}

void q_2_30()
{
	const int v2 = 0;
	int v1 = v2;
	int* p1 = &v1, & r1 = v1;
	const int* p2 = &v2, * const p3 = &i, & r2 = v2;

	//r1 = v2;
	//p1 = p2;
	//p2 = p1;
	//p1 = p3;
	//p2 = p3;
}

int main() 
{
	//q_2_3();
	//q_2_7();
	//q_2_8();
	//q_2_13();
	//q_2_14();
	//q_2_17();
	//q_2_18();
	//q_2_20();

	//demo_scope();
	//demo_pointer();
	//demo_reference2pointer();

	return 1;
}