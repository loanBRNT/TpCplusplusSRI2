//
// Created by loant on 27/10/2022.
//

#include "Tableau.h"

Tableau::Tableau(int t):tailleMax(t),nbElem(0) {
    this->tableau = new Entree[t];
}

Tableau::Tableau(Tableau const &c): tailleMax(c.tailleMax), nbElem(c.nbElem), tableau(new Entree[tailleMax]) {
    for (int i = 0 ; i < this->nbElem ; i++){
        this->tableau[i] = c.tableau[i];
    }
}

Tableau::~Tableau() {
    delete[]this->tableau;
}

ostream &operator<<(ostream &out, Tableau &tab) {
    for (int i=0 ; i < tab.nbElem ; i++){
        out << i << ": " << tab.tableau[i] << endl;
    }
    return out;
}

void Tableau::ajouter(Entree e) {
    if (this->nbElem < this->tailleMax){
        this->tableau[this->nbElem] = e;
        this->nbElem++;
    }
}

void Tableau::ajouter(string nom, string tel) {
    ajouter(Entree(nom,tel));
}

void Tableau::decalerTableau(int rang) {
    while (rang+1 < nbElem){
        this->tableau[rang] = this->tableau[rang+1];
        rang++;
    }
    nbElem--;
}

void Tableau::supprimer(string nom) {
    for (int i = 0 ; i < this->nbElem ; i++){
        if (this->tableau[i].getNom() == nom){
            decalerTableau(i);
        }
    }
}

void Tableau::supprimer(string nom, string tel) {
    for (int i = 0 ; i < this->nbElem ; i++){
        if ((this->tableau[i].getNom() == nom) && (this->tableau[i].getTel() == tel)){
            decalerTableau(i);
        }
    }
}

int Tableau::getTailleMax() {
    return this->tailleMax;
}

int Tableau::getNbElem() {
    return this->nbElem;
}

Entree Tableau::getElem(int rang) {
    return this->tableau[rang];
}

bool Tableau::operator==(Tableau& a) {
    if (this == &a){
        return true;
    }
    if (this->nbElem != a.nbElem){
        return false;
    }
    bool pareil = true;

    for (int i =0 ; i < this->nbElem ; i++){
        if (not (this->tableau[i]==a.tableau[i])){
            pareil = false;
        }
    }
    return pareil;
}




