// AVL tree implementation in C++

#include <iostream>
#include "nodo.h"

using namespace std;







int main() {
    Node* root = NULL;
    /*
    //*/
    //int opcionMenu;
    //int dato;
    //do {
    //    cout << ("\n|-------------------------------------|");
    //    cout << ("\n|         °  ARBOLES AVL  °           |");
    //    cout << ("\n|------------------|------------------|");
    //    cout << ("\n| 1. Insertar Nodo e imprimir arbol   |");
    //    cout << ("\n| 2. Mostrar arbol en preOrden        |");
    //    cout << ("\n| 3. Mostrar arbol inOrder            |");
    //    cout << ("\n| 4. Mostrar arbol en postOrder       |");
    //    cout << ("\n| 5. Mostrar arbol                    |");
    //    cout << ("\n| 6. Borrar nodo                      |");
    //    cout << ("\n| 7. Salir                            |");
    //    cout << ("\n|------------------|------------------|");
    //    cout << ("\n\n Escoja una Opcion: ");
    //    cin >> opcionMenu;
    //    system("cls");
    //    //cin.ignore(); 

    //    switch (opcionMenu) {
    //    case 1:

    //        cout << "Digite el valor del nodo \n";
    //        cin >> dato;
    //        root = insertNode(root, dato);
    //        printTree(root, "", true);
    //        cout << "Ahora raiz es  " << root->key << endl;
    //        cout << endl;
    //        cout << "\n <-----------------------------------------------> \n" << endl;
    //        system("pause");

    //        break;
    //    case 2:
    //        cout << "Pre-Order \n";
    //        preOrden(root);
    //        cout << "\n";
    //        system("pause");
    //        break;
    //    case 3:
    //        cout << "\nEn-Order \n";
    //        enOrden(root);
    //        system("pause");
    //        break;
    //    case 4:
    //        
    //        cout << "\nPost-Order \n";
    //        postOrden(root);
    //        system("pause");
    //        break;
    //    case 5:

    //        cout << "Mostrar Arbol \n";
    //        printTree(root, "", true);
    //        cout << "\n";
    //        system("pause");
    //        break;

    //    case 6:

    //        cout << "Metodo para borrar un valor del arbol \n";
    //        cout << "Digite el valor del nodo a borrar \n";
    //        cin >> dato;
    //        root = deleteNode(root, dato);
    //        cout << "\nDespues de borrar " << endl;
    //        printTree(root, "", true);
    //        cout << "\n";
    //        system("pause");
    //        break;

    //    default:
    //        break;
    //    }

    //} while (opcionMenu != 7);
   








    
    root = insertNode(root, 100);
    root = insertNode(root, 90);
    root = insertNode(root, 150);
    root = insertNode(root, 160);
    printTree(root, "", true);
    root = insertNode(root, 170);
    printTree(root, "", true);
    root = insertNode(root, 180);
    printTree(root, "", true); 




    /* //Prueba 2
    root = insertNode(root, 100);
    cout << "Ahora raiz es  " << root->key << endl;
    printTree(root, "", true);

    root = insertNode(root, 90);
    cout << "Ahora raiz es  " << root->key << endl;
    printTree(root, "", true);

    root = insertNode(root, 80);
    cout << "Ahora raiz es  " << root->key << endl;
    printTree(root, "", true);

    root = insertNode(root, 70);
    cout << "Ahora raiz es  " << root->key << endl;
    printTree(root, "", true);

    root = insertNode(root, 60);
    cout << "Ahora raiz es  " << root->key << endl;
    printTree(root, "", true);

    root = insertNode(root, 65);
    cout << "Ahora raiz es  " << root->key << endl;
    printTree(root, "", true);

    root = deleteNode(root, 65);
    cout << "Despues de borrar " << endl;
    printTree(root, "", true);

    root = insertNode(root, 85);
    cout << "Ahora raiz es  " << root->key << endl;
    printTree(root, "", true);*/






    /* //Prueba 3
    root = insertNode(root, 100);
    printTree(root, "", true);
    cout << "Ahora raiz es  " << root->key << endl;
    cout << endl;

    root = insertNode(root, 90);
    printTree(root, "", true);
    cout << "Ahora raiz es  " << root->key << endl;
    cout << endl;

    root = insertNode(root, 80);
    printTree(root, "", true);
    cout << "Ahora raiz es  " << root->key << endl;
    cout << endl;
    */




    /*//Prueba 4
        root = insertNode(root, 80);
    printTree(root, "", true);
    cout << "Ahora raiz es  " << root->key << endl;
    cout << endl;

    cout << "\n <-----------------------------------------------> \n" << endl;

    root = insertNode(root, 90);
    printTree(root, "", true);
    cout << "Ahora raiz es  " << root->key << endl;
    cout << endl;

    cout << "\n <-----------------------------------------------> \n" << endl;

    root = insertNode(root, 100);
    printTree(root, "", true);
    cout << "Ahora raiz es  " << root->key << endl;
    cout << endl;

    cout << "\n <-----------------------------------------------> \n" << endl;

    cout << "Pre-Order \n";
    preOrden(root);
    cout << "\nEn-Order \n";
    enOrden(root);
    cout << "\nPost-Order \n";
    postOrden(root);

    */
    return 0;

}