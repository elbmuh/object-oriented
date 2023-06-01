#include <iostream>
using namespace std;

#include "Calculator.h"
#include "Adder.h"

void Calculator::run() {
	cout << "2개의 숫자를 입력하세요 >> ";
	int a, b;
	cin >> a >> b;	   // 정수 2개 입력
	Adder adder(a, b); // 덧셈기 생성
	cout << adder.process();
}