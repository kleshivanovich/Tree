
#pragma once

#include "main.h"

class Tree {
public:
	Tree();
	Tree(int value, Tree* parent);

	void addChild(Tree * elem);
	void printChildren() const;
  void printValueOne() const;
  void printValueTwo() const;
  void printValueThree() const;
  int getChildrenCount() const;

private:

	int value;
	Tree* parent;
	Tree** children;
	int  childrenCount;
};