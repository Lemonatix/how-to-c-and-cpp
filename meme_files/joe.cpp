#include <cstdlib>

int main() {
#ifdef _WIN32
    std::system("start https://www.youtube.com/watch?v=dQw4w9WgXcQ");
#elif __APPLE__
    std::system("open https://www.youtube.com/watch?v=dQw4w9WgXcQ");
#else
    std::system("xdg-open https://www.youtube.com/watch?v=dQw4w9WgXcQ");
#endif
    return 0;
}