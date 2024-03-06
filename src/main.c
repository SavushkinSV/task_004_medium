#include "duplicate.h"

int main() {
    char filepath1[MAX_LEN_FILEPATH] = "";
    char filepath2[MAX_LEN_FILEPATH] = "";
    FILE *fin1 = input_filepath(filepath1);
    FILE *fin2 = input_filepath(filepath2);
    check_open_file(fin1, fin2);
    remove_file(find_duplicate(fin1, fin2), filepath2);

    return EXIT_SUCCESS;
}
