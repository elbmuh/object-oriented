// 175p ���� 1(1) 1���� double ������ �������� �Ҵ�ް� 3.14�� ����϶�
#include <iostream>
using namespace std;

int main() {
	double* p = new double;

	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	*p = 3.14;
	cout << *p << endl;

	delete p;
}