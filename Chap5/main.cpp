#include <iostream>
#include <vector>
#include <string>

using namespace::std;

void q_5_5()
{
	const vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	int grade = 100;
	string lettergrade;
	if (grade == 100) {
		lettergrade = scores[5];
	}
	else if (grade >= 90) {
		lettergrade = scores[4];
	}
	else if (grade >= 80) {
		lettergrade = scores[3];
	}
	else if (grade >= 70) {
		lettergrade = scores[2];
	}
	else if (grade >= 60) {
		lettergrade = scores[1];
	}
	else {
		lettergrade = scores[0];
	}
	cout << grade << ": " << lettergrade << endl;
}

void q_5_6()
{
	vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	int grade = 0;
	while (cin >> grade)
	{
		string lettergrade = grade < 60 ? scores[0] : scores[(grade - 50) / 10];
		lettergrade += (grade == 100 || grade < 60) ? "" : (grade % 10 > 7) ? "+" : (grade % 10 < 3) ? "-" : "";
		cout << lettergrade << endl;
	}
}

void q_5_9()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch) {
		if (ch == 'a') { ++aCnt; }
		else if (ch == 'e') { ++eCnt; }
		else if (ch == 'i') { ++iCnt; }
		else if (ch == 'o') { ++oCnt; }
		else if (ch == 'u') { ++uCnt; }
	}
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << endl;
}

void q_5_10()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch) {
		switch (ch) {
			case('a'):case('A'): ++aCnt; break;
			case('e'):case('E'): ++eCnt; break;
			case('i'):case('I'): ++iCnt; break;
			case('o'):case('O'): ++oCnt; break;
			case('u'):case('U'): ++uCnt; break;
			default:
				break;
		}
	}
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << endl;
}

void q_5_11()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tCnt = 0, nCnt = 0;
	char ch;
	while(cin >> noskipws >> ch) {
		switch (ch) {
			case('a'):case('A'): ++aCnt; break;
			case('e'):case('E'): ++eCnt; break;
			case('i'):case('I'): ++iCnt; break;
			case('o'):case('O'): ++oCnt; break;
			case('u'):case('U'): ++uCnt; break;
			case(' '): ++spaceCnt; break;
			case('\t'): ++tCnt; break;
			case('\n'): ++nCnt; break;
			default:
				break;
		}
	}
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << '\n'
		<< "Number of space: \t" << spaceCnt << '\n'
		<< "Number of \\t: \t" << tCnt << '\n'
		<< "Number of \\n: \t" << nCnt << endl;
}

void q_5_12()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, ff_Cnt = 0, fl_Cnt = 0, fi_Cnt = 0;
	char ch, before='\0';
	while (cin >> noskipws >>ch) {
		switch (ch) {
		case('a'):
		case('A'): 
			++aCnt; break;
		case('e'):
		case('E'): 
			++eCnt; break;
		case('i'): {if (before == 'f') { ++fi_Cnt; }}
		case('I'): 
			++iCnt; break;
		case('o'): 
		case('O'): 
			++oCnt; break;
		case('u'):
		case('U'): 
			++uCnt; break;
		case('l'):
		{if (before == 'f') { ++fl_Cnt; } break; }
		case('f'):
		{if (before == 'f') { ++ff_Cnt; } break; }
		default:
			break;
		}
		before = ch;
	}
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << '\n'
		<< "Number of ff: \t" << ff_Cnt << '\n'
		<< "Number of fl: \t" << fl_Cnt << '\n'
		<< "Number of fi: \t" << fi_Cnt << endl;
}



int main()
{
	//q_5_5();
	//q_5_6();
	//q_5_9();
	//q_5_10();
	//q_5_11();
	q_5_12();

	return 1;
}
