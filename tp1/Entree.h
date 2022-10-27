//
// Created by loant on 27/10/2022.
//

#ifndef UNTITLED_ENTREE_H
#define UNTITLED_ENTREE_H

#include "stdio.h"
#include "string"

using namespace std;

class Entree {
private:
    string nom;
    string tel;
public:
    Entree(string n="PAPA NOEL", string t="3630");
    friend ostream& operator<<(ostream& out, Entree& e);
    string getNom();
    string getTel();
};


#endif //UNTITLED_ENTREE_H
