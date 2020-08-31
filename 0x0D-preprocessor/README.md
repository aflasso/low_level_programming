#0x0D C - Preprocessor

moust of the main functions work with a special header file.

- 0-main.c with 0-object_like_macro.h

	0-main: the main function that checks if the 0-object_like_macro header file is working
	0-object_like_macro.h: defines a macro named "SIZE" as an abrvation for the token "1024"

- 1-main.c with 1-pi.h

	1-main.c: the main function that checks if the 1-pi.h header file is working
	1-pi.h: defines a macro named "PI" as an abrvation for the token 3.14159265359

- 2-main.c 

	2-main.c: prints the name of the file it was compiled from, folloed by a new line

- 3-main.c with 3-function_like_macro.h

	3-main.c: the main function that checks if the 3-function_like_macro.h header file is working
	3-function_like_macro.h: use a macro like a function ABS(X) that computes the absolute value of a number x

- 4-main.c with 4-sum.h

	4-main.c: the main function that checks if the 4-sum.h header file is working
	4-sum.h: use a mcro like a function SUM(x, y) that computes the sum of the numbers x and y
