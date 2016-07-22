fact_exe : fact.o main.o
	gcc -o fact_exe fact.o main.o
fact.o : fact.c
	gcc -c -o fact.o fact.c
main.o : main.c
	gcc -c -o main.o main.c
clean:
	rm *.o fact_exe
