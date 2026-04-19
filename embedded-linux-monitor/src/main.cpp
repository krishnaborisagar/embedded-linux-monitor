#include <iostream>
#include <thread>
#include <chrono>
#include "cpu.h"
#include "memory.h"

int main() {
    while (true) {
        float cpu = getCPUUsage();
        float mem = getMemoryUsage();

        std::cout << "CPU Usage: " << cpu << "% | Memory Usage: " << mem << "%" << std::endl;

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}
