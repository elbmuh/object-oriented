// 172p 4-5) 정수형 공간의 동적 할당 및 반환
#include <iostream>
using namespace std;

int main() {
	int* p;

	p = new int; // int 타입 1개 할당
	if (!p) {
		// 만약 p == NULL 이면, 메모리 할당 못받음
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	*p = 5; // 할당 받은 정수 공간에 5를 기록한다.
	int n = *p;
	cout << "*p  = " << *p << endl;
	cout << "n = " << n << endl;

	delete p; // 메모리 반환
}