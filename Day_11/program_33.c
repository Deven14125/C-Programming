// Take an Input in the form of Binary String that contains only 0’s and 1’s and convert this number into
// integer.
// Input: 101.110
// Output: 5.75

#include <stdio.h>
#include <math.h>
#include <string.h>

double binaryToDecimal(const char* binaryStr) {
	double decimalValue = 0.0;
	int pointPosition = -1;
	int len = strlen(binaryStr);

	for (int i = 0; i < len; i++) {
		if (binaryStr[i] == '.') {
			pointPosition = i;
			break;
		}
	}

	if (pointPosition == -1) {
		pointPosition = len;
	}

	for (int i = 0; i < pointPosition; i++) {
		if (binaryStr[i] == '1') {
			decimalValue += pow(2, pointPosition - i - 1);
		}
	}

	for (int i = pointPosition + 1; i < len; i++) {
		if (binaryStr[i] == '1') {
			decimalValue += pow(2, pointPosition - i);
		}
	}

	return decimalValue;
}

int main() {
	char binaryStr[100];
	printf("Enter a binary number: ");
	scanf("%99s", binaryStr);

	double decimalValue = binaryToDecimal(binaryStr);
	printf("Decimal value: %.2f\n", decimalValue);

	return 0;
}