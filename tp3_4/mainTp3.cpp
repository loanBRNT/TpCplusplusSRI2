//
// Created by loant on 23/11/2022.
//

#include "Document.h."
#include "Livre.h"
#include "Article.h"

// Copier coller ce code dans votre main

using namespace std;

int mainTp3(){
        string titre = "Battre un gromp";
        string auteur = "Evelynn";
        string resume = "Garder le smite pour la fin";
        string* ptr_resume = &resume;
        Document eve(titre,auteur,ptr_resume);

        string titre2 = "Choisir pour la nuit ?";
        string auteur2 = "Elisa, Emma, Pauline";
        string resume2 = "Damien soubirant";

        Livre l(titre2,auteur2,&resume2,"PASSAT","2022");

        string titre3 = "L'effet de la pluie sur le beau temps";
        string auteur3 = "SingeDeGulli";
        string resume3 = "La pluie amene les nuages donc il fait plus beau";

        Article a(titre3,auteur3,&resume3,"Scientifique du Dimanche","PASSAT","2008");

        Document d = eve;
        Livre li = l;
        Article article = a;

        d.affichage();
        li.affichage();
        article.affichage();
    return 0;
}