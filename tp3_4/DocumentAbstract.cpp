//
// Created by loant on 04/12/2022.
//

#include "DocumentAbstract.h"

DocumentAbstract::DocumentAbstract(string& titre, string auteur, string *resume): _titre(titre), _auteur(auteur), _resume(new string(*resume)) {}

DocumentAbstract::DocumentAbstract(DocumentAbstract &d): _titre(d._titre), _auteur(d._auteur), _resume(new string(*d._resume)) {}

DocumentAbstract::~DocumentAbstract() {
    delete _resume;
}
