CFLAGS = -Wall -Wextra -pedantic

mmapsize: main.c
	$(CC) $(CFLAGS) -o mmapsize main.c

clean:
	rm -f mmapsize
