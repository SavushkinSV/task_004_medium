CFLAGS=-Werror -Wextra -Wall 
CC=gcc
FSAN=-fsanitize=leak -fsanitize=address -fsanitize=undefined -fsanitize=unreachable -fno-sanitize-recover -fstack-protector

all: find_duplicates cryptography

rebuild: clean

find_duplicates: main_duplicate.c duplicate.c
	$(CC) $(CFLAGS) main_duplicate.c duplicate.c -o ../bin/find_duplicates

cryptography: main_crypt.c crypt.c
	$(CC) $(CFLAGS) main_crypt.c crypt.c -o ../bin/cryptography

ascii_sort:
	$(CC) $(CFLAGS) $(FSAN) main.c duplicate.c -o ../bin/ascii_sort

clean:
	rm -rf *.o *.out

check:
	clang-format -style='{BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 110}' -i *.c
	clang-format -style='{BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 110}' -i *.h
	cppcheck --enable=all --suppress=missingIncludeSystem *.c
	# valgrind --tool=memcheck --leak-check=yes ../bin/find_duplicates

