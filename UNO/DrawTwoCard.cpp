/*
 * DrawTwoCard.cpp
 *
 *  Created on: Feb 5, 2018
 *      Author: kevinw
 */

#include "DrawTwoCard.h"
#include "Player.h"

DrawTwoCard::DrawTwoCard(Color color) : Card(color, POINT_SKIPCARD) {
}

void DrawTwoCard::castEffect(Player *&currentPlayer, CardPile &drawPile, CardPile &discardPile) {
  currentPlayer->getNextPlayer()->drawCard(drawPile, discardPile, 2);
  SkipCard::castEffect(currentPlayer, drawPile, &discardPile);
}

void DrawTwoCard::serialize(ostream &os) const {
  switch(this->color) {
    case Color::blue : os<<"B"; break;
    case Color::yellow : os<<"Y"; break;
    case Color::red : os<<"R"; break;
    case Color::green : os<<"G"; break;
  }
  os<<"+";
}
