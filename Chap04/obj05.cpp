// 172p 4-5) ������ ������ ���� �Ҵ� �� ��ȯ
#include <iostream>
using namespace std;

int main() {
	int* p;

	p = new int; // int Ÿ�� 1�� �Ҵ�
	if (!p) {
		// ���� p == NULL �̸�, �޸� �Ҵ� ������
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	*p = 5; // �Ҵ� ���� ���� ������ 5�� ����Ѵ�.
	int n = *p;
	cout << "*p  = " << *p << endl;
	cout << "n = " << n << endl;

	delete p; // �޸� ��ȯ
}