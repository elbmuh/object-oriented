#include <iostream>
using namespace std;

#include "Calculator.h"
#include "Adder.h"

void Calculator::run() {
	cout << "2���� ���ڸ� �Է��ϼ��� >> ";
	int a, b;
	cin >> a >> b;	   // ���� 2�� �Է�
	Adder adder(a, b); // ������ ����
	cout << adder.process();
}