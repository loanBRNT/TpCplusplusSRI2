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

    /*
    planning.ajouter("BERNAT","0651229452");
    planning.ajouter("AMBLARD","06");
    planning2.ajouter("tata","07");
    planning2.ajouter("toto","08");

    PtrAgenda planning3(planning);


    planning.supprimer("BERNAT");
    cout << planning << endl;
    cout << planning3 << endl;

    */
    planning += Entree("GAUDILLAT","17");
    planning += Entree("MISSIER","21");
    PtrAgenda planning3 = planning;

    planning3 += Entree("PETER", "2000");
    planning2 += Entree("GAUDILLAT","71");
    planning2 += Entree("SOUBIRANT","82");

    planning = planning3 + planning2;
    planning+=planning2;

    planning()"G";

    return 0;
}
