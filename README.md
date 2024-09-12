# C-programming


1:::matrixnew
2:::gaussthenum
3:::table



# matrixnew.c::
1. Program Functionality: Performs matrix multiplication by taking user input for two matrices and displaying their product.
2. Validation: Ensures matrices can be multiplied by checking dimensions.
3. User Interaction: Continuously prompts the user to perform operations with colored text for better readability.
4. Compilation and Execution: Instructions provided for compiling and running the program.
5. Example::
Enter number of Row and column of matrix A
2 3
Enter number of Row and column of matrix B
3 2
Enter matrix A
1 2 3
4 5 6
Enter matrix B
7 8
9 10
11 12

MATRIX A
 1  2  3 
 4  5  6 

MATRIX B
 7  8 
 9  10 
 11  12 

A X B 
 58  64 
 139  154 



# gaussthenum:::
1. Functionality: Generates a random number between 1 and 100 and prompts the user to guess it, providing hints if the guess is too high or too low.
2. User Interaction: Continuously prompts the user to guess the number until they get it right, counting the number of attempts.
3. Random Number Generation: Uses a random number generator seeded with the current time.
4. Multiple Rounds: Allows the user to play multiple rounds or exit the game.
5. example:
Gauss the num between 1 to 100
50
Enter Bigger num
75
Enter Smaller num
60
Enter Smaller num
55
Enter Bigger num
58
Enter Smaller num
57
You Guess it in 7 times
You want to continue [y/n]: y
Gauss the num between 1 to 100
...



# table
Functionality: This C program generates and displays the multiplication table for a user-input number from 1 to 10.
User Interaction: Continuously prompts the user to enter a number and displays its multiplication table. The user can choose to continue or exit the program.
Colored Output: Uses ANSI escape codes to display colored text for better readability in the terminal.
example:
Enter a num 
5
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45
5 X 10 = 50
you want to continue[y/n] : n
Thanks

