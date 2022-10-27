//
// Created by loant on 27/10/2022.
//

#include "Entree.h"
#include "iostream"

Entree::Entree(string n, string t) {
    this->nom = n;
    this->tel = t;
}

ostream &operator<<(ostream &out, Entree &e) {
    out << e.nom << " | " << e.tel;
    return out;
}

string Entree::getNom() {
    return this->nom;
}

string Entree::getTel() {
    return this->tel;
}
