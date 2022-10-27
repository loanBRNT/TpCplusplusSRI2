//
// Created by loant on 27/10/2022.
//

#include "OldAgenda.h"

OldAgenda::OldAgenda(int tailleTab): tab(tailleTab) {}

OldAgenda::OldAgenda(OldAgenda &a): tab(a.tab) {}

OldAgenda& OldAgenda::concat(OldAgenda &a) {
    OldAgenda* out = new OldAgenda(this->tab.getTailleMax() + a.tab.getTailleMax());
    for (int i = 0 ; i < a.tab.getNbElem() ; i++){
        out->tab.ajouter(a.tab.getElem(i).getNom(),a.tab.getElem(i).getTel());
    }
    for (int i = 0 ; i < this->tab.getNbElem() ; i++){
        out->tab.ajouter(this->tab.getElem(i).getNom(),this->tab.getElem(i).getTel());
    }
    return *out;
}

void OldAgenda::ajouter(string nom, string tel) {
    this->tab.ajouter(nom,tel);
}

void OldAgenda::supprimer(string nom) {
    this->tab.supprimer(nom);
}

void OldAgenda::supprimer(string nom, string tel) {
    this->tab.supprimer(nom,tel);
}

ostream &operator<<(ostream &out, OldAgenda &a) {
    out << "========== AGENDA ============" << endl;
    out << a.tab << endl;
    out << "==============================" << endl;
    return out;
}
