// ���� 7-5) 2���� Power ��ü�� ���ϴ� == ������ �ۼ�
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
	bool operator== (Power op2); // == ������ �Լ� ����
};

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

bool Power::operator==(Power op2) {
	// == ������ ��� �Լ� ����
	if (kick == op2.kick && punch == op2.punch)
		return true;

	else
		return false;
}

int main() {
	Power a(7, 9), b(7, 9); // 2���� ������ �Ŀ� ��ü ����
	a.show();
	b.show();

	if (a == b)
		cout << "�� �Ŀ��� ����." << endl;

	else
		cout << "�� �Ŀ��� ���� �ʴ�." << endl;
}