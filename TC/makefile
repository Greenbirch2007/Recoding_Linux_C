CC = gcc


.SUFFIXES:.c.o

.c.o:
	$(CC)-c -o $@ $^

hello:test.o
	echo $@
	$(CC)-o $@ $^

test.o:test.c
