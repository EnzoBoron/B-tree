# 🌳 B-Tree (Arbre B) – C++

Implémentation d’un <strong>B-tree en C++</strong> avec les principales opérations <strong>CRUD.</strong>  
Projet à but pédagogique pour comprendre les structures de <strong>données avancées.</strong>

## 📌 Définition

Un B-tree est une structure de données auto-équilibrée utilisée pour stocker et organiser des données triées.  
Il est largement utilisé dans les bases de données et les systèmes de fichiers.

## ⚙️ Fonctionnalités
* search(int k) → recherche d’une clé
* insert(int k) → insertion d’une clé
* remove(int k) → suppression d’une clé
* printTree() → affichage par niveaux
* printPretty() → affichage hiérarchique
  
## 🧠 Concepts clés
* Chaque nœud contient plusieurs clés
* L’arbre reste équilibré
* Les opérations sont en O(log n)
* Optimisé pour les accès disque

## 🚀 Exemple d’utilisation
```cpp
int main(void) {
    BTree t(T);

    t.insert(10);
    t.insert(20);
    t.insert(5);
    t.insert(6);
    t.insert(12);

    // Affichage par niveaux
    t.printTree();

    // Affichage hiérarchique
    t.printPretty();

    int k = 87;

    // Recherche
    if (t.search(k) != nullptr)
        std::cout << "Trouvé : " << k << std::endl;
    else
        std::cout << "Non trouvé : " << k << std::endl;

    // Suppression
    t.remove(10);

    return 0;
}
```

## 🎯 Objectif

Ce projet est conçu pour :
* Comprendre le fonctionnement des B-trees
* Visualiser les opérations internes
* Servir de base pour des projets plus complexes (ex: mini base de données type mySQLite)

## ⭐ Support
Si ce projet t’a aidé à comprendre les B-trees :  
👉 laisse une étoile  
👉 ou fork le projet pour l’améliorer  
