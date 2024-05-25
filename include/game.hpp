//
// Created by gyan on 5/19/24.
//

#ifndef SPACEWARRIOR_GAME_HPP
#define SPACEWARRIOR_GAME_HPP

#include <raylib.h>
#include <vector>

void MainGameDisplay();
void MainGameProcess();
void GameOverScreen();
void ResetGame();

typedef struct EnemyShip {
    Vector2 pos;
    Vector2 speed;
    float rotation;
    int hitpoints;
    int currenthealth;
    int lastfiretime;
} EnemyShip;

typedef struct PlayerBullet {
    Vector2 pos;
    Vector2 speed;
    float rotation;
} PlayerBullet;

typedef struct EnemyBullet {
    Vector2 pos;
    Vector2 speed;
    float rotation;
} EnemyBullet;

struct GameState {
    Vector2 player_pos;
    Vector2 player_speed;
    float player_health;

    std::vector<PlayerBullet> player_bullets;
    std::vector<EnemyShip> enemy_ships;
    std::vector<EnemyBullet> enemy_bullets;

    int score;
    bool isgameover;
};

extern struct GameState gamestate;

#endif //SPACEWARRIOR_GAME_HPP
