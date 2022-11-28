//
// Created by loant on 23/11/2022.
//

#ifndef UNTITLED_BIBLIO_H
#define UNTITLED_BIBLIO_H

#include "list"
#include "Document.h"

using namespace std;

class Biblio {
private:
    list <Document*> tab;
public:
    Biblio();
    Biblio(Biblio& biblio);
    void ajouter(Document* doc);
    Document* rechercher(string titre);
    void afficher();
};


#endif //UNTITLED_BIBLIO_H
