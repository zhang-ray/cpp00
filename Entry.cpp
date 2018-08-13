#include <iostream>
#include <chrono>
#include <ctime>

int main(void) {

    {
        std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
        std::time_t now_c = std::chrono::system_clock::to_time_t(now);
        std::cout << "The time was "
                  << std::put_time(std::localtime(&now_c), "%F %T") << '\n';
    }

    for (int i = 0; i < 10; i++) {
      std::cout << "what's the matter?" << std::endl;
    }

    return 0;
}
