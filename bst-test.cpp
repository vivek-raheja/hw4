#include <iostream>
#include <map>
#include "bst.h"
#include "avlbst.h"

using namespace std;


int main(int argc, char *argv[])
{
    // Binary Search Tree tests
    BinarySearchTree<char, int> bt;
    bt.insert(std::make_pair('a',1));
    bt.insert(std::make_pair('b',5));
		bt.insert(std::make_pair('c',10));
   	bt.insert(std::make_pair('d',6));
    bt.insert(std::make_pair('e',2));
    bt.insert(std::make_pair('f',8));

    
    //cout << "Binary Search Tree contents:" << endl;
    
    for(BinarySearchTree<char, int>::iterator it = bt.begin(); it != bt.end(); ++it) {
			cout << it->first << " " << it->second << endl;
   }
    if(bt.find('b') == bt.end()) {
        cout << "Found b" << endl;
    }
    else {
        cout << "Did not find b" << endl;
    }
    cout << "Erasing b" << endl;
    bt.remove('b');
		
		// cout << bt.root_->getValue() << endl;
		
    // AVL Tree Tests
    AVLTree<char,int> at;
    at.insert(std::make_pair('a',1));
    at.insert(std::make_pair('b',2));
    at.insert(std::make_pair('c',10));
    at.insert(std::make_pair('d',6));
    at.insert(std::make_pair('e',2));
    at.insert(std::make_pair('f',8));
    
    cout << "\nAVLTree contents:" << endl;
    for(AVLTree<char,int>::iterator it = at.begin(); it != at.end(); ++it) {
       cout << it->first << " " << it->second << endl;
   }
    if(at.find('b') == at.end()) {
        cout << "Found b" << endl;
    }
    else {
        cout << "Did not find b" << endl;
    }
    cout << "Erasing b" << endl;
    at.remove('b');
	
    return 0;
}
