// (192p) string Ŭ������ �̿��� ���ڿ� ���� �� ���
#include <iostream>
#include <string>
using namespace std;

int main() {
	// string ����
	string str; // �� ���ڿ��� ���� ��Ʈ�� ��ü ����
	string address("����� ���ϱ� �Ｑ�� 389");
	string copyAddress(address); // address�� ���ڿ��� ������ ��Ʈ�� ��ü ����

	char text[] = { 'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0' }; // C-string
	string title(text); // "Love C++" ���ڿ��� ���� ��Ʈ�� ��ü ����

	// ��Ʈ�� ���
	cout << str << endl; // �� ��Ʈ��. �ƹ� ���� ��µ��� ����
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}