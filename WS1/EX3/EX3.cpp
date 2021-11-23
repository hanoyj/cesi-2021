// EX3.cpp 

// Première relation : 
// ma1 utilise un objet qui fait partie intégrante de la classe CLa. 
// Si l’objet de type CLa est détruit, l’objet de type CLb sera détruit aussi.


// Deuxième relation :
// ma2 utilise un pointeur qu’elle alloue. Le type CLa peut détruire l’objet de type CLb si besoin.
// L’objet de type CLb ne fait pas partie du type CLa, juste son pointeur.
// Si l’objet de type CLa est détruit sans que l’objet de type CLb soit détruit par le type CLa, la référence sera perdue; il y aura une fuite de mémoire.


// Troisième relation : 
// m3 utilise une copie locale d’un objet de type CLb. Les deux objets sont indépendants.
// m3 ne peut pas modifier l’objet de type CLb créé par le main.


// Quatrième relation : 
// m4 utilise la référence d'un objet de type CLb (adresse mémoire) pour le manipuler.
// m4 à la possibilité de modifier directement l’objet d’origine. L’objet de type CLb n’est pas une copie locale utilisée par m4.


// Cinquième relation : 
// m5 utilise un pointeur de type CLb. Elle ne manipule pas directement l’objet de type CLb  mais son pointeur.


