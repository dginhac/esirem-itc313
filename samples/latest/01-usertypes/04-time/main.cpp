#include <ctime>
#include <iostream>

int main(int argc, char const *argv[])
{
    std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result))
              << result << " seconds since the Epoch\n";
    return 0;
}
