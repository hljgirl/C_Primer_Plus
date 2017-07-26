//������������ʵ���ļ�

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#include "tree.h"


typedef struct pair
{
	Node * parent;
	Node * child;
}Pair;

static Node * MakeNode(const Item * item);
static void AddNode(Node * new_node, Node * root);
static Pair SeekItem(const Item * item, const Tree * tree);
static bool ToLeft(const Item * item1, const Item * item2);
static bool ToRight(const Item * item1, const Item * item2);
static void DeleteNode(Node ** ptr);
static void Inorder(const Node * root, void (*pfun)(Item item));
static void DeleteAllNodes(Node * root);


void InitializeTree(Tree * ptree)
{
	ptree->root = NULL;
	ptree->size = 0;
}

bool TreeIsEmpty(const Tree * ptree)
{
	if (ptree->root == NULL)
		return true;
	else
		return false;
}

bool TreeIsFull(const Tree * ptree)
{
	if (ptree->size == MAXITEMS)
		return true;
	else
		return false;
}

int TreeItemCount(const Tree * ptree)
{
	return ptree->size;
}



//1.�ж����Ƿ�����
//2.�ж������Ƿ�����ͬ����Ŀ
//3.�����½ڵ㣬�½ڵ�Item<-item���½ڵ�����ָ��<-NULL  �������Ĵ�С ======> MakeNode()
//4.�ж��½ڵ��������ʲôλ��
//    ����ǿ��������ڵ���Ǹ��½ڵ�
//    ���������в��ҷ��øýڵ��λ��,�����֮   ======>   SeekItem() AddNode()
//SeekItem() AddNode()  MakeNode()
bool AddItem(const Item *item, Tree * ptree)
{
	Node * new_node;

	if (TreeIsFull(ptree))
	{
		fprintf(stderr, "Tree is full.\n)");
		return false;
	}

	if (SeekItem(item, ptree).child != NULL)
	{
		fprintf(stderr, "Attempted to add duplicate item.\n");
		return false;
	}

	new_node = MakeNode(item);

	if (new_node == NULL)
	{
		fprintf(stderr, "Couldn't create node.\n");
		return false;
	}

	ptree->size++;

	if (ptree->root == NULL)
		ptree->root = new_node;
	else
		AddNode(new_node, ptree->root);

	return true;
}

bool InTree(const Item * item, const Tree * ptree)
{
	return SeekItem(item, ptree).child != NULL;
}


bool DeleteItem(Item * item, Tree * ptree)
{
	Pair look;
	look = SeekItem(item, ptree);

	if (look.child == NULL)
		return false;

	if (look.parent == NULL)
		DeleteNode(&ptree->root);
	else if (look.parent->left == look.child)
		DeleteNode(&look.parent->left);
	else
		DeleteNode(&look.parent->right);

	ptree->size--;

	return true;

}

void Traverse(const Tree * ptree, void(*pfun)(Item item))
{

	if (ptree != NULL)
	{
		Inorder(ptree->root, pfun);
	}
}

void DeleteTree(Tree * ptree){
	
	if (ptree != NULL)
		DeleteAllNodes(ptree->root);

	ptree->root = NULL;
	ptree->size = 0;

}


static Node * MakeNode(const Item * item)
{
	Node * new_node;

	new_node = (Node *)malloc(sizeof(Node));

	if (new_node != NULL)
	{
		new_node->item = *item;
		new_node->left = NULL;
		new_node->right = NULL;
	}

	return new_node;

}

//1.�ж�Ӧ��������������л�����������  ======>   Toleft() Toright()
//2.�ж��������Ƿ�Ϊ��
//   ���������Ϊ�գ�������ָ��ָ���½ڵ�,
//   ����������ǿգ��ظ�����1��2,ֱ������һ���յ�����
static void AddNode(Node * new_node, Node * root)
{
	if (ToLeft(&(new_node->item), &(root->item)))
	{
		if (root->left == NULL)
			root->left = new_node;
		else
			AddNode(new_node, root->left);
	}else if (ToRight(&(new_node->item), &(root->item)))
	{
		if (root->right == NULL)
			root->right = new_node;
		else
			AddNode(new_node, root->right);
	}else
	{
		fprintf(stderr, "location error in AddNode().\n");
		exit(1);
	}
}


static Pair SeekItem(const Item * item, const Tree * ptree)
{
	Pair look;
	look.child = ptree->root;
	look.parent = NULL;

	if (look.child == NULL)
		return look;

	while (look.child != NULL)
	{
		if (ToLeft(item, &(look.child->item)))
		{
			look.child = look.child->left;
			look.parent = look.child;
		}else if (ToRight(item, &(look.child->item)))
		{
			look.child = look.child->right;
			look.parent = look.child;
		}else
		{
			break;
		}
	}
	
	return look;
}



static bool ToLeft(const Item * item1, const Item * item2)
{
	int comp1, comp2;

	comp1 = strcmp(item1->petname, item2->petname);
	comp2 = strcmp(item1->petkind, item2->petkind);
	
	if (comp1 < 0 || (comp1 == 0 && comp2 < 0))
		return true;
	else
		return false;
}

static bool ToRight(const Item * item1, const Item * item2)
{
	int comp1, comp2;

	comp1 = strcmp(item1->petname, item2->petname);
	comp2 = strcmp(item1->petkind, item2->petkind);
	
	if (comp1 > 0 || (comp1 == 0 && comp2 > 0))
		return true;
	else
		return false;
}


//���1.ɾ��Ҷ�� 
//���2.ɾ��ֻ��һ���ӽڵ����Ŀ
//���3.ɾ�������������ӽڵ����Ŀ
static void DeleteNode(Node ** ptr)
{
	Node * temp;

	puts((*ptr)->item.petname);
	

	if ((*ptr)->left == NULL)
	{
		temp = *ptr;
		*ptr = (*ptr)->right;
		free(temp);
	}else if ((*ptr)->right == NULL)
	{
		temp = *ptr;
		*ptr = (*ptr)->left;
		free(temp);
	}else
	{
		for (temp = (*ptr)->left; temp->right!= NULL; temp = temp->right)
			continue;

		temp->right = (*ptr)->right;

		temp = *ptr;
		*ptr = (*ptr)->left;
		free(temp);
	}
}


static void Inorder(const Node * root, void (*pfun)(Item item))
{
	if (root != NULL)
	{
		Inorder(root->left, pfun);
		pfun(root->item);
		Inorder(root->right, pfun);
	}
}


static void DeleteAllNodes(Node * root)
{
	Node * pright;
	 
	if (root != NULL)
	{
		pright = root->right;
		DeleteAllNodes(root->left);
		free(root);
		DeleteAllNodes(pright);
	}
}