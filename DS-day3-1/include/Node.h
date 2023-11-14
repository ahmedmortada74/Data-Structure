#ifndef NODE_H
#define NODE_H

using namespace std;

class  Node
{
   public:
       int data;
       Node* left;
       Node* right;

       Node(int _data){
            data = _data;
            left = right = NULL;
       }
};
class BST{
public:
   Node* root;
public:
    BST(){
         root =NULL;

    }

  // LDR
   void Display(Node* pDisplay){
        if(pDisplay == NULL)
            return;
            Display(pDisplay->right);
       cout<<pDisplay->data<<"\t";
       Display(pDisplay->left);
   }
   Node* Search(int Num){   //Value current = root
       Node* current = root;

       while(current != NULL){
            if(current->data == Num){
            return current;     //return root
           }

           if(Num > current->data ){
            current = current->right;
           }else{
            current = current->left;
           }
       }
        return NULL;
   }


   Node* MinLeft(Node* Root){
  if (Root==NULL  )
        return NULL;
     else if (Root->left==NULL)
        return Root;
     else
        return MinLeft(Root->left);
   }


    void Add(int data){
        Node* newNode = new Node(data);

        //BST is empty
        if(root == NULL){
            root = newNode;
        }
        //BST not empty
        else{
            Node* current = root;
            Node* parent = root;
            while(current != NULL){
                parent = current;
                if(data < current->data){
                    current = current->left;
                }else{
                    current = current->right;
                }
                }
            if(data < parent->data){
                parent->left = newNode;
            }else{
                parent->right = newNode;
            }
        }
    }
    void Traverse(){
        Display(root);
    }
    void Traverse(int data){
        Node* psearch = Search(data);

        if(psearch != NULL)
            Display(psearch);
    }
    Node* Delete(Node* root, int x ){ //tree and element

    if(root==NULL)   //no delete
    return NULL;
    if(x<root->data)  //recerseve function
        root->left=Delete(root->left,x);
      else if(x>root->data)
       root->right=Delete(root->right,x);
    else{
            if (root->left==NULL&&root-> right==NULL)  //no have any child
            {
                root=NULL;  //delete root
            }

    else if (root->left!=NULL&&root->right==NULL)//have child ->left
   {
      root->data=root->left->data;
      delete root->left; //take data of left  and delete left
      root->left=NULL;
   }
   else if (root->left==NULL&&root->right!=NULL)//have child ->right
   {
      root->data=root->right->data;
      delete root->right;
      root->right=NULL;
   }
   else{
    Node* mine=MinLeft(root->right);//have two child  in the left and the right
    root->data=mine->data;   // get the minimum  value in the right part
   root->right= Delete(root->right,mine->data); //replace the minimym with deleted value
   }

    }
    return root;
    }

//    void Delete(int data){
//       Node* pDelete =  Search(data);
//
//       if(pDelete != NULL){
//
//        if(pDelete == root){
//                if(root->left == NULL && root->right == NULL){
//                    root = NULL;
//                }else if(root->right == NULL){
//                    root = root->left;
//                }else if(root->left == NULL){
//                    root = root->right;
//                }else{
//
//                    Node* maxRight = MaxRight(root->left);
//                    maxRight->right = root->right;
//                    root = root->left;
//
//                }
//
//        }//not root
//        else{
//
//        }
//
//
//        delete pDelete;
//       }
//    }
//


};

#endif // NODE_H
