gcd_exe : gcd.o main.o
	gcc -o gcd-exe gcd.o main.o

gcd.o : gcd.c
	gcc -c -o gcd.o gcd.c
main.o : main.c
	gcc -c -o main.o main.c
clean:
	rm *.o gcd_exe
