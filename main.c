#include "ft_printf.h"
#include <stdio.h>
int main() {
    // Test du spécificateur %c (caractère)
    char c = 'A';
    printf("Test de %%c avec printf ():			                %c\n", c);
	ft_printf("Test de %%c avec ft_printf :			                %c\n", c);

    // Test du spécificateur %s (chaîne de caractères)
    char *str = "Bonjour, monde !";
	printf("Test de %%s avec printf (str) :			                %s\n", str);
    ft_printf("Test de %%s avec ft_printf (str) :		                %s\n", str);

    // Test avec un argument vide pour %s
    printf("Test de %%s avec printf (chaîne vide) :		                %s\n", NULL);
	ft_printf("Test de %%s avec ft_printf (chaîne vide) :	                %s\n", NULL);

    // Test avec plusieurs caractères et chaînes
    char c2 = 'X';
    char *str2 = "Test avec ft_printf!";
	printf("Test multiple (%%c et %%s) avec printf :		                %c et %s\n", c2, str2);
    ft_printf("Test multiple (%%c et %%s) avec ft_printf :	                %c et %s\n", c2, str2);

	// Test du spécificateur %d (entier)
    int num = -2147483648;
    printf("Test de %%d avec printf (entier) :		                %i\n", num);
    ft_printf("Test de %%d avec ft_printf (entier) :		                %i\n", num);

    // Test du spécificateur %i (entier signé)
    int num2 = 42;
    printf("Test de %%i avec printf (entier signé) :		                %i\n", num2);
    ft_printf("Test de %%i avec ft_printf (entier signé) :	                %i\n", num2);

    // Test avec un entier zéro
    int zero = 0;
    printf("Test de %%d avec printf (zéro) :			                %d\n", zero);
    ft_printf("Test de %%d avec ft_printf (zéro) :		                %d\n", zero);

    // Test avec un très grand nombre
    int large_num = 1234567890;
    printf("Test de %%d avec printf (grand entier) :		                %d\n", large_num);
    ft_printf("Test de %%d avec ft_printf (grand entier) :	                %d\n", large_num);

    // Test du spécificateur %x (hexadécimal minuscule)
    int hex_num = -255;  // 0xFF
    printf("Test de %%x avec printf (hexadécimal minuscule) :	        %x\n", hex_num);
    ft_printf("Test de %%x avec ft_printf (hexadécimal minuscule) :	        %x\n", hex_num);

    // Test du spécificateur %X (hexadécimal majuscule)
    printf("Test de %%X avec printf (hexadécimal majuscule) :	        %X\n", hex_num);
    ft_printf("Test de %%X avec ft_printf (hexadécimal majuscule) :	        %X\n", hex_num);

    // Test avec un nombre très grand pour %x et %X
    int large_hex_num = 4294967295;  // 0xFFFFFFFF
    printf("Test de %%x avec printf (grand hexadécimal minuscule) :	        %x\n", large_hex_num);
    ft_printf("Test de %%x avec ft_printf (grand hexadécimal minuscule) :	%x\n", large_hex_num);

    printf("Test de %%X avec printf (grand hexadécimal majuscule) :		%X\n", large_hex_num);
    ft_printf("Test de %%X avec ft_printf (grand hexadécimal majuscule) :	%X\n", large_hex_num);

    return 0;
}

// cc -lm ../libft/ft_itoa.c -o ft_itoa main.c ft_printf.c ft_print_utils.c