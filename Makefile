OBJS	= main.o abcAnalysis.o
SOURCE	= main.c abcAnalysis.c
HEADER	= abcAnalysis.h
OUT	= final.out
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.c
	$(CC) $(FLAGS) main.c 

abcAnalysis.o: abcAnalysis.c
	$(CC) $(FLAGS) abcAnalysis.c 


clean:
	rm -f $(OBJS) $(OUT)
