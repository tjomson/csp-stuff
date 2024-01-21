#define _GNU_SOURCE
#include <sched.h>

int main(int argc, char **argv) {
    int core_count = 4;
    for (int i = 0; i < core_count; i++) {

    }

    cpu_set_t  mask;
    CPU_ZERO(&mask);
    CPU_SET(0, &mask);
    CPU_SET(2, &mask);
    int result = sched_setaffinity(0, sizeof(mask), &mask);
}