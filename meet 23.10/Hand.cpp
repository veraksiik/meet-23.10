#include "Hand.hpp"
#include <iostream>

namespace CardGame {

    CardGame::Card Hand::Show(int num) const {
        if (num < 0 || num >= cards_.size()) {
            throw std::out_of_range("Индекс карты вне диапазона");
        }
        return cards_[num];
    }

    CardGame::Card Hand::GetCard(int num) {
        if (num < 0 || num >= cards_.size()) {
            throw std::out_of_range("Индекс карты вне диапазона");
        }
        CardGame::Card card = cards_[num];
        cards_.erase(cards_.begin() + num);
        return card;
    }

    void Hand::PlaceCard(const CardGame::Card& new_card) {
        cards_.push_back(new_card);
    }
}