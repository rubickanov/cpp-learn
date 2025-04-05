#include <iostream>
#include "Character.h"
#include "Weapon.h"
#include "Utils/Math.h"

Character::Character(const char *name) : m_name(name)
{
	const int bulletCount = MathLib::randomInt(1, 10);
	m_weapon = new Weapon(bulletCount);
}

Character::~Character()
{
	delete m_weapon;
	m_weapon = nullptr;
}

const char *Character::name() const
{
	return m_name;
}

int Character::health() const
{
	return m_health;
}

bool Character::dead() const
{
	return m_health == 0;
}

bool Character::attack(Character &target)
{
	const bool fired = m_weapon->fire();

	if (fired)
	{
		const int damage = m_weapon->damage();
		std::cout << m_name << " is attacking with damage " << damage << std::endl;
		target.takeDamage(damage);
	}
	else
	{

		std::cout << m_name << " is run out of ammo!" << std::endl;
	}

	return fired;
}

void Character::takeDamage(int damage)
{
	m_health -= damage;
	if (m_health < 0)
		m_health = 0;

	std::cout << m_name << " was attacked, health is " << m_health << std::endl;
}
