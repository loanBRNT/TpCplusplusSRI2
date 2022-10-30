//
// Created by loant on 27/10/2022.
//

#include "PtrAgenda.h"

PtrAgenda::PtrAgenda(int tailleTab): tab(new Tableau(tailleTab)) {}

PtrAgenda::PtrAgenda(PtrAgenda &a): tab(new Tableau(*(a.tab))) {}

PtrAgenda& PtrAgenda::concat(PtrAgenda &a) {
    PtrAgenda* out = new PtrAgenda(this->tab->getTailleMax() + a.tab->getTailleMax());
    for (int i = 0 ; i < a.tab->getNbElem() ; i++){
        out->tab->ajouter(a.tab->getElem(i).getNom(),a.tab->getElem(i).getTel());
    }
    for (int i = 0 ; i < this->tab->getNbElem() ; i++){
        out->tab->ajouter(this->tab->getElem(i).getNom(),this->tab->getElem(i).getTel());
    }
    return *out;
}

void PtrAgenda::ajouter(Entree e) {
    this->tab->ajouter(e);
}

void PtrAgenda::ajouter(string nom, string tel) {
    this->tab->ajouter(nom,tel);
}

void PtrAgenda::supprimer(string nom) {
    this->tab->supprimer(nom);
}

void PtrAgenda::supprimer(string nom, string tel) {
    this->tab->supprimer(nom,tel);
}

ostream &operator<<(ostream &out, PtrAgenda &a) {
    out << "========== AGENDA ============" << endl;
    out << *a.tab << endl;
    out << "==============================" << endl;
    return out;
}

PtrAgenda::~PtrAgenda() {
    delete this->tab;
}

PtrAgenda &PtrAgenda::operator=(PtrAgenda &a) {
    if (this != &a){
        delete this->tab;
        this->tab = new Tableau(*a.tab);
    }
    return *this;
}

PtrAgenda &PtrAgenda::operator+(PtrAgenda &a) {
    return this->concat(a);
}

PtrAgenda &PtrAgenda::operator+=(PtrAgenda &a) {
    *this = this->concat(a);
    return *this;
}

PtrAgenda &PtrAgenda::operator+=(Entree entree) {
    this->ajouter(entree);
    return *this;
}

Entree PtrAgenda::operator[](string nom) {
    for (int i = 0 ; i < this->tab->getNbElem() ; i++){
        if (this->tab->getElem(i).getNom()==nom){
            return this->tab->getElem(i);
        }
    }
    cout << nom << " n'a pas de Rendez-vous" << endl;
    return Entree("X","X");
}

PtrAgenda &PtrAgenda::operator-=(string nom) {
    this->tab->supprimer(nom);
    return *this;
}

bool PtrAgenda::operator==(PtrAgenda &a) {
    if (this == &a){
        return true;
    }
    return (*this->tab==*a.tab);
}

bool PtrAgenda::operator/(string nom) {
    bool trouve = false;
    for (int i = 0 ; i < this->tab->getNbElem() ; i++){
        if (this->tab->getElem(i).getNom()==nom){
            trouve=true;
        }
    }
    return trouve;
}

void PtrAgenda::operator()(char c) {
    Entree e;
    for (int i = 0 ; i < this->tab->getNbElem() ; i++){
        if (this->tab->getElem(i).getNom()[0] == c){
            e = this->tab->getElem(i);
            cout << e << endl;
        }
    }
}


