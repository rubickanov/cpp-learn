#include <cassert>
#include <Utils/Math.h>
#include "Game/Character.h"

int main()
{
    using namespace MathLib;
    assert(max(3, 0) == 3);
    assert(max(-5, 0) == 0);

    Character hero("pacman");
    assert(!hero.dead());

    hero.takeDamage(10);
    assert(!hero.dead());

    hero.takeDamage(100000);
    assert(hero.dead());

    return 0;
}