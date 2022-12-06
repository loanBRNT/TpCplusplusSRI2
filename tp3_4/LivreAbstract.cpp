//
// Created by loant on 04/12/2022.
//

#include "LivreAbstract.h"

LivreAbstract::LivreAbstract(string& titre, string auteur, string *resume, string editeur, string annee):
        DocumentAbstract(titre,auteur,resume), _editeur(editeur), _annee(annee) {}

LivreAbstract::LivreAbstract(LivreAbstract &l): DocumentAbstract(l._titre,l._auteur,l._resume), _editeur(l._editeur), _annee(l._annee) {}

int LivreAbstract::cout() {
    return 10;
}
