// WAP to Convert a Decimal to Octal and vice versa.

#include <stdio.h>
int decimalToOctal(int decimal) {
	int octal = 0, place = 1;
	while (decimal > 0) {
		int remainder = decimal % 8;
		octal += remainder * place;
		decimal /= 8;
		place *= 10;
	}
	return octal;
}
int octalToDecimal(int octal) {
	int decimal = 0, place = 1;
	while (octal > 0) {
		int remainder = octal % 10;
		decimal += remainder * place;
		octal /= 10;
		place *= 8;
	}
	return decimal;
}
int main() {
	int choice, number;
	printf("Choose an option:\n");
	printf("1. Decimal to Octal\n");
	printf("2. Octal to Decimal\n");
	printf("Enter your choice (1 or 2): ");
	scanf("%d", &choice);
	if (choice == 1) {
		printf("Enter a decimal number: ");
		scanf("%d", &number);
		int octal = decimalToOctal(number);
		printf("Octal representation: %d\n", octal);
	} else if (choice == 2) {
		printf("Enter an octal number: ");
		scanf("%d", &number);
		int decimal = octalToDecimal(number);
		printf("Decimal representation: %d\n", decimal);
	} else {
		printf("Invalid choice!\n");
	}
	return 0;
}
