#include "DrawFourCard.h"
#include "Player.h"

DrawFourCard::DrawFourCard() : WildCard() {
  this->color = Color::meta;
}

// DrawFourCard::DrawFourCard(Color color) : WildCard(color, POINT_SKIPCARD) {
// }

void DrawFourCard::castEffect(Player *&currentPlayer, CardPile &drawPile, CardPile &discardPile) {
  WildCard::castEffect(currentPlayer, drawPile, discardPile);
  bool choice = currentPlayer->appealDrawFour();
  bool result = false;
  if(choice) {
    for(int i=0;i<currentPlayer->getSize();i++)
      // check if current player have availble card
      result |= *(currentPlayer->getCard(i)) ^ *drawPile.getTopCard();
    if(result) // current player draw four cards as penalty
      currentPlayer->drawCard(drawPile, discardPile, 4);
    else { // next player draw four cards and skip his turn
      currentPlayer = currentPlayer->getNextPlayer();
      currentPlayer->drawCard(drawPile, discardPile, 4);
    }
  }
}

void DrawFourCard::serialize(ostream &os) const {
  switch(this->color) {
    case Color::blue : os<<"B"; break;
    case Color::yellow : os<<"Y"; break;
    case Color::red : os<<"R"; break;
    case Color::green : os<<"G"; break;
  }
  os<<"s";
}
