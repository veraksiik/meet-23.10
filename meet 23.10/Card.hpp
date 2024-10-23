#pragma once
#ifndef CARD_HPP
#define CARD_HPP

namespace CardGame {
	enum Suit {
		clubs,
		diamonds,
		hards,
		spikers

	};

	enum Ranks {
		two=2,
		three,
		four,
		five,
		six,
		seven,
		eigth,
		nine,
		ten,
		jack,
		queen,
		king,
		ace

	};


	class Card {
	
	public:
		Card() = default;
		Card(Ranks rank, Suit suit)
			:rank_(rank),
			suit_(suit)
		{}
		//�������!!!!!!!!!

		Suit GetSuit()const;
		Ranks GetRank()const;

		//������� ���� �� ������

	private:
		Ranks rank_;
		Suit suit_;
	};

	
}




#endif // !CARD_HPP



