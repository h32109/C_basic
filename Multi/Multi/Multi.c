/* �� ���α׷��� �� ���� Ű����� �Է¹޾� ���� ����� ����ϴ� ���α׷��̴�. */

/* ���Ժ� */
#include <stdio.h> // printf() �� scanf()�� ����ϱ� ���� ��� ���� ����
#pragma warning(disable:4996) // �������� �ʴ� �Լ� ��뿡 ���� ��� �޼��� ����

int a, b, c; // ������ �����ϴ� ���� ����
int product(int x, int y); // ����� �Լ� ����

void main() {
	printf("Enter a number between 1 and 100 : ");
	scanf("%d", &a);

	printf("Enter another number between 1 and 100 : ");
	scanf("%d", &b);

	c = product(a, b);
	printf("%d X %d = %d \n", a, b, c);
}

int product(int x, int y) {
	return (x * y);
}
