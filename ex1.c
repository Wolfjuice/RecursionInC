#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

#define MAX 100

int maze[100][100];             // 100x100 is the maximum size needed
int wasHere[100][100];
int correctPath[100][100];
int width, height;
int startX, startY, endX, endY;

int recursiveSolve(int x, int y);

int main() {

    int x, y;
    scanf("%d%d", &width, &height);
    scanf("\n");    // This is needed to "eat" the newline after height,
    // before the actual maze entries begin on the next line


    /* NOTE:  maze[y][x] will refer to the (x,y) element of the maze,
         i.e., y-th row and x-th column in the maze.
       The row is typically the first index in a 2D array because
       reading and writing is done row-wise.  This is called
       "row-major" order.

       Also note that although we have declared the maze to be 100x100,
       that is the maximum size we need.  The actual entries in the
       maze will be height * width.
    */

    char tempchar;

    for(y=0; y < height; y++) {
        for(x=0; x < width; x++) {
            scanf("%c", &tempchar);
            maze[y][x]=tempchar;

            ...     // Check for 'S' and 'F' here and use that to
            ...     // set values of startX, startY, endX and endY

            wasHere[y][x] = ...
            correctPath[y][x] = ...
        }
        scanf("%c", &tempchar);    // This is used to "eat" the newline
    }

    recursiveSolve(startX, startY);

    ...         // Code to print the output maze
}


int recursiveSolve(int x, int y) {
    ...
    ...
    /* You can pretty much use the body of the code in the java version
        with almost no changes at all!  I only had to change one line!
    */
    ...
    ...
}
