//
// Created by loant on 27/10/2022.
//

#include "Entree.h"
#include "iostream"

Entree::Entree(string n, string t):nom(n),tel(t) {}

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

bool Entree::operator==(Entree e) {
    return (this->nom == e.nom and this->tel == e.tel);
}
