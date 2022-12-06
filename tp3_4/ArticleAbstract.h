//
// Created by loant on 04/12/2022.
//

#ifndef UNTITLED_ARTICLEABSTRACT_H
#define UNTITLED_ARTICLEABSTRACT_H
#include "DocumentAbstract.h"

class ArticleAbstract : public DocumentAbstract{
private:
    string _titreRevue;
    string _editeur;
    string _num;
public:
    ArticleAbstract(string& t, string a, string* r, string tr, string e, string n);
    ArticleAbstract(ArticleAbstract& a);
    virtual int cout();
};


#endif //UNTITLED_ARTICLEABSTRACT_H
