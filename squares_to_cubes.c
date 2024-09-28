#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
    int result = -1, square = 1, cube = 1;
    char cmd[4];
  
    
    printf("type command: Go or End ");
    scanf("%s", cmd);

    if (strcmp(cmd, "Go") == 0) {
        while (pow(square, 2) + 49 != pow(cube, 3)) {
            if (pow(square, 2) + 49 < pow(cube, 3)) {
                square++;
            } else {
                cube++;
            }

            if (square > 3000 || cube > 1000) {
                printf("No solution found\n");
                break;
            }

            printf("%d %d\n", square, cube);
        }

        result = square;

        printf("\nthe first combination is: %d, %d\n", square, cube);

    } else if (strcmp(cmd, "End") == 0) {
        printf("program ended\n");
    } else {
        printf("invalid command\n");
    }

    return result;
}