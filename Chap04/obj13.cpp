// (199p) 4-13) ���ڿ��� �Է� �ް� ȸ����Ű��
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "�Ʒ��� ���ڿ��� �Է��ϼ���. �� ĭ�� �־ �˴ϴ�.(�ѱ� �ȵ�) " << endl;
	getline(cin, s, '\n');	// ���ڿ� �Է�
	int len = s.length();	// ���ڿ��� ����

	for (int i = 0; i < len; i++) {
		string first = s.substr(0, 1);	// �� ���� ���� 1���� ���ڿ��� �и�
		string sub = s.substr(1, len - 1); // ������ ���ڵ��� ���ڿ��� �и�
		s = sub + first;	   // �� ���ڿ��� �����Ͽ� ���ο� ���ڿ��� ����
		cout << s << endl;
	}
}