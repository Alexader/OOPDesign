/*
 * WildCard.cpp
 *
 *  Created on: Feb 6, 2018
 *      Author: kevinw
 */

#include "WildCard.h"
#include "Player.h"

WildCard::WildCard() : Card(Color::meta, POINT_WILDCARD) {
}

// WildCard::WildCard(Color color, int point) : Card(color, point) {
// }

void WildCard::castEffect(Player *&currentPlayer, CardPile &drawPile, CardPile &discardPile) {
  // how to tell before and after played
  this->color = currentPlayer->chooseColor();
  // WildCard(chose_color, POINT_WILDCARD);
}

bool WildCard::operator^(const Card &t) const {
  return true; // any time it is valid
}

void WildCard::serialize(ostream &os) const {
  switch(this->color) {
    case Color::blue : os<<"B"; break;
    case Color::yellow : os<<"Y"; break;
    case Color::red : os<<"R"; break;
    case Color::green : os<<"G"; break;
  }
  os<<"s";
}
