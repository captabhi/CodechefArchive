#include<iostream>
#define alfabet_size 26
using namespace std;

struct node {
	struct node * children[26];
	int strno;
};

struct node* getnode(void)
{
	struct node* newnode= new node;
	newnode-> strno=0;
	for(int i=0;i<alfabet_size;i++)
	{
		newnode->children[i]=NULL;
	}
	return newnode;
}

struct node* insertnode(struct node* root,string key,int sno)
{
	struct node * newnode=root;
	for(int i=0;i<key.length();i++)
	{
		int index=key[i]-'a';
		if(!newnode->children[index])
		newnode->children[index]=getnode();
		
		newnode=newnode->children[index];
	}
	newnode->strno=sno;
	
	
}

int search(struct node* root,string key,int sno)
{
	struct node* newnode=root;

	for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!newnode->children[index])
        {
			
			if(newnode->strno!=0&& newnode->strno<=sno)
        	{
        		return newnode->strno;
			}
			else
			{
			for(int j=0;j<alfabet_size;j++)
        	{
        		if(newnode->strno!=0&& newnode->strno<=sno)
        		return newnode->strno;
				if(newnode->children[j])
        		{
        			newnode=newnode->children[j];
        			cout<<j<<" ";
        			j=0;
				}
			}
			}

		}
		
        newnode = newnode->children[index];
    }
    if(newnode->strno!=0&& newnode->strno<=sno)
        	{
        		return newnode->strno;
			}
			else
			{
			for(int j=0;j<alfabet_size;j++)
        	{
        		if(newnode->strno!=0&& newnode->strno<=sno)
        		return newnode->strno;
				if(newnode->children[j])
        		{
        			newnode=newnode->children[j];
        			cout<<j<<" ";
        			j=0;
				}
			}
			}
    
 
    //return 0;
	
}

int main()
{
	int n,sno,i=1;
	cin>>n;
	string arr[n+1];
	arr[0]="None";
	struct node *root=getnode();
	while(n--)
	{
		string str;
		cin>>str;
		arr[i]=str;
		insertnode(root,str,i);
		i++;
	}
	int q;
	cin>>q;
	while(q--)
	{
		int sno;
		cin>>sno;
		string str;
		cin>>str;
		int no=search(root,str,sno);
		cout<<arr[no]<<endl;
	}
}
