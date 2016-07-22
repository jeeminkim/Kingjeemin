cal_exe : cal.o main.o
	gcc -o cal_exe cal.o main.o
cal.o : cal.c
	gcc -c -o cal.o cal.c
main.o : main.c
	gcc -c -o main.o main.c
clean:
	rm *.o cal_exe
