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
	void insert();/**Вставка елемента*/
	void insertfix(node*);
	void leftrotate(node*);/**Правий поворот*/
	void rightrotate(node*);/**Лівий поворот*/
	void disp();/**Показати дерево*/
	void display(node*);
private:
	node* root; /** Вказівник на корінь*/
	node* q;


};
