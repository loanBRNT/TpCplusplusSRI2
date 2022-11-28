//
// Created by loant on 23/11/2022.
//

#include "Livre.h"

Livre::Livre(string& titre, string auteur, string *resume, string editeur, string annee):
    Document(titre,auteur,resume), _editeur(editeur), _annee(annee) {}

Livre::Livre(Livre &l): Document(l._titre,l._auteur,l._resume), _editeur(l._editeur), _annee(l._annee) {}

void Livre::affichage() {
    Document::affichage();
    cout << "Edite par " << this->_editeur << " en " << this->_annee << endl;
}

Livre *Livre::cloner() {
    return new Livre(*this);
}

Livre Livre::operator=(Livre &livre) {
    if (this != &livre){
        delete this;
        Document::operator=(livre);
        this->_annee = livre._annee;
        this->_editeur = livre._editeur;
    }
    return *this;
}

int Livre::cout() {
    return 0;
}
