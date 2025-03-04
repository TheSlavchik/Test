CC=gcc
CFLAGS=-Wall
EXECUTABLE=list

clear: 
	rm -rf *.o *.a *_test *.gch 

fmt: 
	clang-format -style=Microsoft -i `find -regex ".+\.[ch]"`

check_fmt:
	clang-format -style=Microsoft -i `find -regex ".+\.[ch]"` --dry-run --Werror

# [MAIN]

main.o: main.c
	gcc -g -c main.c -o main.o

# [INTEGRAL]

integral.o: integral/integral.c integral/integral.h
	gcc -g -c integral/integral.c -o integral.o 

integral.a: integral.o
	ar rc integral.a integral.o

integral_test: main.o integral.a
	gcc -g -static -o integral_test main.o integral.a -lm

# [EQUATION]

equation.o: equation/equation.c equation/equation.h
	gcc -g -c equation/equation.c -o equation.o 

equation.a: equation.o
	ar rc equation.a equation.o

equation_test: main.o equation.a
	gcc -g -static -o equation_test main.o equation.a -lm

# [LINKED_LIST]

linked_list.o: list/linked_list.c list/linked_list.h
	gcc -g -c list/linked_list.c -o linked_list.o 

linked_list.a: linked_list.o
	ar rc linked_list.a linked_list.o

list_test: main.o linked_list.a
	gcc -g -static -o list_test main.o linked_list.a -lm 

# [STACK]

stack.o: stack/stack.c stack/stack.h
	gcc -g -c stack/stack.c -o stack.o 

stack.a: stack.o
	ar rc stack.a stack.o

stack_test: main.o stack.a
	gcc -g -static -o stack_test main.o stack.a -lm

# [TESTS]

test: equation_test
	./equation_test

test1: equation_test
	./equation_test

test2: integral_test
	./integral_test

test3: list_test
	./list_test

test4: stack_test
	./stack_test