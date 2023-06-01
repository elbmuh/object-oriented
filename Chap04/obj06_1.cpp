// 175p 문제 1(1) 1개의 double 공간을 동적으로 할당받고 3.14를 기록하라
#include <iostream>
using namespace std;

int main() {
	double* p = new double;

	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	*p = 3.14;
	cout << *p << endl;

	delete p;
}