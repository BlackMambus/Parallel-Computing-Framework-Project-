#include "Parallel.h"

void Parallel::parallel_for(int start, int end, std::function<void(int)> func) {
    ThreadPool pool(std::thread::hardware_concurrency());
    for (int i = start; i < end; ++i) {
        pool.enqueue([=] { func(i); });
    }
}
