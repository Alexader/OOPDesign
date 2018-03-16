/*
 * NumberCard.cpp
 *
 *  Created on: Jan 29, 2018
 *      Author: kevinw
 */

#include "NumberCard.h"
#include "Card.h"

NumberCard::NumberCard(int digit, Color color) : Card(color, digit) {
}

void NumberCard::castEffect(Player *&currentPlayer, CardPile &drawPile, CardPile &discardPile) {
  ;
}

void NumberCard::serialize(ostream &os) const {
  switch(this->color) {
    case Color::blue : os<<"B"; break;
    case Color::yellow : os<<"Y"; break;
    case Color::red : os<<"R"; break;
    case Color::green : os<<"G"; break;
  }
  os<<this->getPoint()<<endl;
}
