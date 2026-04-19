#include "memory.h"
#include <fstream>
#include <string>

float getMemoryUsage() {
    std::ifstream file("/proc/meminfo");
    std::string key;
    long total = 0, free = 0, value;

    while (file >> key >> value) {
        if (key == "MemTotal:") total = value;
        if (key == "MemAvailable:") {
            free = value;
            break;
        }
    }

    if (total == 0) return 0;
    return ((total - free) / (float)total) * 100;
}
