//
// Created by gyan on 5/18/24.
//

#include <resources.hpp>
#include <raylib.h>
#include <iostream>
#include <raygui.h>

void loadResources(bool* isDataLoaded) {
    std::cout << "Loading Resources..." << std::endl;

    InitAudioDevice();

    //Load Resources
    GuiLoadStyle("assets/style_cyber.rgs");

    resources.ship = LoadTexture("assets/ship.png");
    resources.spacebg = LoadTexture("assets/blue_nebula_bg.png");
    resources.player_bullet = LoadTexture("assets/player_bullet.png");
    resources.enemy_ship = LoadTexture("assets/enemy_ship.png");
    resources.enemy_bullets = LoadTexture("assets/enemy_bullet.png");

    resources.button_click = LoadSound("assets/button_click.mp3");
    resources.gunfire = LoadSound("assets/gunfire.wav");
    resources.gameover = LoadSound("assets/game_over.wav");
    resources.game_music = LoadSound("assets/game_music.mp3");

    *isDataLoaded = true;
}

