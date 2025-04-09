#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

const int WIDTH = 80;
const int HEIGHT = 24;

int main() {
    srand(time(0)); // Seed the random number generator

    while(true) {
        for (int i = 0; i < HEIGHT; ++i) {
            for (int j = 0; j < WIDTH; ++j) {
                int r = rand() % 100; // Random number between 0 and 99
                if (r < 10)
                    std::cout << "0";
                else if (r < 20)
                    std::cout << "1";
                else 
                    std::cout << " "; // Space for other numbers
            }
            std::cout << std::endl;
        }
        usleep(100000); 
        std::cout << "\033[2J\033[1;1H";
    }
    return 0;
}