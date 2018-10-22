#include<iostream>

#include<ostream>
using namespace std;

struct BinaryTreeNode
{
	char value;
	BinaryTreeNode * left;
	BinaryTreeNode * right;
};
void Serialize(BinaryTreeNode * root, ostream & stream)
{
	if (root == nullptr)
	{
		stream << "$,";
		return;
	}
	stream << root->value << ',';
	Serialize(root->left, stream);
	Serialize(root->right, stream);

}

