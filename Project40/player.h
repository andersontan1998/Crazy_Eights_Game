
#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>
#include <string>
#include <vector>

#include "card.h"
using namespace std;


class Player
{
public:
	Player();

	Player(string n) {
		name = n;
	}

	string getName() const {
		return name;
	}

	string showHand(); //returns a string with all the cards in their hand

	int getHandSize() const;

	void addCard(Card c);    //adds a card to the hand

    //Remove the card c from the hand and return true if successful
	bool removeCardFromHand(Card c);

	//Checks if player has a card with the given rank in their hand

	bool hasCardWithRank(int r, Card &c1);

	//Checks if player has a card with the given suite in their hand
	 
	bool hasCardWithSuit(Card::Suit s, Card &c1);

	//returns the index of the last card to use to check if player goes past
	int returnLastCard();

	//used to remove a specific card at a certain index in the hand
	void removeSpecificCard(int l);

	//used to return a specific card at a certain index
	Card returnSpecificCard(int c);

	string mostOccur();

private:

	vector <Card> hand;  //vector

	string name;

	

};

#endif


