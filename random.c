#include <stdlib.h>

char randchar() {
    // There are 256 ASCII characters, 0 - 255
    // Linux server doesn't properly display 128-255
    return (rand() % (126 - 33) + 33) ;
}
