#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

// Data structure to store a binary tree node
struct Node
{
	int key;
	Node *left, *right;

	Node(int key)
	{
		this->key = key;
		this->left = this->right = nullptr;
	}
};

// Function to print all nodes of a given binary tree in
// a specific order from bottom to top
void printNodes(Node* root)
{
	// return if the tree is empty
	if (root == nullptr) {
		return;
	}

	// start with level 1 (of the root node)
	int level = 1;

	// create an empty multimap of integers (every key can be
	// associated with multiple values)
	unordered_map<int, vector<int>> map;

	// insert the root node at the first level
	map[level].push_back(root->key);

	// create two empty queues and enqueue root's left and
	// right child, respectively
	queue<Node*> q1, q2;

	if (root->left && root->right)
	{
		q1.push(root->left);
		q2.push(root->right);
	}

	// loop till queue is empty
	while (!q1.empty())
	{
		// increment level by 1
		level++;

		// calculate the total number of nodes at the current level
		int n = q1.size();

		// process every node of the current level
		while (n--)
		{
			// dequeue front node from the first queue and insert it into the map
			Node* x = q1.front();
			q1.pop();

			map[level].push_back(x->key);

			// enqueue left and right child of `x` to the first queue
			if (x->left) {
				q1.push(x->left);
			}

			if (x->right) {
				q1.push(x->right);
			}

			// dequeue front node from the second queue and insert it into the map
			Node* y = q2.front();
			q2.pop();

			map[level].push_back(y->key);

			// enqueue right and left child of `y` to the second queue
			if (y->right) {
				q2.push(y->right);
			}

			if (y->left) {
				q2.push(y->left);
			}
		}
	}

	// iterate through the map in reverse order and
	// print all nodes present at every level
	for (int i = map.size(); i > 0; i--)
	{
		for (int j: map[i]) {
			cout << j << " ";
		}
	}
}

int main()
{
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	root->left->left->left = new Node(8);
	root->left->left->right = new Node(9);
	root->left->right->left = new Node(10);
	root->left->right->right = new Node(11);
	root->right->left->left = new Node(12);
	root->right->left->right = new Node(13);
	root->right->right->left = new Node(14);
	root->right->right->right = new Node(15);

	printNodes(root);

	return 0;
}