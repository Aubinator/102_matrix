

102_matrix
==========

be 2d vector's operations in C




Objectif
On effectue les opérations de calcul standard sur des matrices en di-mension 2. Les opérations prises en compte sont : addition (option 1), mul-tiplication par un nombre (option 2), produit par un vecteur (option 3),
produit matriciel (option 4). Les nombres (nombre, vecteur, matrice) sont
des nombres entiers positifs. Les opérations sont effectuées dans une base
donnée (comprise entre 2 et 16). Naturellement, les nombres en entrée vous
sont donnés dans la base considérée. Vous trouverez en annexe de ce sujet
un rappel sur les bases.
Afin de faciliter l’affichage, on notera les vecteurs et les matrices en ligne.
Un vecteur b sera noté par ses composantes :b1 b2
Une matrice A sera notée en ligne par ses coefficients dans l’ordre suivant :a11 a12 a21 a22


Le logiciel
Répertoire de rendu :
˜
/rendu/math/102matrix
Le répertoire
˜
/ en 711. Ce répertoire surtout pas en 710.
Le répertoire rendu en 710.
Les répertoires en 750, les fichiers en 640.
Nom de l’exécutable : 102matrix
Exemple de lancer pour l’option 1 :
>102matrix 1 16 0 2 10 C 4 D 0 7
En entrée : le numéro d’option, le numéro de base, les quatre coefficients de
la matrice A (dans l’ordre a11, a12, a21, a22) et les quatre coefficients de la matrice B.
En sortie : Les quatre coefficients de la matrice A+B (voir exemple).
Exemple de lancer pour l’option 2 :
>102matrix 2 13 5 7 15 0 15
En entrée : le numéro d’option, le numéro de base, un nombre p, les quatre
coefficients de la matrice A.
En sortie : Les quatre coefficients de la matrice p.A (voir exemple).
Exemple de lancer pour l’option 3 :
>102matrix 3 12 0 7 10 17 0 10
En entrée : le numéro d’option, le numéro de base, les quatre coefficients de
la matrice A et les deux composantes du vecteur u.
En sortie : Les deux composantes du vecteur A.u (voir exemple).
>102matrix 4 6 3 12 25 21 3 31 20 10
En entrée : le numéro d’option, le numéro de base, les quatre composantes
de la matrice A et les quatre composantes de la matrice B.
En sortie : Les quatre coefficients de la matrice A.B et les quatre coefficients
de la matrice B.A. (voir exemple).
4 Exemple
>102matrix 1 16 0 2 10 C 4 D 0 7
Matrice A : 0 2 10 C
Matrice B : 4 D 0 7
Matrice A+B : 4 F 10 13
>102matrix 2 13 5 7 15 0 15
Nombre p : 5
Matrice A : 7 15 0 15
Matrice p.A : 29 6C 0 6C
>102matrix 3 12 0 7 10 17 0 10
Matrice A : 0 7 10 17
Vecteur u : 0 10
Vecteur A.u : 70 170
>102matrix 4 6 3 12 25 21 3 31 20 10
Matrice A : 3 12 25 21
Matrice B : 3 31 20 10
Matrice A.B : 253 253 543 1505
Matrice B.A : 1312 1131 350 450
2
5 Le code
Votre code sera examiné. Les codes bien structurés, commentés et lisibles
seront appréciés.
