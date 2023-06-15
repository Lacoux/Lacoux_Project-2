#ifndef ENEMY_2R.H
#define ENEMY_2R.H
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
#include "Screen_manager.h"
using namespace std;

class Enemy_2r {
    public:
        Enemy_2r(int y_value, int x_value)
        :y(y_value), x(x_value){};
        int y, x;
        bool dead();
        int get_hp() {return hp;}
        int minus_hp(int damage) {
            hp = hp - damage;
        }
        int get_score() {return score;}
        void move();

    private:
        int hp = 5;
        int score = 2;
};

#endif