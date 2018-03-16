/*
 * ReverseCard.h
 *
 *  Created on: Feb 2, 2018
 *      Author: kevinw
 */

#ifndef REVERSECARD_H_
#define REVERSECARD_H_
#include "Card.h"

class ReverseCard : public Card {
public:
  ReverseCard(Color color);
  bool operator^(const Card &t) const;
  void castEffect(Player *&currentPlayer, CardPile &drawPile, CardPile &discardPile);

private:
  void serialize(ostream &os) const;
};

#endif /* REVERSECARD_H_ */
