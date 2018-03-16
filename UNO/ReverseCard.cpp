/*
 * ReverseCard.cpp
 *
 *  Created on: Feb 2, 2018
 *      Author: kevinw
 */

#include "ReverseCard.h"
#include "Player.h"


ReverseCard::ReverseCard(Color color) : Card(color, POINT_SKIPCARD) {
}

void ReverseCard::castEffect(Player *&currentPlayer, CardPile &drawPile, CardPile &discardPile) {
  
}

void ReverseCard::serialize(ostream &os) const {
  switch(this->color) {
    case Color::blue : os<<"B"; break;
    case Color::yellow : os<<"Y"; break;
    case Color::red : os<<"R"; break;
    case Color::green : os<<"G"; break;
  }
  os<<"r";
}
