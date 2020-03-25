#include <stdio.h>
#pragma warning(disable:4996)
void main() {
	int int_money, coin_500, coin_100, coin_50, coin_10;
	printf("동전으로 교환할 금액은?");
	scanf("%d", &int_money);
	coin_500 = int_money / 500;
	int_money = int_money % 500;
	coin_100 = int_money / 100;
	int_money = int_money % 100;
	coin_50 = int_money / 50;
	int_money = int_money % 50;
	coin_10 = int_money / 10;
	int_money = int_money % 10;
	printf("\n 오백원짜리 => %d 개 \n", coin_500);
	printf(" 백원짜리 => %d 개 \n", coin_100);
	printf(" 오십원짜리 => %d 개 \n", coin_50);
	printf(" 십원짜리 => %d 개 \n", coin_10);
	printf(" 바꾸지 못한 잔돈 => %d 원 \n", int_money);
}