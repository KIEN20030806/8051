#include <reg52.h>

#define uchar unsigned char
#define uint unsigned int

sbit LATCH_A = P2^2; // Latch cho hàng
sbit LATCH_B = P2^3; // Latch cho c?t
sbit LATCH_OE = P2^4; // Latch cho d?u ra

uchar snake[64] = {0}; // Bi?u di?n ma tr?n 8x8
uchar snake_length = 1;
uchar snake_dir = 1; // 1: Right, 2: Down, 3: Left, 4: Up
uchar food_position = 0;

void delay(uint time) {
    uint i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 120; j++);
}

void display() {
    uchar i;
    for (i = 0; i < 8; i++) {
        LATCH_A = 0;
        LATCH_B = 0;
        P0 = ~(1 << i);
        LATCH_A = 1;
        LATCH_B = 1;
        P0 = snake[i*8];
        LATCH_OE = 0;
        delay(1);
        LATCH_OE = 1;
    }
}

void generateFood() {
    food_position = rand() % 64;
    snake[food_position] = 1;
}

void updateSnake() {
    uchar i;
    for (i = 63; i > 0; i--) {
        snake[i] = snake[i - 1];
    }

    switch (snake_dir) {
        case 1:
            snake[0] = (snake[0] << 1) & 0xFE;
            break;
        case 2:
            snake[0] = snake[0] >> 8;
            break;
        case 3:
            snake[0] = (snake[0] >> 1) | 0x80;
            break;
        case 4:
            snake[0] = snake[0] << 8;
            break;
    }
}

bit checkCollision() {
    uchar i;
    for (i = 1; i < snake_length; i++) {
        if (snake[0] & snake[i]) {
            return 1; // Collision detected
        }
    }
    return 0; // No collision
}

void main() {
	  snake[0] = 1;
    generateFood();

    while (1) {
        updateSnake();
        if (checkCollision()) {
            // Game over
            break;
        }

        if (snake[0] & snake[food_position]) {
            // Snake ate the food
            generateFood();
            snake_length++;
        }

        display();
        delay(100);
    }

    while (1) {
        // Game over state
        // Handle game over animation or reset here
    }
}
