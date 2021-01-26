

#ifndef _DECK_H
#define _DECK_H

#include "card.h"

class Deck
{
	static const int SIZE = 52;

public:

	Deck();            // shuffled deck: cards are put in random order

	Card dealCard();   // gets a card and after 52 are dealt, program is done

	int size() const;  // the number of cards left in the deck

private:

	Card cards[SIZE];  // array
	int index;         // card to deal
};

#endif
