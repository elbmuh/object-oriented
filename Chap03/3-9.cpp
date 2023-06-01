// ���� 3-9 ) ���� �ҽ����� ������ ������ �߻��ϴ� ���� ��ģ��.
#include <iostream>
using namespace std;

class PrivateAccessError {
public:
	int a, b;
	void f();
	void g();
	PrivateAccessError();
	PrivateAccessError(int x);
};

PrivateAccessError::PrivateAccessError() {
	a = 1; b = 1;
}

PrivateAccessError::PrivateAccessError(int x) {
	a = x;
	b = x;
}

void PrivateAccessError::f() {
	a = 5;
	b = 5;
}

void PrivateAccessError::g() {
	a = 6;
	b = 6;
}

int main()
{
	PrivateAccessError objA;
	cout << objA.a << ", " << objA.b << endl;

	PrivateAccessError objB(100);
	objB.a = 10;
	objB.b = 20;
	cout << objB.a << ", " << objB.b << endl;

	objB.f();
	cout << objB.a << ", " << objB.b << endl;

	objB.g();
	cout << objB.a << ", " << objB.b << endl;
}