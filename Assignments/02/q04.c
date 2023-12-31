/*
* Pogrammer: Muhammad Umar
* Date: 23/10/23
* Description: Finds a path from the start to the end of a maze
*/

#include <stdio.h>

const char marked = 'V';

int createPath(char maze[5][5], int s_i, int s_j) {
    // base case
    if (maze[s_i][s_j] == 'E') {
    	maze[s_i][s_j] = marked;
    	return 1;
    }

    maze[s_i][s_j] = marked; // mark traversed path

    // right
    if (s_j + 1 < 5 && maze[s_i][s_j + 1] != 'W' && maze[s_i][s_j + 1] != marked)
        if (createPath(maze, s_i, s_j + 1)) return 1;

    // down
    if (s_i + 1 < 5 && maze[s_i + 1][s_j] != 'W' && maze[s_i + 1][s_j] != marked)
        if (createPath(maze, s_i + 1, s_j)) return 1;

    // go back
    maze[s_i][s_j] = 'O';
    return 0;
} //end createPath

void showPath(char maze[5][5]) {
	// show points where marked as visited
	for (int i = 0; i < 5; i++) for (int j = 0; j < 5; j++) if (maze[i][j] == marked) printf("%d,%d  ", i, j);
} //end showPath

void showMaze(char maze[5][5]) {
    int start[2], end[2];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%c ", maze[i][j]);
			if (maze[i][j] == 'S') start[0] = i, start[1] = j;
			if (maze[i][j] == 'E') end[0] = i, end[1] = j;
		}
		printf("\n");
	}
	printf("start at: %d,%d\nend at: %d,%d\n", start[0], start[1], end[0], end[1]);
} //end showMaze

int main(){
	int s_i, s_j;
	char maze[5][5];

	// input maze elements
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("Enter maze element at (%d, %d): ", i, j);
			scanf(" %c", &maze[i][j]);

			// saving start point
			if (maze[i][j] == 'S') {
				s_i = i;
				s_j = j;
			}
		}
	}

	printf("\n");
	showMaze(maze); // output maze
	printf("\nPath to complete maze:\n");
	createPath(maze, s_i, s_j);
	showPath(maze); // output path
	
	return 0;
} //end main
