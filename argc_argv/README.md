Learning Objectives

Programs created to reach the Learning Objectives of:
Usage of arguments passed to your program.
Learn about two prototypes of main, and in which case do you use one or the other.
How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters.

0-whatsmyname.c
/**
*It ain't what they call you, it's what you answer to
*/
program that prints its name, followed by a new line.
If you rename the program, it will print the new name, without having to compile it again.
You should not remove the path before the name of the program.

1-args.c
/**
*Silence is argument carried out by other means
*/
Program that prints the number of arguments passed into it.
Prints a number, followed by a new line.

2-args.c
/**
* The best argument against democracy is a five-minute conversation with the average voter.
*/
Program that prints all arguments it receives.
All arguments should be printed, including the first one.
Only print one argument per line, ending with a new line.

3-mul.c
/**
*Neither irony nor sarcasm is argument.
*/
Program that multiplies two numbers.
Prints the result of the multiplication, followed by a new line.
The two numbers and result of the multiplication can be stored in an integer.
If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1.

4-add.c
/**
* To infinity and beyond.
*/
Program that adds positive numbers.
Prints the result, followed by a new line.
If no number is passed to the program, prints 0, followed by a new line.
If one of the number contains symbols that are not digits, prints Error, followed by a new line, and returns 1
Numbers and the addition of all the numbers is stored in an int.
