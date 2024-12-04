#include "ft_printf.h"
#include <stdio.h>
int main() {
    // Test du spécificateur %c (caractère)
    char c = 'A';
    printf("\n\033[31m-----------Test %%c-----------\033[0m\n");
    printf("Test de %%c avec printf ():			                \033[34;1m%c\033[0m\n", c);
	ft_printf("Test de %%c avec ft_printf :			                \033[34;1m%c\033[0m\n", c);

    // Test d'un caractère spécial
    char char2 = '\n';  // Saut de ligne
    printf("Test de %%c avec printf (caractère '\\n') :                      \033[34;1m'%c'\033[0m\n", char2);
    ft_printf("Test de %%c avec ft_printf (caractère '\\n') :                   \033[34;1m'%c'\033[0m\n", char2);

    // Test d'un caractère de tabulation
    char char3 = '\t';  // Tabulation horizontale
    printf("Test de %%c avec printf (caractère '\\t') :                      \033[34;1m'%c'\033[0m\n", char3);
    ft_printf("Test de %%c avec ft_printf (caractère '\\t') :                   \033[34;1m'%c'\033[0m\n", char3);

    // Test d'un caractère d'échappement
    char char4 = '\\';  // Antislash
    printf("Test de %%c avec printf (caractère '\\') :                       \033[34;1m'%c'\033[0m\n", char4);
    ft_printf("Test de %%c avec ft_printf (caractère '\\') :                    \033[34;1m'%c'\033[0m\n", char4);

    // Test d'un caractère non imprimable (ASCII 7 - Bell)
    char char5 = 7;  // Caractère Bell (non imprimable)
    printf("Test de %%c avec printf (caractère non imprimable) :            \033[34;1m'%c'\033[0m\n", char5);
    ft_printf("Test de %%c avec ft_printf (caractère non imprimable) :         \033[34;1m'%c'\033[0m\n", char5);

    // Test d'un caractère unicode (caractère 'é' par exemple)
    unsigned int unicode_char = 0xE9;  // Unicode pour 'é'
    printf("Test de %%c avec printf (caractère unicode é) :                 \033[34;1m'%c'\033[0m\n", unicode_char);
    ft_printf("Test de %%c avec ft_printf (caractère unicode é) :              \033[34;1m'%c'\033[0m\n", unicode_char);


    // Test du spécificateur %s (chaîne de caractères)
    char *str = "Bonjour, monde !";
    printf("\n\033[31m-----------Test %%s-----------\033[0m\n");
	printf("Test de %%s avec printf (str) :			                \033[34;1m%s\033[0m\n", str);
    ft_printf("Test de %%s avec ft_printf (str) :		                \033[34;1m%s\033[0m\n", str);

        // Test d'une chaîne de caractères vide
    char *empty_str = "";
    printf("Test de %%s avec printf (chaîne vide) :                          \033[34;1m'%s'\033[0m\n", empty_str);
    ft_printf("Test de %%s avec ft_printf (chaîne vide) :                       \033[34;1m'%s'\033[0m\n", empty_str);

    // Test d'une chaîne de caractères normale
    char *normal_str = "Hello, World!";
    printf("Test de %%s avec printf (chaîne normale) :                       \033[34;1m'%s'\033[0m\n", normal_str);
    ft_printf("Test de %%s avec ft_printf (chaîne normale) :                    \033[34;1m'%s'\033[0m\n", normal_str);

    // Test d'une chaîne avec des espaces
    char *str_with_spaces = "This is a test string.";
    printf("Test de %%s avec printf (chaîne avec espaces) :                  \033[34;1m'%s'\033[0m\n", str_with_spaces);
    ft_printf("Test de %%s avec ft_printf (chaîne avec espaces) :               \033[34;1m'%s'\033[0m\n", str_with_spaces);

    // Test d'un pointeur NULL
    char *null_str = NULL;
    printf("Test de %%s avec printf (pointeur NULL) :                        \033[34;1m'%s'\033[0m\n", null_str);  // comportement habituel de printf avec NULL
    ft_printf("Test de %%s avec ft_printf (pointeur NULL) :                     \033[34;1m'%s'\033[0m\n", null_str);  // comportement habituel de ft_printf avec NULL

    // Test d'une chaîne très longue
    char long_str[1000];
    for (int i = 0; i < 999; i++) {
        long_str[i] = 'A';
    }
    long_str[999] = '\0';  // N'oublions pas de terminer la chaîne par '\0'
    printf("Test de %%s avec printf (chaîne très longue) :\n\033[34;1m'%s'\033[0m\n", long_str);
    ft_printf("Test de %%s avec ft_printf (chaîne très longue) :\n\033[34;1m'%s'\033[0m\n", long_str);

    // Test d'une chaîne contenant des caractères spéciaux (comme des sauts de ligne)
    char *str_with_special_chars = "Hello\nWorld\t!";
    printf("Test de %%s avec printf (chaîne avec caractères spéciaux) :\n                                                                \033[34;1m'%s'\033[0m\n", str_with_special_chars);
    ft_printf("Test de %%s avec ft_printf (chaîne avec caractères spéciaux) :\n                                                                \033[34;1m'%s'\033[0m\n", str_with_special_chars);

    // Test d'une chaîne avec un seul caractère
    char *single_char_str = "A";
    printf("Test de %%s avec printf (chaîne avec un seul caractère) :        \033[34;1m'%s'\033[0m\n", single_char_str);
    ft_printf("Test de %%s avec ft_printf (chaîne avec un seul caractère) :     \033[34;1m'%s'\033[0m\n", single_char_str);

    // Test avec un entier zéro
    int zero = 0;
    printf("\n\033[31m-----------Test %%d-----------\033[0m\n");
    printf("Test de %%d avec printf (zéro) :			                \033[34;1m%d\033[0m\n", zero);
    ft_printf("Test de %%d avec ft_printf (zéro) :		                \033[34;1m%d\033[0m\n", zero);

    // Test avec un très grand nombre
    int large_num = 1234567890;
    printf("Test de %%d avec printf (grand entier) :		                \033[34;1m%d\033[0m\n", large_num);
    ft_printf("Test de %%d avec ft_printf (grand entier) :	                \033[34;1m%d\033[0m\n", large_num);

    // Test avec un entier positif simple
    int num_pos = 42;
    printf("Test de %%d avec printf (entier positif) :                       \033[34;1m%d\033[0m\n", num_pos);
    ft_printf("Test de %%d avec ft_printf (entier positif) :                    \033[34;1m%d\033[0m\n", num_pos);

    // Test avec un entier négatif
    int num_neg = -42;
    printf("Test de %%d avec printf (entier négatif) :                       \033[34;1m%d\033[0m\n", num_neg);
    ft_printf("Test de %%d avec ft_printf (entier négatif) :                    \033[34;1m%d\033[0m\n", num_neg);

    // Test avec un entier très grand
    int num_large = 2147483647;  // Valeur maximale pour un int (32 bits)
    printf("Test de %%d avec printf (entier très grand) :                    \033[34;1m%d\033[0m\n", num_large);
    ft_printf("Test de %%d avec ft_printf (entier très grand) :                 \033[34;1m%d\033[0m\n", num_large);

    // Test avec un entier très petit (valeur minimale pour un int)
    int num_small = -2147483648;  // Valeur minimale pour un int (32 bits)
    printf("Test de %%d avec printf (entier très petit) :                    \033[34;1m%d\033[0m\n", num_small);
    ft_printf("Test de %%d avec ft_printf (entier très petit) :                \033[34;1m%d\033[0m\n", num_small);

    // Test avec un entier d'une valeur intermédiaire
    int num_mid = 123456;
    printf("Test de %%d avec printf (entier intermédiaire) :                 \033[34;1m%d\033[0m\n", num_mid);
    ft_printf("Test de %%d avec ft_printf (entier intermédiaire) :              \033[34;1m%d\033[0m\n", num_mid);

    // Test avec un entier négatif très grand (int overflow)
    int num_neg_large = -2147483647;
    printf("Test de %%d avec printf (entier négatif très grand) :            \033[34;1m%d\033[0m\n", num_neg_large);
    ft_printf("Test de %%d avec ft_printf (entier négatif très grand) :         \033[34;1m%d\033[0m\n", num_neg_large);

    // Test avec un entier zéro
    printf("\n\033[31m-----------Test %%i-----------\033[0m\n");
    printf("Test de %%i avec printf (zéro) :			                \033[34;1m%i\033[0m\n", zero);
    ft_printf("Test de %%i avec ft_printf (zéro) :		                \033[34;1m%i\033[0m\n", zero);

    // Test avec un très grand nombre
    printf("Test de %%i avec printf (grand entier) :		                \033[34;1m%i\033[0m\n", large_num);
    ft_printf("Test de %%i avec ft_printf (grand entier) :	                \033[34;1m%i\033[0m\n", large_num);

    // Test avec un entier positif simple
    printf("Test de %%i avec printf (entier positif) :                       \033[34;1m%i\033[0m\n", num_pos);
    ft_printf("Test de %%i avec ft_printf (entier positif) :                    \033[34;1m%i\033[0m\n", num_pos);

    // Test avec un entier négatif
    printf("Test de %%i avec printf (entier négatif) :                       \033[34;1m%i\033[0m\n", num_neg);
    ft_printf("Test de %%i avec ft_printf (entier négatif) :                    \033[34;1m%i\033[0m\n", num_neg);

    // Test avec un entier très grand
    printf("Test de %%i avec printf (entier très grand) :                    \033[34;1m%i\033[0m\n", num_large);
    ft_printf("Test de %%i avec ft_printf (entier très grand) :                 \033[34;1m%i\033[0m\n", num_large);

    // Test avec un entier très petit (valeur minimale pour un int)
    printf("Test de %%i avec printf (entier très petit) :                    \033[34;1m%i\033[0m\n", num_small);
    ft_printf("Test de %%i avec ft_printf (entier très petit) :                 \033[34;1m%i\033[0m\n", num_small);

    // Test avec un entier d'une valeur intermédiaire
    printf("Test de %%i avec printf (entier intermédiaire) :                 \033[34;1m%i\033[0m\n", num_mid);
    ft_printf("Test de %%i avec ft_printf (entier intermédiaire) :              \033[34;1m%i\033[0m\n", num_mid);

    // Test avec un entier négatif très grand (int overflow)
    printf("Test de %%i avec printf (entier négatif très grand) :            \033[34;1m%i\033[0m\n", num_neg_large);
    ft_printf("Test de %%i avec ft_printf (entier négatif très grand) :         \033[34;1m%i\033[0m\n", num_neg_large);

    // Test du spécificateur %x (hexadécimal minuscule)
    int hex_num = -255;  // 0xFF
    printf("\n\033[31m-----------Test %%x-----------\033[0m\n");
    printf("Test de %%x avec printf (hexadécimal majuscule) :	        \033[34;1m%x\033[0m\n", hex_num);
    ft_printf("Test de %%x avec ft_printf (hexadécimal majuscule) :	        \033[34;1m%x\033[0m\n", hex_num);

    // Test d'un entier non signé de valeur 0
    unsigned int val_0 = 0;
    printf("Test de %%x avec printf (entier non signé - 0) :                 \033[34;1m%x\033[0m\n", val_0);
    ft_printf("Test de %%X avec ft_printf (entier non signé - 0) :              \033[34;1m%x\033[0m\n", val_0);

    // Test d'un entier non signé de valeur 456
    unsigned int val_456 = 456;
    printf("Test de %%x avec printf (entier non signé - 456) :               \033[34;1m%x\033[0m\n", val_456);
    ft_printf("Test de %%x avec ft_printf (entier non signé - 456) :            \033[34;1m%x\033[0m\n", val_456);

    // Test d'un entier non signé de valeur maximale (UINT_MAX)
    unsigned int max_val = 4294967295;  // UINT_MAX sur 32 bits
    printf("Test de %%x avec printf (entier non signé - UINT_MAX) :          \033[34;1m%x\033[0m\n", max_val);
    ft_printf("Test de %%x avec ft_printf (entier non signé - UINT_MAX) :       \033[34;1m%x\033[0m\n", max_val);

    // Test d'un entier non signé négatif (comportement en C avec des valeurs négatives pour unsigned)
    int val_negative = -456;  // Valeur négative, sera interprétée comme une grande valeur positive en unsigned
    unsigned int val_neg_unsigned = (unsigned int) val_negative;  // Conversion en unsigned
    printf("Test de %%x avec printf (entier non signé -456) :                \033[34;1m%x\033[0m\n", val_neg_unsigned);
    ft_printf("Test de %%x avec ft_printf (entier non signé -456) :             \033[34;1m%x\033[0m\n", val_neg_unsigned);

    // Test d'un entier non signé de valeur 3221225472 (juste au-dessus de la moitié de UINT_MAX)
    unsigned int large_val = 3221225472;
    printf("Test de %%x avec printf (entier non signé - 3221225472) :        \033[34;1m%x\033[0m\n", large_val);
    ft_printf("Test de %%x avec ft_printf (entier non signé - 3221225472) :     \033[34;1m%x\033[0m\n", large_val);

    // Test du spécificateur %X (hexadécimal majuscule)
    printf("\n\033[31m-----------Test %%X-----------\033[0m\n");
    printf("Test de %%X avec printf (hexadécimal majuscule) :	        \033[34;1m%X\033[0m\n", hex_num);
    ft_printf("Test de %%X avec ft_printf (hexadécimal majuscule) :	        \033[34;1m%X\033[0m\n", hex_num);

    // Test d'un entier non signé de valeur 0
    printf("Test de %%X avec printf (entier non signé - 0) :                 \033[34;1m%X\033[0m\n", val_0);
    ft_printf("Test de %%X avec ft_printf (entier non signé - 0) :              \033[34;1m%X\033[0m\n", val_0);

    // Test d'un entier non signé de valeur 456
    printf("Test de %%X avec printf (entier non signé - 456) :               \033[34;1m%X\033[0m\n", val_456);
    ft_printf("Test de %%X avec ft_printf (entier non signé - 456) :            \033[34;1m%X\033[0m\n", val_456);

    // Test d'un entier non signé de valeur maximale (UINT_MAX)
    printf("Test de %%X avec printf (entier non signé - UINT_MAX) :          \033[34;1m%X\033[0m\n", max_val);
    ft_printf("Test de %%X avec ft_printf (entier non signé - UINT_MAX) :       \033[34;1m%X\033[0m\n", max_val);

    // Test d'un entier non signé négatif (comportement en C avec des valeurs négatives pour unsigned)
    printf("Test de %%X avec printf (entier non signé -456) :                \033[34;1m%X\033[0m\n", val_neg_unsigned);
    ft_printf("Test de %%X avec ft_printf (entier non signé -456) :             \033[34;1m%X\033[0m\n", val_neg_unsigned);

    // Test d'un entier non signé de valeur 3221225472 (juste au-dessus de la moitié de UINT_MAX)
    printf("Test de %%X avec printf (entier non signé - 3221225472) :        \033[34;1m%X\033[0m\n", large_val);
    ft_printf("Test de %%X avec ft_printf (entier non signé - 3221225472) :     \033[34;1m%X\033[0m\n", large_val);

    // Test d'un entier non signé de valeur 0
    unsigned int num_u = 0;
    printf("\n\033[31m-----------Test %%u-----------\033[0m\n");
    printf("Test de %%u avec printf (entier non signé - 0) :                 \033[34;1m%u\033[0m\n", num_u);
    ft_printf("Test de %%u avec ft_printf (entier non signé - 0) :              \033[34;1m%u\033[0m\n", num_u);

    // Test d'un entier non signé positif
    unsigned int num_u2 = 12345;
    printf("Test de %%u avec printf (entier non signé positif) :             \033[34;1m%u\033[0m\n", num_u2);
    ft_printf("Test de %%u avec ft_printf (entier non signé positif) :          \033[34;1m%u\033[0m\n", num_u2);

    // Test d'un entier non signé très grand (valeur maximale pour %u)
    unsigned int large_u = 4294967295; // 2^32 - 1
    printf("Test de %%u avec printf (entier non signé très grand) :          \033[34;1m%u\033[0m\n", large_u);
    ft_printf("Test de %%u avec ft_printf (entier non signé très grand) :       \033[34;1m%u\033[0m\n", large_u);

    // Test d'un entier non signé avec une valeur négative pour %u (interprété comme grand nombre)
    int negative_num_u = -1; // Ce sera interprété comme 4294967295
    printf("Test de %%u avec printf (valeur négative) :                      \033[34;1m%u\033[0m\n", negative_num_u);
    ft_printf("Test de %%u avec ft_printf (valeur négative) :                   \033[34;1m%u\033[0m\n", negative_num_u);

    // Test avec un grand nombre pour %u
    unsigned int large_num_u = 999999999;
    printf("Test de %%u avec printf (grand entier non signé) :               \033[34;1m%u\033[0m\n", large_num_u);
    ft_printf("Test de %%u avec ft_printf (grand entier non signé) :            \033[34;1m%u\033[0m\n", large_num_u);
    
    // Test avec un pointeur normal
    int num_p = 123;
    int *ptr = &num_p;
    printf("\n\033[31m-----------Test %%p-----------\033[0m\n");
    printf("Test de %%p avec printf (pointeur normal) :                      \033[34;1m%p\033[0m\n", ptr);
    ft_printf("Test de %%p avec ft_printf (pointeur normal) :                   \033[34;1m%p\033[0m\n", ptr);

    // Test avec un pointeur nul (NULL)
    int *ptr2_null = NULL;
    printf("Test de %%p avec printf (pointeur nul) :                         \033[34;1m%p\033[0m\n", ptr2_null);
    ft_printf("Test de %%p avec ft_printf (pointeur nul) :                      \033[34;1m%p\033[0m\n", ptr2_null);

    // Test avec un pointeur vers une chaîne de caractères
    char *str_ptr = "Test";
    printf("Test de %%p avec printf (pointeur vers chaîne) :                 \033[34;1m%p\033[0m\n", str_ptr);
    ft_printf("Test de %%p avec ft_printf (pointeur vers chaîne) :              \033[34;1m%p\033[0m\n", str_ptr);

    // Test avec un très grand pointeur (valeur maximale)
    unsigned long long large_ptr_value = 0xFFFFFFFFFFFFFFFF;
    void *large_ptr = (void *)large_ptr_value;
    printf("Test de %%p avec printf (grand pointeur) :                       \033[34;1m%p\033[0m\n", large_ptr);
    ft_printf("Test de %%p avec ft_printf (grand pointeur) :                    \033[34;1m%p\033[0m\n", large_ptr);

    // Test avec un pointeur vers un tableau d'entiers
    int arr[] = {1, 2, 3, 4, 5};
    int *arr_ptr = arr;
    printf("Test de %%p avec printf (pointeur vers tableau) :                \033[34;1m%p\033[0m\n", arr_ptr);
    ft_printf("Test de %%p avec ft_printf (pointeur vers tableau) :             \033[34;1m%p\033[0m\n", arr_ptr);

    // Test avec un pointeur vers une structure
    typedef struct {
        int a;
        char b;
    } MyStruct;

    MyStruct my_struct = {42, 'A'};
    MyStruct *struct_ptr = &my_struct;
    printf("Test de %%p avec printf (pointeur vers structure) :              \033[34;1m%p\033[0m\n", struct_ptr);
    ft_printf("Test de %%p avec ft_printf (pointeur vers structure) :           \033[34;1m%p\033[0m\n", struct_ptr);

    // 1. Test de plusieurs %c et %s dans une même chaîne
    printf("\n\033[31m-----------Test plusieurs %%c et %%s-----------\033[0m\n");
    printf("Test de %%c et %%s avec printf :                                  \033[34;1m'Character: %c, String: %s'\033[0m\n", c, str);
    ft_printf("Test de %%c et %%s avec ft_printf :                               \033[34;1m'Character: %c, String: %s'\033[0m\n", c, str);

    // 2. Test de %d et %i avec des valeurs
    int num_d = -42;
    int num_i = 123;
    printf("\n\033[31m-----------Test plusieurs %%d et %%i-----------\033[0m\n");
    printf("Test de %%d et %%i avec printf :                                  \033[34;1m'Value d: %d, Value i: %i'\033[0m\n", num_d, num_i);
    ft_printf("Test de %%d et %%i avec ft_printf :                               \033[34;1m'Value d: %d, Value i: %i'\033[0m\n", num_d, num_i);

    // 3. Test de %u et %x (non signé et hexadécimal)
    unsigned int num_uu = 255;
    unsigned int num_x = 255;
    printf("\n\033[31m-----------Test plusieurs %%u et %%x-----------\033[0m\n");
    printf("Test de %%u et %%x avec printf :                                  \033[34;1m'Unsigned: %u, Hex: %x'\033[0m\n", num_uu, num_x);
    ft_printf("Test de %%u et %%x avec ft_printf :                               \033[34;1m'Unsigned: %u, Hex: %x'\033[0m\n", num_uu, num_x);

    // 4. Test de %X (hexadécimal en majuscules) et %p (pointeur)
    unsigned int num_X = 255;
    void *ptr3 = (void *)12345;
    printf("\n\033[31m-----------Test plusieurs %%X et %%p-----------\033[0m\n");
    printf("Test de %%X et %%p avec printf :                                  \033[34;1m'Hex uppercase: %X, Pointer: %p'\033[0m\n", num_X, ptr3);
    ft_printf("Test de %%X et %%p avec ft_printf :                               \033[34;1m'Hex uppercase: %X, Pointer: %p'\033[0m\n", num_X, ptr3);

    // 5. Test de %% (affichage du caractère %)
    printf("\n\033[31m-----------Test plusieurs %%-----------\033[0m\n");
    printf("Test de %% avec printf :                                         \033[34;1m'Show percent: %%'\033[0m\n");
    ft_printf("Test de %% avec ft_printf :                                      \033[34;1m'Show percent: %%'\033[0m\n");

    // 6. Test avec tous les formats ensemble dans une seule chaîne
    char c1 = 'B';
    char *str2 = "World";
    int num2 = 456;
    unsigned int num3 = 789;
    unsigned int num4 = 255;
    void *ptr2 = (void *)0xABC;
    printf("\n\033[31m-----------Test avec tous les formats dans une chaîne-----------\033[0m\n");
    printf("Test de tous les formats avec printf :                          \033[34;1m'Character: %c, String: %s, Signed: %d, Unsigned:                                                                %u, Hex: %x, Hex Upper: %X, Pointer: %p, Percent                                                                : %%'\033[0m\n",
           c1, str2, num2, num3, num4, num4, ptr2);
    ft_printf("Test de tous les formats avec ft_printf :                       \033[34;1m'Character: %c, String: %s, Signed: %d, Unsigned:                                                                %u, Hex: %x, Hex Upper: %X, Pointer: %p, Percent                                                                : %%'\033[0m\n",
              c1, str2, num2, num3, num4, num4, ptr2);

    return 0;
}

//  cc main.c libftprintf.a