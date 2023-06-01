// (202p) 1. 다음 프로그램의 실행 결과는 무엇인가?
#include <iostream>
#include <string>
using namespace std;

int main() {
	string a("Hello C++");
	cout << a.length() << endl; // 문자열의 길이를 재는 함수

	a.append("!!");
	cout << a << endl;

	cout << a.at(6) << endl;
	cout << a.find("C") << endl;

	int n = a.find("+++");
	cout << n << endl;

	a.erase(1, 3);
	cout << a << endl;
}