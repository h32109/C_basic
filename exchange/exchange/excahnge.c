#include <stdio.h>
#pragma warning(disable:4996)
void main() {
	int int_money, coin_500, coin_100, coin_50, coin_10;
	printf("�������� ��ȯ�� �ݾ���?");
	scanf("%d", &int_money);
	coin_500 = int_money / 500;
	int_money = int_money % 500;
	coin_100 = int_money / 100;
	int_money = int_money % 100;
	coin_50 = int_money / 50;
	int_money = int_money % 50;
	coin_10 = int_money / 10;
	int_money = int_money % 10;
	printf("\n �����¥�� => %d �� \n", coin_500);
	printf(" ���¥�� => %d �� \n", coin_100);
	printf(" ���ʿ�¥�� => %d �� \n", coin_50);
	printf(" �ʿ�¥�� => %d �� \n", coin_10);
	printf(" �ٲ��� ���� �ܵ� => %d �� \n", int_money);
}