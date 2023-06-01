// (206p) 이론문제 5) 사각형 면적의 합을 출력하는 코드를 작성하라.
#include <iostream>
using namespace std;

class Recta {
	int width;
	int height;

public:
	Recta() { width = 1; height = 1; }
	Recta(int w, int h) {
		width = w;
		height = h;
	}

	double getArea() { return width * height; }
};

int main() {
	Recta r[5] = { Recta(), Recta(2, 3), Recta(3, 4), Recta(4, 5), Recta(5, 6) };

	for (int i = 0; i < 5; i++) {
		cout << r[i].getArea() << endl;
	}
}