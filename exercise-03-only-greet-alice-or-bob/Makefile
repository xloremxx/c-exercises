all: app

app: main.o
	$(CC) -o $@ $^

main.o: main.c
	$(CC) -o $@ -c $^
