#ifndef BSTREE_H
#define BSTREE_H
#define Nil NULL

#include <iostream>
using namespace std;

typedef int infotype;
typedef struct Node *address;

struct Node {
    infotype info;
    address left, right;
};

/*Latihan 1: ADT Binary Search Tree*/
address alokasi(infotype x);
void insertNode(address &root, infotype x);
address findNode(infotype x, address root);
void printInorder(address root);

/*Latihan 2: fungsi hitung*/
int hitungJumlahNode(address root);
int hitungTotalInfo(address root, int start);
int hitungKedalaman(address root, int start);

/*Latihan 3: traversal*/
void printPreorder(address root);
void printPostorder(address root);

#endif