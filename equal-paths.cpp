#include "equal-paths.h"
#include <iostream>
#include <cstdlib>

using namespace std;

// You may add any prototypes of helper functions here
int initalized = 0;
bool equalFlag = true;

int findPathLengths(Node* node, int path[1000], int len) {
	if ( node == NULL ){
		return 0;
	}
	// storing data in array
	path[len] = node->key;
	len++;

	if(node->left == NULL && node->right == NULL) {
		if(initalized == 0) {
			initalized = len;
		} else if (initalized != len) {
			equalFlag = false;
		}
		return len;
	} 
	
	findPathLengths(node->left, path, len);
	findPathLengths(node->right, path, len);
	return 0;
}

bool equalPaths(Node * root)
{
	initalized = 0;
    findPathLengths(root,new int[1000],0);
    return equalFlag;
}