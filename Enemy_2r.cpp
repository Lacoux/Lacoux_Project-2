#include "Enemy_2r.h"

void Enemy_2r::move() {
    int i = rand()/4;
    if(i == 0) {
        y = y+1;
    }
    else if(i == 1) {
        y = y-1;
    }
    else if(i == 2) {
        x = x + 1;
    }
    else if(i == 3) {
        x = x - 1;
    }
}

bool Enemy_2r::dead() {
    if(Enemy_2r::get_hp() == 0) {
        return true;
    }
    else {
        return false;
    }
}

