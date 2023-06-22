#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int key;
    struct Node*left;
    struct Node*right;
}Node;
// creer un arbre
Node create_node(int info)
{
    Node *temp;
    temp=(Node*)malloc(sizeof(Node));
    if(temp)
    {
        temp->key=info;
        temp->left=temp->rignt=NULL;
    }
    return temp;
}
//algorithme reccursive pour une clé deja existante
void inserer_feuille(Node**T,int x)
{
    if(*T=NULL)
        *T=create_node(x);
    else
    {
        if(x<(*T)->key)
            inserer_feuille(&(*T)->left,x);

    }
}
// creer un arbre binaire
Node*creer_arbre(int R ,Node*SG ,Node*SD)
{
   Node *T;
   T= create_node(R);
   T->left=SG;
   T->right=SD;
   return T;
}
// algorithme itératif pour d'insertion d'une clé non existante
void inserer_feuille_iter(Node**T, int x)
{
    Node**temp;
    if(*T==NULL)
        *T=create_node(x);
    else
        {
          temp=T;
          while(Temp != NULL)
          {
              if(x<(*temp)->key)
               temp->left->key=x;
              else
              {
                  if (x>(*temp)->key)
                    temp->right->key=x;
              }
          }
        }
} //insertion d'une clé déjà existante 1er cas 1
void inserer_cle_11(Node**T,int x)
    {
        if(*T==NULL)
            *T=create_node(x);
        else
            {
              if(x<=(*T)->key)
                inserer_cle_11(&(*T)->left,x);
              else
              {
                  if(x>=(*T)->key)
                    inserer_cle_11(&(*T)->right,x)
              }
            }
    }
 // insertion d'une clé déjà existante 1er cas 2
 void inserer_cle_12(Node**T,int x)
    {
        if(*T==NULL)
            *T=create_node(x);
        else
            {
              if(x=(*T)->key)
                inserer_cle_12(&(*T)->left,x);

            }
    }

// insertion d'une clé deja existante 1er cas 3
void inserer_cle_13(Node**T,int x)
    {
        if(*T==NULL)
            *T=create_node(x);
        else
            {
              if(x=(*T)->key)
                inserer_cle_13(&(*T)->right,x);

            }
    }
// insertion d'une clé déjà existante 2eme cas 1
void inserer_cle_21(Node**T,int x)
    {
        if(*T==NULL)
            *T=create_node(x);
        else
            {
              if(x=(*T)->key)
                inserer_feuille(&(*T)->right,x);

            }
    }
// insertion d'une clé deja existante 2eme cas 2
void inserer_cle_22(Node**T,int x)
    {
        if(*T==NULL)
            *T=create_node(x);
        else
            {
              if(x=(*T)->key)
                inserer_feuille(&(*T)->left,x);

            }
    }
// l'implémentation iterative de ces algorithmes
void inserer_cle_11_itter(Node**T,int x)
    {
        if(*T==NULL)
            *T=create_node(x);
        else
        {
          temp=T;
          while(temp != NULL)
          {
              if(x<(*temp)->key && (*temp)->right->key=wx)
               temp->right->key=x;
          }
        }
    }
void inserer_cle_12_iter(Node**T,int x)
    {
        if(*T==NULL)
            *T=create_node(x);
         else
        {
          temp=T;
          while(temp != NULL)
          {
              if(x=(*temp)->key)
               temp->right->key=x;
          }
        }
    }
void inserer_cle_13_iter(Node**T,int x)
    {
        if(*T==NULL)
            *T=create_node(x);
         else
        {
          Temp=T;
          while(Temp != NULL)
          {
              if(x=(*temp)->key)
               temp->left->key=x;
          }
        }
    }
void inserer_cle_21_iter(Node**T,int x)
{
      Node**temp;
    if(*T==NULL)
        *T=create_node(x);
    else
        {
          Temp=T;
          while(Temp != NULL)
          {
              if(x=(*temp)->key)
               temp->left->key=x;

          }
        }
}
void inserer_cle_22_iter(Node**T,int x)
{
      Node**temp;
    if(*T==NULL)
        *T=create_node(x);
    else
        {
          Temp=T;
          while(Temp != NULL)
          {
              if(x=(*temp)->key)
               temp->right->key=x;

          }
        }
}
// version iteratif du minimum
Node* get_min_iterr(Node*T)
{
    if(T==NULL)
        return NULL;
    if(T->left==NULL)
        return T;
    else
         temp=T;
          while(temp->left != NULL)
          {
            temp=temp->left;
          }
    return temp;
}
// version iteratif du maximum
Node* get_max_iterr(Node*T)
{
    if(T==NULL)
        return NULL;
    if(T->right==NULL)
        return T;
    else
         temp=T;
          while(temp->right != NULL)
          {
            temp=temp->right;
          }
    return temp;
}
// version reccursive du minimum et maximum (va nous servir apres)
Node* get_min(Node*T)
{
    if(T==NULL)
        return NULL;
    if(T->left==NULL)
        return T;
    return get_min(T->left);
}
Node* get_max(Node*T)
{
    if(T==NULL)
        return NULL;
    if(T->right==NULL)
        return T;
    return get_min(T->right);
}
// predecesseur & successeur (va nous servir apres)
Node* predecesseur(Node*T)
{
    if(T==NULL || T->left ==NULL )
        return NULL;
    return get_max(T->left)
}
Node* successeur(Node*T)
{
    if(T==NULL || T->right ==NULL )
        return NULL;
    return get_min(T->right)
}
// la suppression
void supprimer_1(Node**T)
{
    Node **temp;
    temp=T;
    while (temp != NULL)
    {
        T=predecesseur;
        T->right=predecesseur->right;
        T->left=predecesseur->left;
    }
    free(temp);
}
void supprimer_2(Node**T)
{
    Node **temp;
    temp=T;
    while (temp != NULL)
    {
        T=successeur;
        T->right=successeur->right;
        T->left=successeur->left;
    }
    free(temp);
}
