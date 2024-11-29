#include <stdio.h>

void itoa_hex(int num, char *str) {
    unsigned int u_num = (unsigned int) num;  // Convertir l'entier signé en entier non signé
    int i = 0;
    char hex_digits[] = "0123456789abcdef";   // Chiffres hexadécimaux en minuscule

    // Traiter le cas de zéro explicitement
    if (u_num == 0) {
        str[i++] = '0';
    } else {
        // Convertir en hexadécimal
        while (u_num > 0) {
            str[i++] = hex_digits[u_num % 16];  // Ajouter le dernier chiffre hexadécimal
            u_num /= 16;
        }
    }

    // Ajouter un caractère de fin de chaîne
    str[i] = '\0';

    // Inverser la chaîne pour avoir l'ordre correct
    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int num = -255;
    char hex_str[20];

    itoa_hex(num, hex_str);  // Convertir -255 en hexadécimal
    printf("Hexadecimal: %s\n", hex_str);  // Affiche ffffff01 (sur un système à 32 bits)

	unsigned int n =  -255;
	printf("%x", n);

    return 0;
}