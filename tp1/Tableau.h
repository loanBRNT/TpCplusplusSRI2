//
// Created by loant on 27/10/2022.
//

#ifndef UNTITLED_TABLEAU_H
#define UNTITLED_TABLEAU_H

#include "Entree.h"
#include "iostream"

class Tableau {
private:
    int tailleMax;
    int nbElem;
    Entree* tableau;
public:
    explicit Tableau(int t=31);
    explicit Tableau(Tableau const &c);
    ~Tableau();
    friend ostream& operator<<(ostream& out, Tableau& tab);
    void ajouter(string nom, string tel);
    void ajouter(Entree e);
    void decalerTableau(int rang);
    void supprimer(string nom);
    void supprimer(string nom, string tel);
    int getTailleMax();
    int getNbElem();
    Entree getElem(int rang);
};


#endif //UNTITLED_TABLEAU_H
