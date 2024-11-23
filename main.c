#include <stdio.h>

void show(char data[3][3]) {
    printf(" %c | %c | %c \n", data[0][0], data[0][1], data[0][2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", data[1][0], data[1][1], data[1][2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", data[2][0], data[2][1], data[2][2]);
    printf("\n####################\n\n");
}

int main(void) {
    char data[3][3] = {{'q', 'w', 'e'}, {'a', 's', 'd'}, {'z', 'x', 'c'}};
    int isPlayer1 = 1;
    while (1) {
        show(data);

        char input;
        printf("Please input a position, to end the program press B: ");
        scanf("%c", &input);
        printf("\n");

        if (input == 'q') {
            if (isPlayer1) {
                data[0][0] = 'X';
            } else {
                data[0][0] = 'O';
            }
        } else if (input == 'w') {
            if (isPlayer1) {
                data[0][1] = 'X';
            } else {
                data[0][1] = 'O';
            }
        } else if (input == 'e') {
            if (isPlayer1) {
                data[0][2] = 'X';
            } else {
                data[0][2] = 'O';
            }
        } else if (input == 'a') {
            if (isPlayer1) {
                data[1][0] = 'X';
            } else {
                data[1][0] = 'O';
            }
        } else if (input == 's') {
            if (isPlayer1) {
                data[1][1] = 'X';
            } else {
                data[1][1] = 'O';
            }
        } else if (input == 'd') {
            if (isPlayer1) {
                data[1][2] = 'X';
            } else {
                data[1][2] = 'O';
            }
        } else if (input == 'z') {
            if (isPlayer1) {
                data[2][0] = 'X';
            } else {
                data[2][0] = 'O';
            }
        } else if (input == 'x') {
            if (isPlayer1) {
                data[2][1] = 'X';
            } else {
                data[2][1] = 'O';
            }
        } else if (input == 'c') {
            if (isPlayer1) {
                data[2][2] = 'X';
            } else {
                data[2][2] = 'O';
            }
        }
        if (input == 'b' || input == 'B') {
            break;
        }
        while (getchar() != '\n');
        if (isPlayer1) {
            isPlayer1 = 0;
        } else {
            isPlayer1 = 1;
        }
    }

    return 0;
}
