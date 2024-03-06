#include "duplicate.h"

/* Функция завершения программы с ошибкой */
void error_exit() {
    fprintf(stderr, "Puck you, Verter!");
    exit(EXIT_FAILURE);
}

/* Функция ввода пути к файлу */
FILE *input_filepath(char *filepath) {
    scanf("%255s", filepath);
    FILE *fin = fopen(filepath, "r");
    return fin;
}

/* Функция проверки существования файлов */
void check_open_file(FILE *fin1, FILE *fin2) {
    if (!fin1 || !fin2) {
        if (fin1 != NULL) fclose(fin1);
        if (fin2 != NULL) fclose(fin2);
        error_exit();
    }
}
/* Функция поиска дубликатов. Возвращает 1 если найден дубликат*/
int find_duplicate(FILE *fin1, FILE *fin2) {
    char buf1[BUFFER_SIZE];
    char buf2[BUFFER_SIZE];
    int end_file = 0;
    int duplicate = 0;
    while (!end_file) {
        char *end1 = fgets(buf1, BUFFER_SIZE, fin1);
        char *end2 = fgets(buf2, BUFFER_SIZE, fin2);
        if (end1 == NULL && end2 == NULL) {
            duplicate = 1;
            break;
        }
        if (strcmp(buf1, buf2)) {
            duplicate = 0;
            break;
        }
        if (!end1) end_file = 1;
        if (!end2) end_file = 1;
    }

    fclose(fin1);
    fclose(fin2);

    return duplicate;
}

/* Функция удаления файла если он является дубликатом */
void remove_file(int duplicate, char *filepath) {
    if (duplicate) {
        remove(filepath);
    }
}
