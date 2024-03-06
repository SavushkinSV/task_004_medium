#ifndef CRYPT_H
#define CRYPT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN_FILEPATH 256
#define CODE "peeredu"
#define ALPHABET_SIZE 26

void error_exit();
FILE *input_filepath(char *filepath);
void crypt_vizhiner(FILE *fin, char *code);
int crypt_cesar(int c, int shift);

#endif  // CRYPT