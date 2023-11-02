CC = gcc
EFLAGS = -std=c11 -Wall -Wextra -Werror 
CFLAGS = -c
OFLAGS = $(EFLAGS) -o
APP = calculator/*

TEST_FLAGS = -lm -lcheck

ifeq ($(shell uname), Linux)
	TEST_FLAGS += -lpthread -lrt -lsubunit -lm
endif

all: install

build:
	mkdir calc
	cd calc && cmake -B build "../" && make -C build calculator

install: clean build
	mkdir ~/Desktop/calc/
	cp -rf calc ~/Desktop/calc/
	make clean

uninstall:
	rm -rf ~/Desktop/calc/

test: clean
	$(CC) $(OFLAGS) -g *.c $(TEST_FLAGS) -o test
	./test

gcov_report: clean
	$(CC) $(EFLAGS) --coverage *.c -o test $(TEST_FLAGS)
	rm -rf *.o *.a
	./test
	gcov *.gcno
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open report/index.html

dist:
	rm -rf ../Archive/
	mkdir ../Archive/
	cp -r ../calculator/ ../Archive/
	# cp ../dvi.html ../Archive/
	tar -C ../ -czvf Archive.tgz Archive/
	mv Archive.tgz ~/Desktop/
	rm -rf ../Archive/

style:
	cp ../../materials/linters/.clang-format .clang-format
	clang-format -n *.c *.h *.cpp
	rm .clang-format

dvi:
	open ../dvi.html

clean:
	rm -rf *.o *.a test tgtests *.gcda *.gcno *.gcov *.html *.css *.ou a.out
	rm -rf *.o functions/*.o functions/specificators/*.o tests/*.o
	rm -rf report/ *.info
	rm -rf calc
