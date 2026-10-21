MODEL=openmp
CC=gcc
CFLAGS=-fopenmp
TARGET=$(MODEL)

all: $(TARGET)

$(TARGET): $(MODEL).c
	$(CC) $(CFLAGS) -o $(MODEL) $(MODEL).c

clean:
	rm -f $(MODEL) $(TARGET)