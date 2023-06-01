#include <iostream>
using namespace std;

class Circle {
public:
	int radius; // �������
	Circle();   // ������
	Circle(int r);
	~Circle();  // �Ҹ���
	double getArea(); // ����Լ�
};

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius << ", �� ����\n" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << ", �� ����\n" << endl;
}

Circle::~Circle() {
	cout << "������ " << radius << ", �� �Ҹ�\n" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {
	Circle mainDonut;
	Circle mainPizza(30);
}