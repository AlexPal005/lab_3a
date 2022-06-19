#pragma once
#include <iostream>
using namespace std;
/**
*  ��������� �����, �� ������ ����, ��������� �� ������ �� �������, ���� �����
*/
struct node {
	int key;
	node* left;
	node* right;
	node* parent;
	char color;
};
class Tree {
public:
	Tree() {
		q = NULL;
		root = NULL;
	}
	/**������� ��������*/
	void insert(int z);
	void insertfix(node*);
	/**˳��� �������*/
	void leftrotate(node*);
	/**������ ������� */
	void rightrotate(node*);
	/**�������� ������*/
	void disp();
	void display(node*);
	/**�������� �������*/
	void del(int val);
	void delfix(node* p);
	node* successor(node*);
	/**����� ��������*/
	node* search(int value);
private:
	/** �������� �� �����*/
	node* root; 
	node* q;


};
