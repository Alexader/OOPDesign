/*
 * SkipCard.cpp
 *
 *  Created on: Feb 2, 2018
 *      Author: kevinw
 */

#include "SkipCard.h"
#include "Player.h"

SkipCard::SkipCard(Color color) : Card(color, POINT_SKIPCARD) {
}

void SkipCard::castEffect(Player *&currentPlayer, CardPile &drawPile, CardPile &discardPile) {
  currentPlayer = currentPlayer->getNextPlayer();
}

void SkipCard::serialize(ostream &os) const {
  switch(this->color) {
    case Color::blue : os<<"B"; break;
    case Color::yellow : os<<"Y"; break;
    case Color::red : os<<"R"; break;
    case Color::green : os<<"G"; break;
  }
  os<<"s";
}
