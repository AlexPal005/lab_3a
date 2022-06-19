#pragma once
#include <iostream>
using namespace std;
/**
*  Структура вузла, що містить ключ, вказівники на батька та потомків, колір вузла
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
	/**Вставка елемента*/
	void insert(int z);
	void insertfix(node*);
	/**Лівий поворот*/
	void leftrotate(node*);
	/**Правий поворот */
	void rightrotate(node*);
	/**Показати дерево*/
	void disp();
	void display(node*);
	/**Видалити елемент*/
	void del(int val);
	void delfix(node* p);
	node* successor(node*);
	/**Пошук елемента*/
	node* search(int value);
private:
	/** Вказівник на корінь*/
	node* root; 
	node* q;


};
