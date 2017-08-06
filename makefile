CC = g++
CFLAGS = -std=c++11


demo: 	stringSortingDemo.o stringGenerator.o stringSorting.o io.o timer.o expensiveFunc.o
	$(CC) $(CFLAGS) -o stringSortingDemo stringSortingDemo.o stringGenerator.o stringSorting.o io.o timer.o expensiveFunc.o

stringSortingDemo.o: stringSortingDemo.cpp
	$(CC) $(CFLAGS) -c stringSortingDemo.cpp

stringGenerator.o: stringGenerator.cpp stringGenerator.h
	$(CC) $(CFLAGS) -c stringGenerator.cpp

stringSorting.o: stringSorting.cpp stringSorting.h
	$(CC) $(CFLAGS) -c stringSorting.cpp

io.o: io.cpp io.h
	$(CC) $(CFLAGS) -c io.cpp

timer.o: timer.cpp timer.h
	$(CC) $(CFLAGS) -c timer.cpp

expensiveFunc.o: expensiveFunc.cpp expensiveFunc.h
	$(CC) $(CFLAGS) -c expensiveFunc.cpp

clean:
	rm -f stringSortingDemo stringSortingDemo.o stringGenerator.o stringSorting.o io.o timer.o expensiveFunc.o
