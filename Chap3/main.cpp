#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::getline;


void demo_io_string() 
{
	string s;
	cin >> s;
	cout << s << endl;
}

void q_3_2_1()
{
	string a;
	while (getline(cin, a)) {
		cout << a << endl;
	}
}

void q_3_2_2()
{
	string a;
	while (cin >> a) {
		cout << a << endl;
	}
}

void q_3_4_1()
{
	string a, b;
	cin >> a >> b;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	if (a == b) {
		cout << "a == b" << endl;
	}
	else {
		cout << "a != b" << endl;
	}

}

void q_3_4_2()
{
	string a, b;
	cin >> a >> b;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	if (a.size() == b.size()) {
		cout << "a.size() == b.size()" << endl;
	}
	else if (a.size() >b.size()) {
		cout << a << endl;
	}
	else if (b.size() > a.size()) {
		cout << b << endl;
	}
}

void q_3_5(bool space)
{
	string sum, val;
	if (space){
		while (cin >> val) {
			val += " ";
			sum += val;
			cout << "sum: " << sum << endl;
		}
	}
	else {
		while (cin >> val) {
			sum += val;
			cout << "sum: " << sum << endl;
		}
	}
}
void demo_range_for()
{
	string a("Hello World!!!");

	decltype(a.size()) punct_cnt = 0;
	for (auto c : a) {
		if (ispunct(c)) {
			++punct_cnt;
		}
	}
	cout << punct_cnt << " punctuation characters in " << a << endl;
}


// main
int main() 
{
	//demo_io_string();
	//q_3_2_1();
	//q_3_2_2();
	//q_3_4_1();
	//_3_4_2();
	//q_3_5(true);
	demo_range_for();

	return 1;
}