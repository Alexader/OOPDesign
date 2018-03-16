/*
 * DrawFourCard.h
 *
 *  Created on: Feb 6, 2018
 *      Author: kevinw
 */

#ifndef DRAWFOURCARD_H_
#define DRAWFOURCARD_H_

#include "WildCard.h"

class DrawFourCard : public WildCard {
public:
  DrawFourCard();
  // DrawFourCard(Color color);
  bool operator^(const Card &t) const;
  void castEffect(Player *&currentPlayer, CardPile &drawPile, CardPile &discardPile);
private:
  void serialize(ostream &os) const;
};

#endif /* DRAWFOURCARD_H_ */
