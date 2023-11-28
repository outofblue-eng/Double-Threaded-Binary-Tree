#include "BST.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Samuel Tran -- CSIS 215 Programming Assignment 2 -- Double Threaded Binary Tree" << endl << endl;
	BST<int, string> bst;
	
	cout << "Testing the insert function to build my tree." << endl;
	
	bst.insert(77, "seventy-seven");
	bst.insert(70, "seventy");
	bst.insert(75, "seventy-five");
	bst.insert(66, "sixty-six");
	bst.insert(79,"seventy-nine");
	bst.insert(68, "sixty-eight");
	bst.insert(67, "sixty-seven");
	bst.insert(69, "sixty-nine");
	bst.insert(90, "ninety");
	bst.insert(85, "eighty-five");
	bst.insert(83, "eighty-three");
	bst.insert(87, "eighty-seven");
	bst.insert(65, "sixty-five");
	cout << "My BST tree size is: " << bst.size() << endl;
	bst.print();
	cout << "My tree's structure is (tests my changes to the print function)" << endl;
	cout << "Inorder printing of my tree\n(tests my right threads and printInorder function):  " << endl;
	bst.printInorder();
	cout << "Reverse order printing of my tree\n(tests my left threads and printReverse function):" << endl;
	bst.printReverse();
	return 0;

}
