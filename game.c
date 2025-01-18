#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

#define WIDTH 20
#define HEIGHT 20

int i, j, field[WIDTH][HEIGHT], x, y, Gy, head, tail, game, direction, food, score;
int Fx, Fy;

void print() {
    for (i = 0; i <= HEIGHT; i++) {
        for (j = 0; j <= WIDTH; j++) {
            if (i == 0 || i == HEIGHT || j == 0 || j == WIDTH) {
                printf("#");
            } else {
                if (i == y && j == x) {
                    printf("O");
                } else if (i == Fy && j == Fx) {
                    printf("F");
                } else {
                    int print = 0;
                    for (int k = 0; k < tail; k++) {
                        if (i == field[k][1] && j == field[k][0]) {
                            printf("o");
                            print = 1;
                        }
                    }
                    if (print == 0) printf(" ");
                }
            }
        }
        printf("\n");
    }
    printf("Score: %d", score);
}

void resetScreenPosition() {
    HANDLE hOut;
    COORD Position;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut, Position);
}

void random() {
    Fx = rand() % WIDTH;
    Fy = rand() % HEIGHT;
}

int main() {
    system("cls");
    x = WIDTH / 2; y = HEIGHT / 2; Gy = y; head = 5; tail = 1;
    game = 0; direction = 'd'; score = 0;
    for (i = 0; i < WIDTH; i++) {
        for (j = 0; j < HEIGHT; j++) {
            field[i][j] = 0;
        }
    }
    random();
    while (game == 0) {
        print();
        resetScreenPosition();

        for (int k = tail; k > 0; k--) {
            field[k][0] = field[k - 1][0];
            field[k][1] = field[k - 1][1];
        }

        field[0][0] = x; field[0][1] = y;

        if (_kbhit()) {
            switch (_getch()) {
                case 'w': direction = 'w'; break;
                case 'a': direction = 'a'; break;
                case 's': direction = 's'; break;
                case 'd': direction = 'd'; break;
            }
        }

        switch (direction) {
            case 'w': y--; break;
            case 'a': x--; break;
            case 's': y++; break;
            case 'd': x++; break;
        }

        if (x < 1 || x >= WIDTH || y < 1 || y >= HEIGHT) game = 1;

        if (x == Fx && y == Fy) {
            score += 10;
            tail++;
            random();
        }

        for (int k = 1; k < tail; k++) {
            if (x == field[k][0] && y == field[k][1]) {
                game = 1;
            }
        }
        Sleep(100);
    }

    printf("\n\nGame Over!!!\nYour Score: %d\n", score);

    return 0;
}
