FLAGS= -Wall -Wextra -Werror
STD= -std=c11

all: s21_math.a

s21_math.a: s21_math
	ar rc s21_math.a s21_*.o
	ranlib s21_math.a

s21_math: s21_math.c s21_math.h
	gcc ${FLAGS} ${STD} -c s21_math.c

test: s21_math.a test.c
	gcc ${FLAGS} ${STD} -c test.c
	gcc -c -fprofile-arcs -ftest-coverage s21_math.c
	gcc -fprofile-arcs -ftest-coverage s21_math.c test.o -lcheck -lm -lpthread -o run_tests

gcov_report: test
	./run_tests
	gcov -f *.gcno
	gcovr -r . --html --html-details -o report/report.html

clean:
	rm -rf *.o *.gcov *.gcno *.gcda test run_tests s21_math s21_math.a
