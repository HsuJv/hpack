SourceFile=hpacktest.c\
		hpack.c

CC=gcc
OBJ=hpacktest

${OBJ}: ${SourceFile}
	@${CC} $^ -g -o$@ -lm

run:
	@./${OBJ}

clean:
	@rm -rf ${OBJ}