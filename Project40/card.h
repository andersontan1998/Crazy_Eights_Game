
#ifndef _CARD_H
#define _CARD_H


#include <iostream>
#include <string>
using namespace std;

class Card
{
public:

	enum Suit { Spades, Hearts, Diamonds, Clubs };

	Card();                     // Ace of spades as default

	Card(int, Suit);

	string toString();  // return string 
	int   getRank() const;  // return rank
	string returnRankString();
	Suit  getSuit() const;  // return suit
	string returnSuitString();
	void setSuit();

	bool operator == (const Card &rhs);

private:

	int rank;
	Suit suit;

	string suitString();  
	string rankString(); 

};

#endif
