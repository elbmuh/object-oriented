// (174p) 4-6) ������ �迭�� ���� �Ҵ� �� ��ȯ
#include <iostream>
using namespace std;

int main() {
	cout << "�Է��� ������ ������? ";

	int n;
	cin >> n;

	if (n <= 0) return 0;
	int* p = new int[n]; // n���� ���� �迭�� ���� �Ҵ��Ų��.
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° ����: "; // prompt ���
		cin >> p[i];	// Ű����κ��� ���� �Է�
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	cout << "��� = " << sum / n << endl;

	delete[] p; // �迭 �޸� ��ȯ
}
