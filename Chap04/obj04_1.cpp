// 169p CheckTime
// (1) Sample arr[3]; �� ����� �� ��µǴ� �����?
// �߸𸣰ڴ�. �����
#include <iostream>
using namespace std;

class Sample {
	int a;
public:
	Sample() { 
		a = 100;
		cout << a << ' ';
	}

	Sample(int x) {
		a = x;
		cout << a << ' ';
	}

	Sample(int x, int y) {
		a = x * y;
		cout << a << ' ';
	}

	int get() { return a; }
};

int main() {
	Sample arr[3] = { 0 };

	cout << arr[3].get() << endl;
}