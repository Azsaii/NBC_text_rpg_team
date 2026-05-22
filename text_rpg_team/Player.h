#pragma once

#include <string>
#include "Character.h"

class Player : public Character
{
public:
    Player(const std::string& name, int level, int exp, int maxExp);

    void Attack(Character* target) override;
 
private:
    int level;
    int exp;
    int maxExp;
};