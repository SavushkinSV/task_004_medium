#include "crypt.h"

/* Функция завершения программы с ошибкой */
void error_exit() {
    fprintf(stderr, "Puck you, Verter!");
    exit(EXIT_FAILURE);
}

/* Функция ввода пути к файлу */
FILE *input_filepath(char *filepath) {
    scanf("%255s", filepath);
    FILE *fin = fopen(filepath, "r+");
    if (!fin) error_exit();
    fseek(fin, 0, SEEK_SET);
    return fin;
}

/* Функция кодирования файла шифром Вижинера*/
void crypt_vizhiner(FILE *fin, char *code) {
    int len = strlen(code);
    int c = 0;
    int count = 0;

    while ((c = fgetc(fin)) != EOF) {
        if (count == len) count = 0;
        int shift = code[count] - 'a';
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            c = crypt_cesar(c, shift);
            count++;
        }
        fseek(fin, -1, SEEK_CUR);
        fputc(c, fin);
    }
};

/* Функция кодирования шифром Цезаря */
int crypt_cesar(int c, int shift) {
    if (c >= 'A' && c <= 'Z') {
        c += 32;
    }
    if (c >= 'a' && c <= 'z') {
        c = c + (shift % ALPHABET_SIZE);
        if (c > 'z') c = 'a' + (c - 'z') - 1;
    }

    return c;
}

// ../tests/cryptography/chifre_me.txt
