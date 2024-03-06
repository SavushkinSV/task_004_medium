
#include "crypt.h"

int main() {
    char filepath1[MAX_LEN_FILEPATH] = "";
    FILE *fin = input_filepath(filepath1);
    crypt_vizhiner(fin, CODE);

    return EXIT_SUCCESS;
}
