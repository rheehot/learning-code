// rps_game.cpp: rock paper scissors game!
//

#include "stdafx.h"
#include <iostream>
#include<time.h>

using namespace std;

struct selected
{
    int user;
    int bot;
};

enum rps
{
    r = 1,
    p,
    s
};

double random() {
    double percent = rand() % 100 + 1;
    return percent;
}

int core() {
    int select_key;
    selected game = {};
    cout << "Rock Paper Scissor!" << endl;
    cout << "Rock : 1 / Paper : 2 / Scissor : 3" << endl;
    cout << "your turn :";
    cin >> select_key;
    switch (select_key)
    {
    case(1):
        cout << "you selected \"rock\"" << endl;
        game.user = 1;
        cout << "--------\n| |  |  |\n| |  |  |\n| |  |  |\n--------" << endl;
        break;
    case(2):
        cout << "you selected \"paper\"" << endl;
        game.user = 2;
        cout << "--------\n|\t|\n|\t|\n|\t|\n--------" << endl;
        break;
    case(3):
        cout << "you selected \"scissor\"" << endl;
        cout << "\t   /\n\t  /\n    -------------\n\t /\n\t/" << endl;
        game.user = 3;
        break;
    default:
        exit(0);
    }
    int percent = random();
    //cout << percent << endl;
    if (percent < 33) {
        game.bot = 1;
        cout << "bot selected \"rock\"" << endl;
        cout << "--------\n| |  |  |\n| |  |  |\n| |  |  |\n--------" << endl;
    }
    else if (33 <= percent < 66) {
        game.bot = 2;
        cout << "bot selected \"paper\"" << endl;
        cout << "--------\n|\t|\n|\t|\n|\t|\n--------" << endl;
    }
    else if (66 <= percent <= 100) {
        game.bot = 3;
        cout << "bot selected \"scissor\"" << endl;
        cout << "\t   /\n\t  /\n    -------------\n\t /\n\t/" << endl;
    }

    //cout << game.user << endl;
    //cout << game.bot << endl;

    if (game.user == game.bot) {
        cout << "tie!" << endl;
    }
    else if (game.user == 1 && game.bot == 2) {
        cout << "you loose!" << endl;
    }
    else if (game.user == 1 && game.bot == 3) {
        cout << "you won!" << endl;
    }
    else if (game.user == 2 && game.bot == 1) {
        cout << "you won!" << endl;
    }
    else if (game.user == 2 && game.bot == 3) {
        cout << "you loose!" << endl;
    }
    else if (game.user == 3 && game.bot == 1) {
        cout << "you loose!" << endl;
    }
    else if (game.user == 3 && game.bot == 2) {
        cout << "you won!" << endl;
    }
}

int main()
{
    srand((unsigned int)time(0));
    core();
    return 0;
}

