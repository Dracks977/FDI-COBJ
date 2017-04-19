# FDI-COBJ-
C++ piscine project


Nom de l'exécutable : not_mg2
Vous devrez faire un fichier .cpp et un fichier .hh par classe demandée.
Le projet doit être compilable via un Makefile.
La soutenance se fera sous Debian.
 Cardboard Pulley 2
Ici Crooked Mouth...

Opération intrusion F014.

Infiltre la forteresse ennemie, VAR-421, et détruis le nouveau prototype de Cardboard Pulley W, avant la fin de son développement.

Tout d'abord, prend contact avec Mistletoe Black, une agent infiltrée à VAR-421. Sa fréquence est 104.51

Appele-moi sur la fréquence 104.58 à partir de maintenant.

Chicken, je sais que tu reviens tout juste de ton infiltration à Inner Hell, mais je vais quand même te raffraichir la mémoire.

Pour te déplacer de gauche à droite, tu dois utiliser les touches A et D de ton clavier. Afin de monter vers le haut de l'écran, appuie sur W et enfin S pour aller vers le bas.

...

Arrête avec cette histoire d'écran, tu sais très bien ce à quoi je fais allusion !

Bref... Afin de récupérer un objet, place-toi sur la même case que celui-ci et appuie sur la touche espace.

Pour utiliser un équipement de ton inventaire, sélectionne-le et appuie sur la touche E.

...

Comment ça "Comment j'utilise mes armes ?" ?!

Tu es grand, Chicken... Débrouille-toi !

Et n'oublie pas : allonge-toi avec la touche C pour passer sous les obstacles et à nouveau sur cette touche afin de te relever.

Bonne chance !

...Terminé

 Attention !
Toute ressemblance avec un nom de produit, d'organisation ou de personne existant serait purement fortuite.
Votre projet devra contenir un certain nombre de notions et classes.
Vous êtes libres d'ajouter les attributs et méthodes aux classes en plus de ceux/celles demandés dans le sujet.
Vous devez implémenter les classes et notions suivantes dans votre programme.
 Interdits !
Toute utilisation du Nimoka code équivaut à un -42.
 Objectif A : Game
Il ne doit y avoir qu'une seule instance de votre jeu (#singleton).

Une classe Game dans laquelle tout se passera (boucle de jeu, etc).

 Objectif B : Character
Une classe abstraite Character. Cette classe abstraite devra posséder au minimum la méthode move. Elle devra également posséder l'attribut _distMove qui représentera la distance maximale que peut parcourir un objet héritant de Character.

Une classe abstraite Enemy qui hérite de Character. Cette classe abstraite devra posséder et implémenter au minimum la méthode lookAt.

Une classe abstraite Ally qui hérite de Character. Cette classe abstraite devra posséder et implémenter au minimum les méthodes lieDown et standUp.

Une classe Guard qui hérite de Enemy. Un garde ne peut agir qu'une fois sur deux.

Une classe Camera qui hérite de Enemy. Une caméra ne peut agir qu'une fois sur trois et ne peut pas se déplacer.

Une classe Player qui hérite de Ally.

Une classe Prisoner qui hérite de Ally. Un prisonnier devra posséder et implémenter au minimum les méthodes stay et follow.

Une classe suivant le design pattern Factory pour générer les différents objets dont la classe hérite de Character (Guard, Player, etc).

 Objectif C : Bloc
Une classe abstraite Bloc. Cette classe abstraite devra posséder au minimum les attributs _char qui représentera son apparence sur le terminal, _xPos qui représentera sa position horizontale sur la map et _yPos sa position verticale.

Une classe abstraite Steppable qui hérite de Bloc. Les objets dont la classe hérite de Steppable seront traversables par les objets dont la classe hérite de Character.

Une classe abstraite NotSteppable qui hérite de Bloc. Les objets dont la classe hérite de NotSteppable ne seront pas traversables par les objets dont la classe hérite de Character.

Une classe Ground qui hérite de Steppable.

Une classe Wall qui hérite de NotSteppable.

Une classe Door qui hérite de Steppable et de NotSteppable. Lorsque la porte est fermée, elle n'est pas traversable, lorsquelle est ouverte, elle l'est.

Une classe Obstacle qui hérite de Steppable et de NotSteppable. Lorsqu'un objet dont la classe hérite de Ally est debout, il ne peut pas traverser un obstacle. S'il est couché, il le peut.

Une classe suivant le design pattern Factory pour générer les différents objets dont la classe hérite de Bloc (Ground, Wall, etc).

 Objectif D : Inventory
Une classe Inventory. Cette classe devra posséder au minimum les attributs _weapons et _equipment qui seront tous les deux des conteneurs. Vous êtes libres de choisir le conteneur qui correspond le mieux à vos attentes.

Une classe abstraite Item. Cette classe abstraite devra posséder au minimum l'attribut _name.

Une classe Weapon qui hérite de Item. Cette classe devra posséder au minimum les attributs _ammo et _maxAmmo.

Une classe template Equipment qui hérite de Item. Cette classe devra posséder au minimum l'attribut _usableOn. Cet attribut devra être de type pointeur sur un type template afin d'apporter des modifications à l'objet ciblé. La classe pointée par cet attribut sera la cible d'utilisation de l'objet, par exemple une clef se référera à une Door, une ration se référera à un Ally, etc.

Une classe suivant le design pattern Factory pour générer les différents objets dont la classe hérite de Item (Weapon, Equipment, etc).

 Objectif E : Map
Il doit être possible de lire un fichier afin de récupérer une map pour générer un niveau.

Il doit être possible de sauvegarder l'état de la map sur laquelle se trouve le joueur.

Vous devez au moins définir une interface pour la gestion des fichiers.

 Informations
Bien entendu, la forme de Coplien, les const, les références et toutes les autres notions et bonnes pratiques que vous avez pu voir durant votre piscine sont attendues.
Si vous passez un pointeur en paramètre à la place d'une référence sur une constante, sachez le justifier. Si ce n'est pas justifiable, passez par la référence sur constante, sous peine de malus sur votre note finale.
Concernant les interfaces demandées, vous pouvez les faire devenir classes abstraites si besoin et seulement si c'est justifié.
La précédente mission de Chicken ("cardboard_pulley.html") vous est mise à disposition à titre indicatif, ainsi que des fichiers de map à titre d'exemples.
 Objectif facultatif : WWSSADAD EEnter
 104.58
TIME PARADOX

Une fois l'intégralité des classes fonctionnelles, vous êtes libres d'ajouter autant de bonus que vous le souhaitez (bibliothèque graphique, boss, difficultés, etc).
