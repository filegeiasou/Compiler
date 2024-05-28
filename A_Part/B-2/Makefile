all:
	bison -d simple-code.y
	flex a.l
	gcc -o simple-code simple-code.tab.c lex.yy.c
	./simple-code