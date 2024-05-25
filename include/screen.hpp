//
// Created by gyan on 5/18/24.
//
#ifndef SPACEWARRIOR_SCREEN_HPP
#define SPACEWARRIOR_SCREEN_HPP

#include <functional>

extern std::function<void()> currentScreenDrawFunction;

void displayScreen(std::function<void()> drawFunction);

#endif //SPACEWARRIOR_SCREEN_HPP
