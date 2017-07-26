//二叉搜索树
//树中不允许有相同的项目

#include "stdafx.h"

#ifndef _TREE_H_
#define _TREE_H_

typedef struct item
{
	char petname[20];
	char petkind[20];
}Item;

#define MAXITEMS 20

typedef struct node
{
	Item item;
	struct node * left;
	struct node * right;
}Node;


typedef struct tree
{
	Node * root;
	int size;
}Tree;

void InitializeTree(Tree * ptree);

bool TreeIsEmpty(const Tree * ptree);

bool TreeIsFull(const Tree * ptree);

int TreeItemCount(const Tree * ptree);

bool AddItem(const Item *item, Tree * ptree);

bool InTree(const Item * item, const Tree * ptree);

bool DeleteItem(Item * item, Tree * ptree);

void Traverse(const Tree * ptree, void(*pfun)(Item item));

void DeleteTree(Tree * ptree);

#endif 