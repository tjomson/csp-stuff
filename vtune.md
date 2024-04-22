# vtune

## Defining what to profile

If nothing in the code defines what to profile, then the entire program will be profiled.

To define, use __itt_resume() and __itt_pause():

```cpp
#include <ittnotify.h>

int main(int argc, const char** argv) {
    __itt_pause();
    stuff_not_to_profile();
    __itt_resume();
    stuff_to_profile();
    __itt_pause();
}

```

## Compile program

Important to link libraries

`g++ program.cpp -g -littnotify -pthread -dl`

## Profiling

`hotspots` is not the only type. All types listed: https://www.intel.com/content/www/us/en/docs/vtune-profiler/user-guide/2023-0/collect.html#GUID-09766DB6-3FA8-445B-8E70-5BC9A1BE7C55

`vtune -collect hotspots -result-dir <dir> ./a.out <program args>`

## Showing results

`vtune -report summary -r <dir>`
