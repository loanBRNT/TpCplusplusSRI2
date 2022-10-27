//
// Created by loant on 27/10/2022.
//

#ifndef UNTITLED_PTRAGENDA_H
#define UNTITLED_PTRAGENDA_H

#include "Tableau.h"

class PtrAgenda {
private:
    Tableau* tab;
public:
    PtrAgenda(int t=31);
    PtrAgenda(PtrAgenda& a);
    ~PtrAgenda();
    PtrAgenda& concat(PtrAgenda& a);
    void ajouter(string nom, string tel);
    void supprimer(string nom);
    void supprimer(string nom, string tel);
    friend ostream& operator<<(ostream& out, PtrAgenda& a);

    //Fonction TP2

    void ajouter(Entree e);

    PtrAgenda& operator=(PtrAgenda& a);
    PtrAgenda& operator+(PtrAgenda& a);
    PtrAgenda& operator+=(PtrAgenda& a);
    PtrAgenda& operator+=(Entree entree);
    Entree operator[](string nom);
    PtrAgenda& operator-=(string nom);
    bool operator==(PtrAgenda& a);
    bool operator/(string nom);
    void operator()(char c);
};


#endif //UNTITLED_PTRAGENDA_H
