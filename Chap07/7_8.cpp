// 예제 7-8) 전위 ++ 연산자 작성
#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;

public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}

	void show();
	Power& operator++ (); // 전위 ++ 연산자 함수 선언
};

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power& Power::operator++() {
	// 전위 ++ 연산자 멤버 함수 구현
	kick++;
	punch++;

	return *this;
}

int main() {
	Power a(2, 9), b;
	a.show();
	b.show();

	b = ++a; // 전위 ++연산자 사용
	a.show();
	b.show();
}