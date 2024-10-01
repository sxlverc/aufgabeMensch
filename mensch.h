//
// Created by adam.braun on 18.09.2024.
//

#ifndef MENSCH_H
#define MENSCH_H
#include "Umlaute.h"

 class mensch
 {
 private:
  int iq = 0;
  int happiness = 0;
  int kcal = 0;

  double gewicht = 0;
  double km = 0;

 public:

  void leckerBierchen()
  {
   happiness = happiness + 1;
  }

  void arbeiten()
  {
   happiness = happiness - 1;
  }

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
  void ausgabe() const
  {
   std::cout << "Der Mensch wiegt " << gewicht << "kg, hat einen IQ von " << iq << "und hat " << happiness << " Gl" << ue << "cklichkeitspunkte" << std::endl;
  }

  [[nodiscard]] int holHappiness() const
  {
   return happiness;
  }

  //Konstruktor
  mensch()
  {
   iq = 100;
   gewicht = 70;
   happiness = 5;
  }

 };

#endif //MENSCH_H
