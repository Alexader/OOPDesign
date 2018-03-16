/*
 * NumberCard.h
 *
 *  Created on: Jan 29, 2018
 *      Author: kevinw
 */

#ifndef NUMBERCARD_H_
#define NUMBERCARD_H_
#include "Card.h"

class NumberCard: public Card {

public:
  bool operator^(const Card &t) const;
  NumberCard(int digit, Color color);
  virtual void castEffect(Player *&currentPlayer, CardPile &drawPile, CardPile &discardPile) = 0;
  const void serialize(ostream &os);
}

#endif /* NUMBERCARD_H_ */
