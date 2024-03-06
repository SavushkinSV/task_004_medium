#ifndef DUPLICATE_H
#define DUPLICATE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN_FILEPATH 256
#define BUFFER_SIZE 256

void error_exit();
FILE *input_filepath(char *filepath);
void check_open_file(FILE *fin1, FILE *fin2);
int find_duplicate(FILE *fin1, FILE *fin2);
void remove_file(int duplicate, char *filepath);

#endif  // DUPLICATE_H