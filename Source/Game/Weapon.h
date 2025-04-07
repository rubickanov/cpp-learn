#pragma once

#if defined(WIN32) || defined(_WINDOWS)
#ifdef _EXPORTING
#define GAME_API __declspec(dllexport)
#elif _IMPORTING
#define GAME_API __declspec(dllimport)
#else
#define GAME_API
#endif
#else
#define GAME_API __attribute__((visibility("default")))
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
