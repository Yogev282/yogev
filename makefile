CC = gcc
AR = ar
FLAGS = -Wall -g

all: loops loopd recursives recursived mains maindloop maindlrec

loops: libclassloops.a


libclassloops.a: liblo
	$(AR) -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o


loopd: libclassloops.so


libclassloops.so: liblo
	$(CC) -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o


liblo: 
	$(CC) -c advancedClassificationLoop.c basicClassification.c


recursives: libclassrec.a


libclassrec.a: librec
	$(AR) -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o


recursived: libclassrec.so


libclassrec.so:librec
	$(CC) -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o


librec:
	$(CC) -c advancedClassificationRecursion.c basicClassification.c


mains: libclassrec.a
	$(CC) $(FLAGS) main.c libclassrec.a -o mains -lm


maindloop: libclassloops.so
	$(CC) $(FLAGS) main.c -o maindloop ./libclassloops.so -lm


maindlrec: libclassrec.so
	$(CC) $(FLAGS) main.c -o maindrec ./libclassrec.so -lm


clean:
	rm -f *.o *.a *.so mains maindloop maindrec