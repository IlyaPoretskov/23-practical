#include <iostream>

using namespace std;

#define WINTER 0
#define SPRING 1
#define SUMMER 0
#define AUTUMN 0

#if WINTER
    int main() { cout << "Winter\n"; }
#endif
#if SPRING
    int main() { cout << "Spring\n"; }
#endif
#if SUMMER
    int main() { cout << "Summer\n"; }
#endif
#if AUTUMN
    int main() { cout << "Autumn\n"; }
#endif