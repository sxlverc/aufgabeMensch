//
// Created by adam.braun on 18.09.2024.
//

#ifndef MENSCH_H
#define MENSCH_H

 class mensch
 {
 private:
  int iq = 0;
  float gewicht = 0;
  float km = 0;

 public:
  int kcal = 0;

  //Normales essen
  void essen()
  {
   gewicht = gewicht + 1;
  }

  //Essen mit kcal
  void essen(int kcal)
  {
   gewicht = gewicht + (kcal * .001);
  }

  //Normales Laufen
  void laufen()
  {
   gewicht = gewicht - .5;
  }

  //Laufen mit KM
  void laufen(float km)
  {
   gewicht = gewicht - (km * .1);
  }

  //Wiegen
  void wiegen()
  {
   std::cout << "Der Mensch wiegt " << gewicht << "kg und hat einen IQ von " << iq << std::endl;
  }

  //Konstruktor
  mensch()
  {
   iq = 100;
   gewicht = 70;
  }

 };

#endif //MENSCH_H
