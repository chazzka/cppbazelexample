#include "lib/counter/counter.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
    Counter s = Counter(4);

    std::cout << s.getCount() << std::endl;
    return 0;
}