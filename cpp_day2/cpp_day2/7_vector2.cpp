// 7_vector2.cpp
#include <iostream>

int main() {
	// 2. 사용자에게 5개의 정수를 입력받고 싶다.
	int x[5];			// 5개의 변수가 한개의 이름(+인덱스)으로 사용

	// 3. 사용자가 입력한 학생 수 만큼 점수를 다시 입력받고 싶다.
	int cnt = 0;
	std::cout << "학생수는 >>";
	std::cin >> cnt; //20 입력
	
	int score[cnt]; // ERROR, 배열의 크기로 변수는 선언 불가능.
	
	// 원할때 원하는 크기만큼 자유롭게 메모리 할당할 수 있는 공간이 필요하다.
	// "자유기억공간 (heap)"
	// C	: malloc() 함수 사용
	// C++	: new로 할당

	// 일반 변수 : 이름이 있으므로 이름으로 접근
	// 동적 할당 메모리 : 이름이 없다. 포인터 변수에 주소를 담아서 사용할 수 밖에 없다
	int* score = new int[cnt]; // 특징. 변수를 넣을 수 있다. 주소값을 가짐.
	// 포인터는 배열처럼 사용해도 되므로 score를 배열처럼 사용해도 된다.
	score[0] = 10;
	// 사용 후에는 필요없다면 반드시 메모리를 해지해야한다.
	delete[] score;
}