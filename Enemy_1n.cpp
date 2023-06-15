#include "Enemy_1n.h"

bool Enemy_1n::dead() {
    if(get_hp() == 0) {
        return true;
    }
    else {
        return false;
    }
}

