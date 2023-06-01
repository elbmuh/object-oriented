// 예제 7-6) 2개의 Power 객체를 더하는 += 연산자 작성
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
	Power& operator+= (Power op2); // += 연산자 함수 선언
};

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power& Power::operator+=(Power op2) {
	kick = kick + op2.kick;
	punch = punch + op2.punch;
	return *this;
}

int main() {
	Power a(7, 1), b(5, 6), c;
	a.show();
	b.show();

	c = a += b; // 파워 객체 더하기
	a.show();
	c.show();
}