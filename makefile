scup: build.o
	gcc ./bin/build.o -o ./bin/scup
build.o: build.c	
	gcc -c build.c -o ./bin/build.o -Wall
