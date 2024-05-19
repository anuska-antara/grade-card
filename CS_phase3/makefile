CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = calc_card
OBJS = main.o details.o calc.o display.o csv.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c library.h
	$(CC) $(CFLAGS) -c main.c

details.o: details.c library.h
	$(CC) $(CFLAGS) -c details.c

calc.o: calc.c library.h
	$(CC) $(CFLAGS) -c calc.c

display.o: display.c library.h
	$(CC) $(CFLAGS) -c display.c

csv.o: csv.c library.h
	$(CC) $(CFLAGS) -c csv.c

clean:
	del $(TARGET).exe $(OBJS)
