// (193p) 4-12) string �迭�� ���ڿ� Ű �Է� ����
#include <iostream>
#include <string>
using namespace std;

int main() {
	string names[5]; // string �迭 ����

	for (int i = 0; i < 5; i++) {
		cout << "�̸� >> ";
		getline(cin, names[i], '\n');
	}

	string latter = names[0];
	for (int i = 0; i < 5; i++) {
		if (latter < names[i]) { // names[i]�� latter���� �ڿ� �´ٸ�
			latter = names[i];	 // latter ���ڿ� ����
		}
	}

	cout << "�������� ���� �ڿ� ������ ���ڿ��� " << latter << endl;
}