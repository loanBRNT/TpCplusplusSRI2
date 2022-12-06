//
// Created by loant on 23/11/2022.
//

#ifndef UNTITLED_LIVRE_H
#define UNTITLED_LIVRE_H

#include "Document.h"

class Livre : public Document{
private:
    string _editeur;
    string _annee;
public:
    Livre(string& t, string a, string* r, string e, string an);
    Livre(Livre& l);
    void affichage();
    Livre* cloner();
    Livre operator=(Livre& livre);
};


#endif //UNTITLED_LIVRE_H
