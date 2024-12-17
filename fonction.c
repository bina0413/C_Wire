#include <stdio.h>
#include <stdlib.h>
//2 choix s'offre a moi: faire 1 fonction differente par station ou faire un type dynamique avec typedef
if(a==b) {
	typedef HVB Arbre ;
}else if (type==a) {
	typedef HVA Arbre;
}
else {
	typedef LV Arbre;
}


// Les structures
typedef struct HVB {
	struct HVB *fd;
	struct HVB *fd;
	int eq;
	int id_stat;
	int id_comp;
	int capacite;
	int consom;

}HVB;

typedef struct HVA{
	struct HVA *fd;
	struct HVA *fd;
	int eq;
	int id_stat;
	int id_comp;
	int capacite;
	int consom;

}HVA;

typedef struct LV{
	struct LV *fd;
	struct LV *fd;
	int eq;
	int id_stat;
	int id_comp;
	int capacite;
	int consom;
}LV;


// Les fonctions


/* 	ouvrir le fichier besoin fopen 
	extraire les données csv
	*/
calcule(){
	int a,b,c,d;
	
	while(1)
    {
            if(fscanf(file, "%d;%d;%d;%d\n", &a,&b,&c,&d)==EOF){break;}
            printf("a=%d b=%d c=%d d=%d !\n", a,b,c,d);  
            arbre(a,b,c,d);
    }

//faire un pointeur vers fonction hva,hvb ou lv
HV_B(int a,b,c,d){
	HVB* new

}
Arbre* creatonArbre(Arbre* ptr_avl, int a,int c,int d ){
	ptr_avl=malloc(sizeof(HVB));
	if(ptr_avl==NULL){
		("Problème d'allocation mémoire");
		exit(6);
	}
	ptr_avl->id_stat=a;
	ptr_avl->capacite=c;
	ptr_avl->consom=d;
	ptr_avl->fd=NULL;
	ptr_avl->fg=NULL;
	ptr_avl>eq=0;
// changer le facteur d'equilibre
	return ptr_avl;

}
insertionArbre(Arbre *ptr_avl, int a,int c,int d )
	if(ptr_avl==NULL){
		creatonArbre(ptr_avl,a,c,d);
	}
	else if(ptr_avl->id_stat==a){
		ptr_avl->capacite+=c;		
		ptr_avl->consom+=d;
	}
	else if(ptr_avl->id_stat >  a){
		insertionArbre(ptr_avl->fg, a,c,d);
	}
	else {
		insertionArbre(ptr_avl->fd, a,c,d);
	}


		//************comment construirel'arbre******************
/* pour chaque station on connait le type, maintenant il y a plusieur identifiant il va falloir faire 
un arbre par type de station et tout les identifiant sont mélangé dans l'arbre 
mais ordoné par numéro d'identifiant dans l'AVL
ex: AVL HVB avec dedans les neuds id=1 id =5 id=6
quand on ajout un nouveau neud:
		-si l'id existe on additionne les conso et capacité du nouveau neud dans celui existant
		-si il n'existe pas (on tombe sur NULL) creer le nouveau neud
	quand on arrive a la fin on a 1 seul neud par station avec la somme des consomation pour chaque
*/


/* déroulé de l'algo:
	1- creer l'arbre
	2- remplire l'arbre
	3- faire un parcour prefix
	4- incrementrer la compteur a chaque fois*/
