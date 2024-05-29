all:
	bison -d simple-code.y
	flex lexical_analyzer.l
	gcc -o simple-code simple-code.tab.c lex.yy.c -lm
	./simple-code