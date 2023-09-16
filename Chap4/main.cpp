#include <iostream>
#include <vector>
#include <string>

using namespace std;


void q_4_4()
{
	cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl;
}

void q_4_6()
{	
	int input = 0;
	if (input % 2 == 0) {
		cout << input << " is even" << endl;
	}
}

void q_4_9()
{	
	const char* cp = "Hello World";
	if (cp && *cp) {
		cout << cp << " " << *cp << endl;
	}
}

void q_4_10()
{	
	int input;
	while (cin >> input && input != 42) {}
	cout << "quit" << endl;
}

void q_4_11()
{
	int a=4, b=3, c=2, d=1;
	if (a > b && b > c && c > d) {
		cout << "a>b>c>d" << endl;
	}
}

void q_4_21()
{
	vector<int> ivec = { 1, 2, 3, 4, 5 };
	for (auto& i : ivec)
	{
		i = ((i & 0x1) ? i * 2 : i);
		cout << i << " ";
	}
}

void q_4_22()
{
	int grade = 91;
	string level_1 = (grade >= 90) ? "high pass" : ((grade >= 75) ? "pass" : ((grade >= 60) ? "low pass" : "fail"));
	cout << level_1 << endl;

	if (grade >= 90) {
		cout << "high pass" << endl;
	}
	else if (grade >= 75) {
		cout << "pass" << endl;
	}
	else if (grade >= 60) {
		cout << "low pass" << endl;
	}
	else {
		cout << "fail" << endl;
	}
}

void q_4_23()
{
	string s = "word";
	string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
	cout << p1 << endl;
}

void demo_bit()
{
	unsigned long quiz1 = 0;
	cout << quiz1 << endl;
	quiz1 |= (1UL << 27);
	cout << quiz1 << endl;
	quiz1 &= ~(1UL << 27);
	cout << quiz1 << endl;
	bool statues = quiz1 & (1UL << 27);
	cout << statues << endl;
}

void q_4_28()
{
	cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl << endl;

	cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
	cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
	cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl;
	cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl << endl;

	cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
	cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
	cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
	cout << "long long:\t" << sizeof(long long) << " bytes" << endl << endl;

	cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
	cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
	cout << "long double:\t" << sizeof(long double) << " bytes" << endl << endl;
}

void q_4_32()
{
	constexpr int size = 5;
	int ia[size] = { 1, 2, 3, 4, 5 };
	for (int* ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr) {
		cout << ptr << " " << ia + size << endl;
	}
}

int main()
{
	//q_4_4();
	//q_4_6();
	//q_4_9();
	//q_4_10();
	//q_4_11();
	//q_4_21();
	//q_4_22();
	//q_4_23();
	//q_4_28();
	q_4_32();

	//demo_bit();

	return 1;
};