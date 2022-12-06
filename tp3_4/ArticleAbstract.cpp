//
// Created by loant on 04/12/2022.
//

#include "ArticleAbstract.h"

ArticleAbstract::ArticleAbstract(string &t, string a, string *r, string tr, string e, string n) :
        DocumentAbstract(t,a,r), _titreRevue(tr) ,_editeur(e), _num(n){}

ArticleAbstract::ArticleAbstract(ArticleAbstract &a):DocumentAbstract(a._titre,a._auteur,a._resume),
                             _titreRevue(a._titreRevue) ,_editeur(a._editeur), _num(a._num) {}

int ArticleAbstract::cout() {
    return 5;
}
