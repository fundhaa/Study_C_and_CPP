// 2_template.cpp

// C ���� �Ȱ��� �̸��� �Լ��� ����� ������ C++�� �����ϴ�.
// �Ķ���� ������ Ÿ���� �ٸ��� �����ϴ�.

// ������ ���忡���� ������ �Ȱ����� �ΰ� �������ϴ� �� �ǰ��ϴ�.
// �Լ��� ������ ���� �Լ��� �� �� ����� Ʋ(template)�� ������.
/*
int square(int n) {	return n * n; }
double square(double n) { return n * n; }
*/
template<typename T>
T square(T n) { return n * n; }


// ����� ���忡���� square�� ���� �ż� �� ���ϴ�.
int main() {
	// ���ø��� ����ϴ� ��Ȯ�� ǥ���
	square<int>(3);			// int square(int) �Լ� ����
	square<double>(3.4);	// double square(double) �Լ� ����

	// �� ǥ����� ��Ȯ�� ǥ���������, Ÿ������ ������ �����ϴ�.
	// ������ �Լ� ���ڸ� ������ Ÿ���� �����ȴ�.

	square(3); // 3�� int �̹Ƿ� �����Ϸ��� square<int>(3)���� ����
	//square(3.4);
}
// �ڵ� ����(Code Bloat)

// tempalte ���� �����Ϸ��� �ʹ� ���� ������ �Լ��� �����ؼ� �������� ũ�Ⱑ Ŀ����, �ڵ� �޸� ��뷮�� �����ϴ� ����
// �޸𸮰� ������ �Ӻ���� �о߿��� �����ؾ� ��
 // ������ ���� �Ӻ���忡���� template ���� ���