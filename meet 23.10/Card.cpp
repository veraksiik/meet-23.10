#include "Card.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <random>

CardGame::Suit CardGame::Card::GetSuit() const
{
    return Suit();
}

CardGame::Ranks CardGame::Card::GetRank() const
{
    return Ranks();
}
class Card {
public:
    std::string suit;   // Масть карты
    std::string rank;   // Ранг карты

    Card(std::string s, std::string r) : suit(s), rank(r) {}

    // Метод для отображения карты
    std::string toString() const {
        return rank + " of " + suit;
    }
};
