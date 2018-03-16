/*
 * WildCard.h
 *
 *  Created on: Feb 6, 2018
 *      Author: kevinw
 */

#ifndef WILDCARD_H_
#define WILDCARD_H_

class WildCard : public Card {
public:
  WildCard();
  WildCard(Color color, int point);
  bool operator^(const Card &t) const;
  void castEffect(Player *&currentPlayer, CardPile &drawPile, CardPile &discardPile);
private:
  void serialize(ostream &os) const;
  
};

#endif /* WILDCARD_H_ */
