//
// Created by loant on 27/10/2022.
//
#include <iostream>

#include "PtrAgenda.h"
#include "OldAgenda.h"
#include "Entree.h"
/*
 * Pour le TP1 vous pouvez retrouver les classes OldAgenda et PrtAgenda.
 *
 * Pour le TP2, j'ai implémenté les opérateurs dans PtrAgenda.
 * */

int main() {

    PtrAgenda planning(31);
    PtrAgenda planning2(31);

    planning += Entree("GAUDILLAT","17");
    planning += Entree("MISSIER","21");
    PtrAgenda planning3 = planning;

    planning3 += Entree("PETER", "2000");
    planning2 += Entree("GAUDILLAT","71");
    planning2 += Entree("SOUBIRANT","82");

    planning = planning3 + planning2;
    planning+=planning2;

    PtrAgenda planning4(20);
    planning4 += Entree("GAUDILLAT","71");
    planning4 += Entree("SOUBIRANT","82");

    if (planning2==planning4){
        cout << "=" << endl;
    } else {
        cout << "!=" << endl;
    }

    cout << planning << endl;
    planning('G');
    planning-="GAUDILLAT";
    cout << planning << endl;

    return 0;
}
