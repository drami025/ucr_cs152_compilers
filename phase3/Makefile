parse: MINI_L.lex MINI_L.y
	bison -t -v -d --debug --file-prefix=y MINI_L.y
	flex MINI_L.lex
	g++ -g -o MINI_L y.tab.c lex.yy.c -lfl

clean:
	 rm -f lex.yy.c y.tab.* y.output *.o MINI_L
