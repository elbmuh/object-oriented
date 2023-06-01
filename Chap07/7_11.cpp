// ���� 7-11) '2 + a'�� ���� + ������ �Լ��� ������� 
// ���迡 �����ؼ� ���ø��� ����
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
	friend Power operator+(int op1, Power op2); // ������ ����
};

void Power::show() {
	cout << "kick = " << kick << ", punch = " << punch << endl;
}

Power operator+(int op1, Power op2) {
	// +������ �Լ��� �ܺ��Լ��� ����
	Power tmp; // �ӽ� ��ü ����
	tmp.kick = op1 + op2.kick; // kick ���ϱ�
	tmp.punch = op1 + op2.punch; // punch ���ϱ�
	return tmp; // �ӽð�ü����
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = 2 + a; // �Ŀ���ü ���ϱ� ����
	a.show();
	b.show();
}