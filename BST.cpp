
// Implementacion de arbol binario con left, right, parent características, funciones de busqueda, insercion y eliminacion


#include <iostream>

using namespace std;


struct Node
{
    int key; //CARACTERISTICAS DEL NODO
    struct Node *left;
    struct Node *right;
    struct Node *parent;
};
 
// FUNCION QUE CREA EL NODO A PARTIR DEL VALOR DADO 
struct Node* newNode(int item)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));// declaracion del nodo y alocacion

    temp->key = item; // valor del nodo
    temp->left = NULL; // left, right y parent nulos
    temp->right = NULL; 
    temp->parent = NULL;
    return temp;
}
 
// Muestra el BST en orden traversal (vi que lo usaban en hartos sitios webs)
void inordertraversal(Node* root)
{
    if (root != NULL) {
        inordertraversal(root->left);
        printf("%d ", root->key);
        inordertraversal(root->right);
    }
}


 
// FUNCION PARA INSERTAR UN NODO DADA UN VALOR (KEY)

struct Node* insert(struct Node* root, int key)
{
//Caso 1, si el nodo esta vacío, devuelve un nodo en la raíz (root)
    if (root == NULL) return newNode(key);
 
    /* Otherwise, recur down the tree */
    
// Si el valor es menos que la raíz, es un subarbol izquierdo
    if (key < root->key)
    {
        Node *lchild = insert(root->left, key);
        root->left  = lchild;
 
// settea el padre del nuevo nodo
        lchild->parent = root;
    }
//Si el valor es mayor, es un subarbol derecho  
    else if (key > root->key)
    {
        Node *rchild = insert(root->right, key);
       root->right  = rchild;
 
        rchild->parent = root;
    }
    return root;
}


struct Node* minValueNode(struct Node* Node) // funcion que busca el valor minimo enun nodo no nulo, se usa despues apra borrar 
{
    struct Node* current = Node;
 
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}


//FUNCION PARA BUSCAR UN VALOR
struct Node* search(struct Node* root, int key)
{
// No existe raiz o el valor es la misma
    if (root == NULL || root->key == key)
    return root;
       

    
// El valor  es mas grande que la raiz -> se busca en el subarbol derecho 
    if (root->key < key)
       return search(root->right, key);
 
// El valor  es mas pequeño que la raiz -> se busca en el subarbol derecho 
    return search(root->left, key);
}


//FUNCION PARA ELIMINAR NODOS 


struct Node* deleteNode(struct Node* root, int key)
{
    // Caso raiz nula 
    if (root == NULL)
        return NULL;
 
     // Si el valor es mas pequeño que la raiz, el valor debe estar en el subarbol izquierdo
    if(root->key < key)
        root->right = deleteNode(root->right, key);
        
    // Si el valor es mas grande que la raiz, el valor debe estar en el subarbol derecho 
    else if(root->key > key)
        root->left = deleteNode(root->left, key);
        
    else{
     
        // Caso nodo hoja 
        if(root->left == NULL && root->right == NULL) {
            return NULL;
            }
     
        // Caso en que uno de los hijos es nulo
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        
        //Caso 2 hijos, se busca el valor minimo en el subarbol derecho 
        struct Node* temp = minValueNode(root->right);
 
        // Se reemplaza 
        root->key = temp->key;
 
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}
 
 
// ejemplo usaremos este arbol y eliminaremos el 300 
//     100                                          
//    / \        
//  50  200         
//    / \    
//  150  300
 
int main()
{

    struct Node* root = NULL;
    root = insert(root, 100); // insercion de valores 
    root = insert(root, 50);
    root = insert(root, 200);
    root = insert(root, 150);
    root = insert(root, 300);

 
    cout << "orden traversal del arbol  \n";
    inordertraversal(root);
 
 
    cout << "\n borramos 300 \n";
    root = deleteNode(root, 300);
    cout << "Orden traversal del arbol modificado \n";
    inordertraversal(root);
 
  
    return 0;
}
 