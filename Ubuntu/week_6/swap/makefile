

swap_exe : swap.o main.o
	gcc -o swap_exe swap.o main.o
swap.o : swap.c
	gcc -c -o swap.o swap.c

main.o : main.c
	gcc -c -o main.o main.c

clean:
	rm *.o swap_exe
