#ifndef ENEMY_1N.H
#define ENEMY_1N.H
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <Windows.h>
#include <conio.h>
#include <chrono>
#include <vector>
#include "My_plane.h"

using namespace std;

class Enemy_1n {
    public:
        Enemy_1n(int y_value, int x_value)
        :y(y_value), x(x_value){};
        int y, x;
        bool dead();
        int get_hp() {return hp;}
        int minus_hp(int damage) {
            hp = hp - damage;
        }
        int get_score() {return score;}
    private:
        int hp = 10;
        int score = 2;
};


#endif