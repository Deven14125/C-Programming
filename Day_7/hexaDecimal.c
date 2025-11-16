// WAP to Convert a Decimal to Hexa-decimal and vice versa.
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int choice;
    printf("Choose conversion type:\n");
    printf("1. Decimal to Hexadecimal\n");
    printf("2. Hexadecimal to Decimal\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Decimal to Hexadecimal
        int num, rem, i = 0;
        char hex[20];

        printf("\nEnter a decimal number: ");
        scanf("%d", &num);

        if (num == 0) {
            printf("Hexadecimal: 0\n");
            return 0;
        }

        while (num != 0) {
            rem = num % 16;
            if (rem < 10)
                hex[i] = rem + '0';      // 0–9
            else
                hex[i] = rem - 10 + 'A'; // A–F
            num /= 16;
            i++;
        }
        hex[i] = '\0';

        // Reverse the string
        printf("Hexadecimal: ");
        for (int j = i - 1; j >= 0; j--)
            printf("%c", hex[j]);
        printf("\n");
    }
    else if (choice == 2) {
        // Hexadecimal to Decimal
        char hex[20];
        int len, i, decimal = 0, base = 1;

        printf("\nEnter a hexadecimal number (without 0x): ");
        scanf("%s", hex);

        len = strlen(hex);

        for (i = len - 1; i >= 0; i--) {
            if (hex[i] >= '0' && hex[i] <= '9')
                decimal += (hex[i] - '0') * base;
            else if (hex[i] >= 'A' && hex[i] <= 'F')
                decimal += (hex[i] - 'A' + 10) * base;
            else if (hex[i] >= 'a' && hex[i] <= 'f')
                decimal += (hex[i] - 'a' + 10) * base;
            else {
                printf("Invalid hexadecimal number!\n");
                return 0;
            }
            base *= 16;
        }
        printf("Decimal: %d\n", decimal);
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
