#include "naoEnforcou.hpp"

extern std::vector<char> chutesErrados;

//funçao que limita a quantidade de chutes errados
bool naoEnforcou()
{
    return chutesErrados.size() < 5;
}