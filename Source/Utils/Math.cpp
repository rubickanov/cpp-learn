#include "Math.h"
#include <random>

int MathLib::sum(int n)
{
    return n <= 0 ? 0 : n * sum(n - 1);
}

int MathLib::max(int x, int y)
{
    return x > y ? x : y;
}

int MathLib::factorial(int n)
{
    return n <= 1 ? 1 : n * factorial(n - 1);
}

int MathLib::randomInt(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<int> dist(min, max);

    return dist(gen);
}
