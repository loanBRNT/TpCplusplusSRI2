//
// Created by loant on 27/10/2022.
//

#ifndef UNTITLED_AGENDA_H
#define UNTITLED_AGENDA_H

#include "Tableau.h"

class OldAgenda {
private:
    Tableau tab;
public:
    OldAgenda(int t=31);
    OldAgenda(OldAgenda& a);
    OldAgenda& concat(OldAgenda& a);
    void ajouter(string nom, string tel);
    void supprimer(string nom);
    void supprimer(string nom, string tel);
    friend ostream& operator<<(ostream& out, OldAgenda& a);
};


#endif //UNTITLED_PTRAGENDA_H
