/*
 * NumberCard.cpp
 *
 *  Created on: Jan 29, 2018
 *      Author: kevinw
 */

#include "NumberCard.h"
#include "Card.h"

NumberCard::NumberCard(int digit, Color color) {
  this->color = color;
  this->point = digit;
}

void NumberCard::castEffect(Player *&currentPlayer, CardPile &drawPile, CardPile &discardPile) {

}

const void NumberCard::serialize(ostream &os) {

}
