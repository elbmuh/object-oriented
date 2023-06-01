// (207p) 4장 연습문제-이론문제 8) 다음 프로그램이 실행될 때 출력 결과는?
#include <iostream>
#include <string>
using namespace std;

class Color {
	string c;
public:
	Color() { 
		c = "white";
		cout << "기본생성자" << endl;
	}

	Color(string c) {
		this->c = c;
		cout << "매개변수생성자" << endl;
	}

	~Color() {
		cout << "소멸자" << endl;
	}
};

class Palette {
	Color* p;
public:
	Palette() { p = new Color[3]; }
	~Palette() { delete[] p; }
};

int main() {
	Palette* p = new Palette;
	delete p;
}