#include "cpu.h"
#include <fstream>
#include <string>

float getCPUUsage() {
    std::ifstream file("/proc/stat");
    std::string line;
    getline(file, line);

    long user, nice, system, idle;
    sscanf(line.c_str(), "cpu %ld %ld %ld %ld", &user, &nice, &system, &idle);

    static long prevIdle = 0, prevTotal = 0;

    long total = user + nice + system + idle;
    long totalDiff = total - prevTotal;
    long idleDiff = idle - prevIdle;

    prevTotal = total;
    prevIdle = idle;

    if (totalDiff == 0) return 0;

    return (1.0 - (float)idleDiff / totalDiff) * 100;
}
