#include "Deck.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include "Card.hpp"


class Deck{
private:
    std::vector<Card> cards; // Вектор, хранящий карты

public:
    // Конструктор для создания колоды
    Deck() {
        // Заполняем колоду картами (например, для покера)
        std::string suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
        std::string ranks[] = { "2", "3", "4", "5", "6", "7", "8", "9",
                                "10", "Jack", "Queen", "King", "Ace" };

        for (const auto& suit : suits) {
            for (const auto& rank : ranks) {
                cards.emplace_back(suit, rank);
            }
        }
    }

    // Деструктор (не обязателен, но рекомендуется)
    ~Deck() {}

    // Возвращает все карты в колоде
    std::vector<Card> getCards() const {
        return cards;
    }

    // Метод для удаления карты из колоды
    bool removeCard(const Card& card) {
        for (auto it = cards.begin(); it != cards.end(); ++it) {
            if (it->suit == card.suit && it->rank == card.rank) {
                cards.erase(it);
                return true; // Карта найдена и удалена
            }
        }
        return false; // Карта не найдена
    }

    // Метод для перемешивания колоды
    void shuffle() {
        std::random_device rd;
        std::mt19937 g(rd()); // Mersenne Twister 19937 генератор случайных чисел
        std::shuffle(cards.begin(), cards.end(), g);
    }
};