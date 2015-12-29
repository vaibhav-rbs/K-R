c2f-while:
	gcc -std=c11 c2f-while.c -o c2f-while

c2f-for:
	gcc -std=c11 c2f-for.c -o c2f-for

constants:
	gcc -std=c11 constants.c -o constants

FC:
	gcc -std=c11 FC.c -o FC

printEOF:
	gcc -std=c11 printEOF.c -o printEOF

char-count:
	gcc -std=c11 char-count.c -o char-count


char-count-for-loop:
	gcc -std=c11 char-count-for-loop.c -o char-count-for-loop

line-count:
	gcc -std=c11 line-count.c -o line-count

wc:
	gcc -std=c11 wc.c -o wc

arrays:
	gcc -std=c11 arrays.c -o arrays

function:
	gcc -std=c11 function.c -o function