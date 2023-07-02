CC = gcc
FLAGS = -Wall -Wextra -Werror -std=c11
CFLAG = -c
SOURCE = $(wildcard s21_*.c)

GCOV = --coverage
PROJECTNAME=s21_math

all: clean $(PROJECTNAME).a check test gcov_report

$(PROJECTNAME).a:
	${CC} $(CFLAG) $(FLAGS) $(PROJECTNAME).c
	ar rc $(PROJECTNAME).a $(PROJECTNAME).o
	ranlib $(PROJECTNAME).a

test:
	${CC} ${FLAGS} $(PROJECTNAME).c test_math.c -o ${PROJECTNAME}_test -lcheck
	./${PROJECTNAME}_test

gcov_report:
	${CC} ${GCOV} ${FLAGS} $(PROJECTNAME).c test_math.c -o ${PROJECTNAME}_test -lcheck
	-./${PROJECTNAME}_test
	lcov -t ${PROJECTNAME}_test -o ${PROJECTNAME}_test.info -c -d .
	genhtml -o report ${PROJECTNAME}_test.info
	open ./report/index.html

check:
ifeq ("","$(wildcard ./.clang-format)")
	cp -f ../materials/linters/.clang-format ./.clang-format
endif
	clang-format -style=Google -n *.c *.h

clean:
	-rm -rf ${PROJECTNAME}
	-rm -rf ${PROJECTNAME}_test
	-rm -rf *.o && rm -rf *.gcno
	-rm -rf *.a && rm -rf *.gcda
	-rm -rf *.info && rm -rf *.gcov
	-rm -rf ./test && rm -rf ./gcov_report
	-rm -rf ./report/
	-rm -f .clang-format

.PHONY: all clean check