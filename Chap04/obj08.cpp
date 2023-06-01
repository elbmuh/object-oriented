// (179p) 4.8) Circle 객체의 동적 생성 및 반환 응용
// 반지름을 정수 값으로 입력받고, Circle 객체를 동적 생성하여 면적을 출력하라
// 음수가 입력되면 프로그램은 종료한다.
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	int radius;
	while (true) {
		cout << "정수 반지름 입력(음수이면 종료)>> ";
		cin >> radius;

		if (radius < 0) break;
		Circle* p = new Circle(radius); // 동적 객체 생성
		cout << "원의 면적은 " << p->getArea() << endl;

		delete p; // 객체 반환, delete 문이 없다면 메모리 누수 발생
	}
}