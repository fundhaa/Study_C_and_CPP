// 7_vector2.cpp
#include <iostream>

int main() {
	// 2. ����ڿ��� 5���� ������ �Է¹ް� �ʹ�.
	int x[5];			// 5���� ������ �Ѱ��� �̸�(+�ε���)���� ���

	// 3. ����ڰ� �Է��� �л� �� ��ŭ ������ �ٽ� �Է¹ް� �ʹ�.
	int cnt = 0;
	std::cout << "�л����� >>";
	std::cin >> cnt; //20 �Է�
	
	int score[cnt]; // ERROR, �迭�� ũ��� ������ ���� �Ұ���.
	
	// ���Ҷ� ���ϴ� ũ�⸸ŭ �����Ӱ� �޸� �Ҵ��� �� �ִ� ������ �ʿ��ϴ�.
	// "���������� (heap)"
	// C	: malloc() �Լ� ���
	// C++	: new�� �Ҵ�

	// �Ϲ� ���� : �̸��� �����Ƿ� �̸����� ����
	// ���� �Ҵ� �޸� : �̸��� ����. ������ ������ �ּҸ� ��Ƽ� ����� �� �ۿ� ����
	int* score = new int[cnt]; // Ư¡. ������ ���� �� �ִ�. �ּҰ��� ����.
	// �����ʹ� �迭ó�� ����ص� �ǹǷ� score�� �迭ó�� ����ص� �ȴ�.
	score[0] = 10;
	// ��� �Ŀ��� �ʿ���ٸ� �ݵ�� �޸𸮸� �����ؾ��Ѵ�.
	delete[] score;
}