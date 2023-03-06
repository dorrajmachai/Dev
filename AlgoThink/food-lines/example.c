#include <stdio.h>
// what the hell am I supposed to do, here?

int shortest_line_index(int lines[], int n) {
    int j; // initialized a variable for the smallest value in our array of line sizes, which will never be less than one...
    int shortest = 0; // initialized a variable to keep track of the shortest line we've seen so far.

    for (j = 1; j < n; j++) { // for j = 1, if j is less than the number of total lines, loop through the body, then increment j.
        if (lines[j] < lines[shortest]) // if the number of people in this line is shorter than the number of people in our first line, the shortest line is that line
            shortest = j; // ...so shortest becomes j
        printf("%i\n", shortest); // i just wanted to see if my hunch was correct, so we printed
        return shortest; // return the value of the shortest line for use in our main function
    }
}

/* -- THIS CODE WAS USED TO TEST THE ABOVE FUNCTION, PLEASE DISREGARD 
int test[] = {2, 1, 4, 3, 5};
int n = 5;

int main() {
    shortest_line_index(test, n);
    return 0;
}
*/