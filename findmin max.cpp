struct BSTNode{
int data;
BSTNode*left;
BSTNode*right;
};

int FindMin(BSTNode*root){
BSTNode*curr=root;
while(curr->left!=NULL){
curr=curr->left;
}
return curr->data;
}
int FindMax(BSTNode*root){
BSTNode*curr=root;
while(curr->right!=NULL){
curr=curr->right;
}
return curr->data;
}
