//
// Created by loant on 27/10/2022.
//

#include "../tp3_4/Document.h"
#include "../tp3_4/Article.h"
#include "../tp3_4/Livre.h"
#include "../tp3_4/Biblio.h"

int main(){
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

    Biblio b;
    b.ajouter(&eve);
    b.ajouter(&l);
    b.ajouter(&a);

    b.afficher();

    cout << *(b.rechercher("Battre un gromp")) << endl;
    return 0;
}
