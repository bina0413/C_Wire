#!/bin/bash

cut -d’;´ f2,3,4,5,6,7,8 data.scv > test.csv
# on vient d’enlever la colonne centrale car inutile


 HVB()



# prototype de la fonction recurcive
recurtion() {

# copier les lignes ligne des entreprise consommatrices 
awk -F";" '{if ($1=$num_hvb && $6!=‘-‘ && $2=‘-‘) print $0}' test_hvb.csv >> test_hvb1.csv
# copier les ligne des sous stations






return ident_conso
}




         HVB() {

num_hvb=$3
profondeur=1
ident_conso=$num_hvb
# recopier la ligne correspondante à la centrale voulue
awk -F";" '{if ($1=$num_hvb && $6=‘-‘ && $2=‘-‘) print $0}' test_hvb.csv >> test_hvb1.csv


recurtion profondeur



 return 0
}
