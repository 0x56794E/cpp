
/**
 * Written by: Vy Thuy Nguyen
 * Date created: January, 2010
 * Last modified: June, 2010
 */

#include "BinaryTree.h"

void BinaryTree::insert(TreeNode *&nodePtr, TreeNode *&newNode)
{
	//Traverse thru the tree to find appropriate position
	if (nodePtr == NULL)
		nodePtr = newNode;
	else if (strcmp(newNode->data.ID, nodePtr->data.ID) < 0)
		insert(nodePtr->left, newNode);
	else
		insert(nodePtr->right, newNode);

}

void BinaryTree::insertNode(Data newData)
{
	//Create new node
	TreeNode *newNode = new TreeNode;
	newNode->data = newData;
	newNode->left = newNode->right = NULL;

	//Insert the new node to tree
	insert(root, newNode);
}

//This method is for testing only
void displayRecord(TreeNode *nodePtr)
{
	cout << nodePtr->data.ID << "  " 
		 << nodePtr->data.PIN << "  " 
		 << nodePtr->data.first << "  " 
		 << nodePtr->data.last << "   "
		 << nodePtr->data.checkNo << "   "
		 << nodePtr->data.checkBal << "   "
		 << nodePtr->data.saveNo << "   "
		 << nodePtr->data.saveBal << "   "
		 << endl;
}

void BinaryTree::displayInOrder(TreeNode *nodePtr) const
{
	if (nodePtr)
	{
		displayInOrder(nodePtr->left);
		displayRecord(nodePtr);
		displayInOrder(nodePtr->right);
	}
}


TreeNode* BinaryTree::searchNode(char id[], char pin[])
{
	TreeNode *nodePtr = root;

	
	while(nodePtr)
	{
		if (strcmp(nodePtr->data.ID,id) == 0)
		{
			if (strcmp(nodePtr->data.PIN,pin) == 0)
				return nodePtr;
		}
		else if (strcmp(nodePtr->data.ID,id) < 0 )
			nodePtr = nodePtr->right;
		else 
			nodePtr = nodePtr->left;
	}
return NULL;
}

	