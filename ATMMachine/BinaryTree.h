/**
 * Written by: Vy Thuy Nguyen
 * Date created: January, 2010
 * Last modified: June, 2010
 */

#pragma once
#include <iostream>
using namespace std;

struct Data
{
		char ID[9];
		char PIN[5];
		char first[15];
		char last[15];
		char checkNo[9];
		double checkBal;
		char saveNo[9];
		double saveBal;
};

struct TreeNode
{
	Data data;
	TreeNode *left;
	TreeNode *right;
};

class BinaryTree
{
	TreeNode *root;
	
	//Private methods
	void insert(TreeNode *&, TreeNode *&);
	void deleteNode(int, TreeNode *&);
	void makeDeletion(TreeNode *&);
	void displayInOrder(TreeNode *) const;
	
public:
	BinaryTree()
	{root = NULL;}

	void insertNode(Data);
	TreeNode* searchNode(char[], char[]);
	void remove(Data);
	void displayInOrder() const
	{ displayInOrder(root);}
};


