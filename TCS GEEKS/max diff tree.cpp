
#include <bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct Node* newNode(int data)
{
  struct Node* node = (struct Node*)
                       malloc(sizeof(struct Node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
int maxDiff(Node *root);
int maxDiffRec(Node* root,int *res);
int main()
{
  int t;
  struct Node *child;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
   
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
          {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
          }
        else
        parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
         }
   cout<<maxDiff(root)<<endl;
 }
  return 0;
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
/* Your are required to 
complete this method*/
int maxDiff(Node* root)
{
    int res=-2;
    maxDiffRec(root,&res);
    return res;
}
int maxDiffRec(Node* root,int *res)
{
	if(root->left==NULL&&root->right==NULL)
    {
        //cout<<"Condition 1\n";
		return root->data;
    }
    else if(root->right==NULL)
    {
        //cout<<"Condition 2\n";
		int data=maxDiffRec(root->left,res);
       	int temp=(root->data)-data;
       	if(temp>(*res))
       	{
       		(*res)=temp;
       		//cout<<"Block 1\n";
       		//cout<<root->data<<" "<<data<<" "<<temp<<endl;
       		
       		
		   }
		return (data<root->data)?data:(root->data);
    }
    else if(root->left==NULL)
    {
        //cout<<"Condition 3\n";
		int data=maxDiffRec(root->right,res);
       	int temp=(root->data)-data;
       	if(temp>(*res))
       	{
       		(*res)=temp;
       		//cout<<"Block 2\n";
       		//cout<<root->data<<" "<<data<<" "<<temp<<endl;
		   }
		return (data<root->data)?data:(root->data);
    }
    else {
        
        //cout<<"Condition 4\n";
        int data1=maxDiffRec(root->left,res);
        int data2=maxDiffRec(root->right,res);
        int temp=root->data-data1;
		if(temp>(*res))
       	{
       		//cout<<"Block 3\n";
       		(*res)=temp;
       		//cout<<root->data<<" "<<data1<<" "<<temp<<endl;
		   }
	    temp=root->data-data2;
		if(temp>(*res))
       	{
       		(*res)=temp;
       		//cout<<"Block 4\n";
       		//cout<<root->data<<" "<<data2<<" "<<temp<<endl;
		   }  
		 if(root->data<data1&&root->data<data2)
		 return root->data;
		 else if(data1<root->data&&data1<data2)
		 return data1;
		 else return data2;    
    }
}
