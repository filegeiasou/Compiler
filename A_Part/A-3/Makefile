all:
	flex -o lexical_analyzer.c lexical_analyzer.l 
	gcc -o lexical_analyzer lexical_analyzer.c  
	./lexical_analyzer input_files/input.txt output_files/output.txt 