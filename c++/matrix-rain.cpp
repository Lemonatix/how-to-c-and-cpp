#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <chrono>

const int WIDTH = 80;
const int HEIGHT = 24;
const int durationSeconds = 3;

int main() {
    srand(time(0)); // Seed the random number generator

    auto start = std::chrono::high_resolution_clock::now();

    while(true) {
        auto now = std::chrono::high_resolution_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::seconds>(now - start);
        if (elapsed.count() >= durationSeconds) {
            break; // Exit the loop after 3 seconds
        }

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
    std::cout << "Matrix effect ended after " << durationSeconds << " seconds.\n";
    return 0;
}