// ���� 7-8) ���� ++ ������ �ۼ�
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
	Power& operator++ (); // ���� ++ ������ �Լ� ����
};

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power& Power::operator++() {
	// ���� ++ ������ ��� �Լ� ����
	kick++;
	punch++;

	return *this;
}

int main() {
	Power a(2, 9), b;
	a.show();
	b.show();

	b = ++a; // ���� ++������ ���
	a.show();
	b.show();
}