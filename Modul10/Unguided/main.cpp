#include <iostream>
#include "bstree.h"
using namespace std;

int main() {
    /*Latihan 1 & 2*/
    cout << "=== Latihan 1 & 2 ===" << endl;
    cout << "Hello World" << endl;
    address root = Nil;
    insertNode(root, 1);
    insertNode(root, 2);
    insertNode(root, 6);
    insertNode(root, 4);
    insertNode(root, 5);
    insertNode(root, 3);
    insertNode(root, 6);
    insertNode(root, 7);
    printInorder(root);
    cout << "\n";
    cout << "kedalaman : " << hitungKedalaman(root, 0) << endl;
    cout << "jumlah node : " << hitungJumlahNode(root) << endl;
    cout << "total : " << hitungTotalInfo(root, 0) << endl;

    /* uji findNode */
    cout << "\nTambahan Uji Coba findNode" << endl;
    cout << "cari 5 : " << (findNode(5, root) != Nil ? "ketemu" : "tidak ada") << endl;
    cout << "cari 9 : " << (findNode(9, root) != Nil ? "ketemu" : "tidak ada") << endl;

    /*Latihan 3: tree*/
    cout << "\n=== Latihan 3 ===" << endl;
    address t = Nil;
    int data[] = {6, 4, 7, 2, 5, 1, 3};
    for (int i = 0; i < 7; i++) insertNode(t, data[i]);
    cout << "Pre-order  : "; printPreorder(t);  cout << endl;
    cout << "Post-order : "; printPostorder(t); cout << endl;
    return 0;
}