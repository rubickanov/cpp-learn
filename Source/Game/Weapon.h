#pragma once

#ifdef _EXPORTING
#define GAME_API __declspec(dllexport)
#elif _IMPORTING
#define GAME_API __declspec(dllimport)
#else
#define GAME_API
#endif

class GAME_API Weapon
{

public:
	Weapon(int bullets);
	bool fire();
	int damage() const;

private:
	int m_bullets{23};
};
