#pragma once

using namespace std;

template <class T> class Tree {
	private: 
		Node<T> * root;
	public:
		Tree(Node<T> * ptr) {
			this->root = ptr;
		}
		~Tree() {};

		Node<T>* getRoot() {
			return this->root;
		}
		/*
		void insert() {

		};

		void delete() {

		};
		*/
		void PreOrder(Node<T>* root) {
			if (root == nullptr) return;
			cout << root->getValue() << endl;
			PreOrder(root->getLeft());
			PreOrder(root->getRight());
		};

		void InOrder(Node<T>* root) {
			if (root == nullptr) return;
			InOrder(root->getLeft());
			cout << root->getValue() << endl;
			InOrder(root->getRight());

		};

		void PostOrder(Node<T>* root) {
			if (root == nullptr) return;
			PostOrder(root->getLeft());
			PostOrder(root->getRight());
			cout << root->getValue() << endl;

		};
};