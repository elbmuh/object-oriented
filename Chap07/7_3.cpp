// 예제 7-3) 다른 클래스 전체를 프렌드로 선언
#include <iostream>
using namespace std;

class Rect;

class RectManager {
	// RectManager 클래스 선언
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};

class Rect { // Rect 클래스 선언
	int width, height;
public:
	Rect(int width, int height) {
		this->width = width;
		this->height = height;
	}

	friend RectManager; // RectManager 클래스의 모든 함수를 프렌드 함수로 선언
};

bool RectManager::equals(Rect r, Rect s) {
	// r과 s가 같으면 true 리턴
	if (r.width == s.width && r.height == s.height)
		return true;

	else
		return false;
}

void RectManager::copy(Rect& dest, Rect& src) {
	// src를 dest에 복사
	dest.width = src.width;
	dest.height = src.height;
}

int main() {
	Rect a(1, 3), b(10, 7);
	RectManager man;

	if (man.equals(a, b))
		cout << "equal" << endl;

	else
		cout << "not equal" << endl;
}