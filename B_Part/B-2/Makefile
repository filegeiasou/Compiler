all:
	bison -d syntax_analyzer.y
	flex lexical_analyzer.l
	gcc -o syntax_analyzer syntax_analyzer.tab.c lex.yy.c -lm
	./syntax_analyzer 