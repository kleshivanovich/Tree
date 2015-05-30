
#include "main.h"
#define NULL 0

Tree::Tree() : value(0), parent(NULL), children(NULL), childrenCount(0) {
}

Tree::Tree(int value, Tree* parent) {
	this->value = value;
	this->parent = parent;
	if (parent) parent->addChild(this);
	this->children = NULL;
	this->childrenCount = 0;
}

void Tree::addChild(Tree* elem) {
	if(!childrenCount) {
		children = new Tree*[1];
		children[0] = elem;
		childrenCount++;
	}	else {
    Tree** a = new Tree*[childrenCount + 1];
		for(int i = 0; i < childrenCount; i++) {
			a[i] = children[i];
		}
		a[childrenCount] = elem;
		childrenCount++;
		delete [] children;
		children = a;
	}
}

void Tree::printChildren() const {
  cout << "This ¹" << value << "\nChildren: ";
	if (children)
	{
		for (int i = 0; i < childrenCount; i++)
		{
			cout << children[i]->value << " ";
		}
	}
	else cout<<"NULL";
	cout<<"\n";
}

int Tree::getChildrenCount() const {
  return childrenCount;
}

void Tree::printValueOne() const {
  cout << value << " ";
  for (int i = 0; i < childrenCount; i++){
    children[i]->printValueOne();
  }
}

void Tree::printValueTwo() const {
  for (int i = 0; i < childrenCount; i++){
    children[i]->printValueTwo();
  }
  cout << value << " ";
}

void Tree::printValueThree() const {
  int j = 0;
  for (int i = 0; i < childrenCount; i++){
    children[i]->printValueThree();
    if (!j) cout << value << " ";
    j++;
  }

  if (!j) cout << value << " ";
}