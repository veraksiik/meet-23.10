#include "Hand.hpp"
#include <iostream>
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include "Card.hpp"


namespace CardGame {

    class Hand {
    private:
        std::vector<Card> hand;

    public:
        Hand() {}

        ~Hand() {}

        void addCard(const Card& card) {
            hand.push_back(card);
        }

        bool removeCard(const Card& card) {
            for (auto it = hand.begin(); it != hand.end(); ++it) {
                if (it->suit == card.suit && it->rank == card.rank) {
                    hand.erase(it);
                    return true; 
                }
            }
            return false; 
        }

        void showHand() const {
            std::cout << "Hand contains:\n";
            for (const auto& card : hand) {
                std::cout << card.toString() << std::endl;
            }
        }
    };
}