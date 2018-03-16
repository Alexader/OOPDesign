/*
 * Player.cpp
 *
 *  Created on: Jan 29, 2018
 *      Author: kevinw
 */

#include "Player.h"

ostream &operator<<(ostream &os, const Player &h) {
    os << h.name << ":";
    for (int i = 0; i < h.getSize(); i++) {
        os << *h.getCard(i) << " ";
    }
    return os;
}

Player::Player(string name, Player *previous) : name(name), nextPlayer(previous) {
}

void Player::drawCard(CardPile &drawPile, CardPile &discardPile, int number_of_cards) {
    if(number_of_cards < drawPile.getSize())
        for(int i=0;i<number_of_cards;i++)
            this->operator += (drawPile.removeTopCard());
    else if(number_of_cards < drawPile.getSize() + discardPile.getSize() - 1){
        //put back all the cards in the discardPile (except the top one)
        //to the drawPile and the drawPile will be shuffled
        for(int i=discardPile.getSize() - 1;i > 0;i--)
            drawPile += discardPile.removeCard(i);
        drawPile.shuffle();
        for(int i=0;i<number_of_cards;i++)
            this->operator += (drawPile.removeTopCard());
    }
    else { // draw as many as possible cards
        for(int i=0;i<drawPile.getSize();i++)
            this->operator += (drawPile.removeTopCard());
        for(int i=0;i<discardPile.getSize();i++)
            this->operator += (discardPile.removeTopCard());
    }
}

Card *Player::playCardAfter(const Card *topCard, int index) {
    Card *temp = (Card*)this->getCard(index);
    if(*topCard^*temp) return temp;
    else return nullptr;
}

int Player::getScore() const {
    int total = 0;
    for(int i=0;i<this->getSize();i++)
        total += this->getCard(i)->getPoint();
    return total;
}
