#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::getline;

#include <vector>
using std::vector;

using std::begin;
using std::end;


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

void demo_toupper()
{
	string s("Hello World!!!");
	for (auto& c : s) {
		c = toupper(c);
	}
	cout << s << endl;
}

void demo_index()
{
	//下标
	string s("hello world");
	s[0] = toupper(s[0]);
	s[6] = toupper(s[6]);
	cout << s << endl;

	//使用下标进行迭代
	string a("hello world");
	for (decltype(a.size()) index = 0; index != a.size() && !isspace(a[index]); ++index) {
		s[index] = toupper(s[index]);
	}
	cout << s << endl;

	const string hexdigits = "0123456789ABCDEF";

	string result;
	string::size_type n;
	while (cin >> n) {
		if (n < hexdigits.size()) {
			result += hexdigits[n];
		}
	}
	cout << "Your hex number is:" << result << endl;
}

void q_3_6()
{
	string a;
	while (cin >> a) {
		for (auto& index : a) {
			index = 'x';
		}
		cout << a << endl;
	}
}

void q_3_10()
{
	string input, result;
	while (cin >> input) {
		for (decltype(input.size()) i = 0; i != input.size(); ++i) {
			if (!ispunct(input[i])) {
				result += input[i];
			}
		}
		cout << result << endl;
	}
}

void q_3_11()
{
	const string s = "Keep out!";
	for (auto& c : s) {
	}
}

void q_3_14()
{
	int i;
	vector<int> ivec;
	while (cin >> i) {
		ivec.push_back(i);
		cout << ivec.size() << endl;
	}
}

void q_3_15()
{
	string s;
	vector<string> svec;
	while (cin >> s) {
		svec.push_back(s);
		cout << svec.size() << endl;
	}
}

void demo_vector_index()
{
	vector<unsigned> score(11, 0);
	unsigned grade;
	while (cin >> grade) {
		++score[grade / 10];
	}

	for (auto i : score)
	{
		cout << i << " ";
	}
	cout << endl;
}

void q_3_16()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10, 42 };
	vector<string> v6{ 10 };
	vector<string> v7{ 10, "hi" };
	
	vector<int> test = v5;
	//vector<string> test = v6;
	if (!test.empty()) {
		cout << test.size() << endl;
		for (auto i : test) {
			cout << i << " ";
		}
		cout << endl;
	}
	else {
		cout << "It's empty" << endl;
	}
}

void q_3_17()
{
	vector<string> svec;
	string input;
	while (cin >> input) {
		svec.push_back(input);
	}
	for (auto& i : svec) {
		for (auto& j : i) {
			j = toupper(j);
		}
	}
	for (auto i : svec) {
		cout << i << endl;
	}
}

void q_3_20()
{
	vector<int> ivec;
	int i;
	while (cin >> i) {
		ivec.push_back(i);
	}

	for (int j = 0; j != (ivec.size() - 1); ++j) {
		cout << ivec[j] + ivec[j + 1] << " ";
	}
	cout << endl;

	for (int j = 0; j != ((ivec.size() + 1) / 2); ++j) {
		cout << ivec[j] + ivec[ivec.size() - 1 - j] << " ";
	}
	cout << endl;
}

void demo_iterator()
{
	string s("some string");
	if (s.begin() != s.end()) {
		auto it = s.begin();
		*it = toupper(*it);
	}
	cout << s << endl;
}

void q_3_21()
{
	vector<int> ivec;
	int i;
	while (cin >> i) {
		ivec.push_back(i);
	}

	for (auto it = ivec.begin(); (it + 1) != ivec.end(); ++it) {
		cout << *it + *(it + 1) << " ";
	}
	cout << endl;

	auto begin = ivec.begin();
	auto end = ivec.end() - 1;

	while (begin <= end) {
		cout << *begin + *end << " ";
		++begin;
		--end;
	}
	cout << endl;
}

void q_3_22()
{
	vector<string> text{ "hello", "" , "world"};
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
		for (auto i = it->begin(); i != it->end();i++){
			*i = toupper(*i);
		}
		cout << *it << endl;
	}
}

void q_3_23()
{
	vector<int> ivec(10, 2);
	for (auto i = ivec.begin(); i != ivec.end(); ++i) {
		*i = (*i) * 2;
	}

	for (auto i : ivec) {
		cout << i << " ";
	}
	cout << endl;
}

void demo_binary_search()
{
	vector<int> text{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sought = 7;

	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg) / 2;
	while (mid != end && *mid != sought) {
		if (sought < *mid) {
			end = mid;
		}
		else {
			beg = mid + 1;
		}
		mid = beg + (end - beg) / 2;
	}
	cout << *mid << endl;
}

void q_3_24()
{
	vector<int> ivec;
	int i;
	while (cin >> i) {
		ivec.push_back(i);
	}

	for (auto it = ivec.begin(); (it + 1) != ivec.end(); ++it) {
		cout << *it + *(it + 1) << " ";
	}
	cout << endl;

	auto begin = ivec.begin();
	auto end = ivec.end() - 1;

	while (begin <= end) {
		cout << *begin + *end << " ";
		++begin;
		--end;
	}
	cout << endl;
}

void q_3_25()
{
	vector<unsigned> score(11, 0);
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100) {
			++(*(score.begin() + grade / 10));
		}
	}

	for (auto i : score)
	{
		cout << i << " ";
	}
	cout << endl;
}

void q_3_31()
{
	constexpr size_t array_size = 10;
	int a[array_size] = {};
	int j = 0;
	for (size_t i = 0; i != array_size; i++) {
		a[i] = j;
		++j;
	}
}

void q_3_32()
{
	constexpr size_t array_size = 10;
	int a[array_size] = {};
	int j = 0;
	for (size_t i = 0; i != array_size; i++) {
		a[i] = j;
		++j;
	}

	int b[array_size] = {};
	for (size_t i = 0; i != array_size; i++) {
		b[i] = a[i];
	}

	for (auto i : b) {
		cout << i << " ";
	}
	cout << endl;

	vector<int> ivec(10);
	int num = 0;
	for (decltype(ivec.size()) i = 0; i != ivec.size(); ++i) {
		ivec[i] = num;
		num++;
	}

	for (auto i : ivec){
		cout << i << " ";
	}
	cout << endl;
}

void demo_array_index()
{
	int ia[] = { 0, 2, 4, 6, 8 };

	int i = ia[2];
	cout << i << endl;

	int* p = ia;
	i = *(p + 2);
	cout << i << endl;

	int* pr = &ia[2];
	int j = pr[1];
	cout << "p[1]: " << j << endl;
	int k = *(pr + 1);
	cout << "*(p+1): " << k << endl;
	int l = pr[-2];
	cout << "p[-2]: " << l << endl;
}

void q_3_35()
{
	int a[] = { 0, 2, 4, 6, 8 };
	for (int* p = a; p != end(a); ++p) {
		*p = 0;
	}
	for (auto i : a) {
		cout << i << " ";
	}
	cout << endl;
}

void q_3_36()
{
	int a[] = { 1, 2, 3, 4 };
	int b[] = { 1, 2, 3, 3 };

	int* p_a = a, * p_b = b;
	
	if ((end(a) - begin(a)) == (end(b) - begin(b))) {
		for (int j = 0; begin(a) + j != end(a); j++) {
			if (a[j] != b[j]) {
				cout << a[j] << "!=" << b[j] << endl;
			}
			else {
				cout << a[j] << "==" << b[j] << endl;
			}
		}
	}
	else {
		cout << "length different" << endl;
	}

	vector<int> veca = { 1, 2, 3, 4 };
	vector<int> vecb = { 1, 2, 3, 3 };

	if ((veca.end() - veca.begin()) == (vecb.end() - vecb.begin())) {
		for (int j = 0; veca.begin() + j != veca.end(); j++) {
			if (veca[j] != vecb[j]) {
				cout << veca[j] << "!=" << vecb[j] << endl;
			}
			else {
				cout << veca[j] << "==" << vecb[j] << endl;
			}
		}
	}
	else {
		cout << "length different" << endl;
	}
}

void q_3_39()
{
	// use string.
	string s1("Mooophy"), s2("Pezy");
	if (s1 == s2)
		cout << "same string." << endl;
	else if (s1 > s2)
		cout << "Mooophy > Pezy" << endl;
	else
		cout << "Mooophy < Pezy" << endl;

	cout << "=========" << endl;

	// use C-Style character strings.
	const char* cs1 = "Wangyue";
	const char* cs2 = "Pezy";
	auto result = strcmp(cs1, cs2);
	if (result == 0)
		cout << "same string." << endl;
	else if (result < 0)
		cout << "Wangyue < Pezy" << endl;
	else
		cout << "Wangyue > Pezy" << endl;
}

void q_3_43()
{
	//不使用类型别名、auto、decltype
	int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8,9, 10, 11 };
	//range for
	for (const int(&i)[4] : ia) {
		for (int j : i) {
			cout << j << " ";
		}
	}
	cout << endl;
	//for & index
	for (size_t i = 0; i != 3; ++i) {
		for (size_t j = 0; j != 4; ++j) {
			cout << ia[i][j] << " ";
		}
	}
	cout << endl;
	//for & pointer
	for (int(*i)[4] = ia; i != ia + 3; i++) {
		for (int* j = *i; j != *i + 4; j++) {
			cout << *j << " ";
		}
	}
	cout << endl;
}

void q_3_44()
{
	int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8,9, 10, 11 };
	//使用类型别名
	using int_array = int[4];
	//range for
	for (int_array& i : ia) {
		for (int j : i) {
			cout << j << " ";
		}
	}
	cout << endl;
	//for & index
	for (size_t i = 0; i != 3; ++i) {
		for (size_t j = 0; j != 4; ++j) {
			cout << ia[i][j] << " ";
		}
	}
	cout << endl;
	//for & pointer
	for (int_array* i = ia; i != ia + 3; i++) {
		for (int* j = *i; j != *i + 4; j++) {
			cout << *j << " ";
		}
	}
	cout << endl;
}

void q_3_45()
{
	//使用auto
	int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8,9, 10, 11 };
	//range for
	for (auto& i : ia) {
		for (int j : i) {
			cout << j << " ";
		}
	}
	cout << endl;
	//for & index
	for (auto i = 0; i != 3; ++i) {
		for (auto j = 0; j != 4; ++j) {
			cout << ia[i][j] << " ";
		}
	}
	cout << endl;
	//for & pointer
	for (auto i = ia; i != ia + 3; i++) {
		for (auto j = *i; j != *i + 4; j++) {
			cout << *j << " ";
		}
	}
	cout << endl;
}

// main
int main() 
{

	//q_3_2_1();
	//q_3_2_2();
	//q_3_4_1();
	//_3_4_2();
	//q_3_5(true);
	//q_3_6();
	//q_3_10();
	//q_3_11();
	//q_3_14();
	//q_3_15();
	//q_3_16();
	//q_3_17();
	//q_3_20();
	//q_3_21();
	//q_3_22();
	//q_3_23();
	//q_3_24();
	//q_3_25();
	//q_3_31();
	//q_3_32();
	//q_3_35();
	//q_3_36();
	//q_3_39();
	q_3_43();
	q_3_44();
	q_3_45();

	//demo_io_string();
	//demo_range_for();
	//demo_toupper();
	//demo_index();
	//demo_vector_index()
	//demo_iterator();
	//demo_binary_search();
	//demo_array_index();

	return 1;
}