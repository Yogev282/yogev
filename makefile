CC = gcc
AR = ar
FLAGS = -Wall -g

all: loops loopd recursives recursived mains maindloop maindrec

loops: libclassloops.a


libclassloops.a: advancedClassificationLoop.o basicClassification.o
	$(AR) -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o

loopd: libclassloops.so

libclassloops.so: advancedClassificationLoop.o basicClassification.o
	$(CC) -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o

advancedClassificationLoop.o:
	$(CC) $(FLAGS) -fPIC -c advancedClassificationLoop.c

basicClassification.o:
	$(CC) $(FLAGS) -fPIC -c basicClassification.c


recursives: libclassrec.a


libclassrec.a: advancedClassificationRecursion.o basicClassification.o
	$(AR) -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o


recursived: libclassrec.so


libclassrec.so: advancedClassificationRecursion.o basicClassification.o
	$(CC) -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o

advancedClassificationRecursion.o:
	$(CC) $(FLAGS) -fPIC -c advancedClassificationRecursion.c

mains: libclassrec.a
	$(CC) $(FLAGS) main.c libclassrec.a -o mains -lm


maindloop: libclassloops.so
	$(CC) $(FLAGS) main.c -o maindloop ./libclassloops.so -lm


maindrec: libclassrec.so
	$(CC) $(FLAGS) main.c -o maindrec ./libclassrec.so -lm


clean:
	rm -f *.o *.a *.so mains maindloop maindrec