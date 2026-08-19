CC=gcc
CFLAGS=-Wall

app: main.c student.c
	$(CC) $(CFLAGS) main.c student.c -o app

clean:
	rm -f *.o app
