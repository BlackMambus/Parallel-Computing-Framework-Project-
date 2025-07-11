#pragma once
#include "ThreadPool.h"

class Parallel {
public:
    static void parallel_for(int start, int end, std::function<void(int)> func);
};
