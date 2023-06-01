// 예제 3-10 ) 헤더 파일과 cpp 파일로 분리하기 전
#include <iostream>
using namespace std;

class Adder {
	int op1, op2;
public:
	Adder(int a, int b);
	int process();
};

Adder::Adder(int a, int b) {
	op1 = a;
	op2 = b;
}

int Adder::process() {
	return op1 + op2;
}

class Calculator {
public:
	void run();
};

void Calculator::run() {
	cout << "2개의 숫자를 입력하세요 >> ";
	int a, b;
	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.process();
}

int main() {
	Calculator calc;
	calc.run();
}