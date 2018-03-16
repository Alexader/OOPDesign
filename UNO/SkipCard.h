/*
 * SkipCard.h
 *
 *  Created on: Feb 2, 2018
 *      Author: kevinw
 */

#ifndef SKIPCARD_H_
#define SKIPCARD_H_
#include "Card.h"

class SkipCard : public Card {
public:
  virtual bool operator^(const Card &t) const;
  SkipCard(Color color);
  virtual void castEffect(Player *&currentPlayer, CardPile &drawPile, CardPile &discardPile);

private:
  void serialize(ostream &os) const;
};

#endif /* SKIPCARD_H_ */
