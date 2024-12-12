CC=gcc
CFLAGS=-Wall -O2
TARGET=student_app

all: $(TARGET)

$(TARGET): student_code.o
	$(CC) $(CFLAGS) -o $(TARGET) student_code.o

student_code.o: student_code.c
	$(CC) $(CFLAGS) -c student_code.c

clean:
	rm -f $(TARGET) student_code.o
