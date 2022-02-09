// 17_reference.cpp
#include <iostream>
using namespace std;

/*
int main() {
	int n = 42;

	int* p = &n;
	*p = 100;
	cout << *p << endl;
	cout << n << endl;
}
// n�� ���� 100, n�� �ּҰ��� 100����,
// p���� n�� �ּҰ��� ��� n�� ���� �����Ͽ� n�� 100���� ����
*/

// int* : ������ Ÿ�� => �ּҸ� ���� �� �ִ� ���� Ÿ��
// int& : ���۷��� Ÿ�� => ���� �޸𸮿� ���� ���ο� �̸��� �ο��� �� �ִ�.


// ����Ÿ��
// ���� : ���� �޸𸮿� ���� ���ο� �̸��� �ο��� �� �ִ�.

int main() {
	int n = 42;
	int& r = n; // n �̶�� ������ r �̶�� ���ο� �̸��� �ο�
	// �����Ϳ� �ٸ� �������� ������ �޸𸮿� ���ο� �̸��� �ο��ϴ� ����.
	// �����ʹ� ���� ������ �ּҸ� ���� �ִ� �����̱� ������ �������� �޸𸮸� �����ؾ�������,
	// ���۷����� �޸𸮸� �������� �ʾƵ� �ȴ�.
	r = 100;
	cout << r << endl;
	cout << n << endl;
	// r�� ������ n�� �������� �̾�����.
}