#pragma once


using namespace std;

template <class T> class Node {
	private:
		Node<T> * left;
		Node<T> * right;
		T value;

	public:
		Node(T v) {
			this->value = v;
			this->left = nullptr;
			this->right = nullptr;
		};

		~Node() {};

		void setLeft(Node *n) {
			this->left = n;
		};

		void setRight(Node *n) {
			this->right = n;
		};

		Node* getLeft() {
			return this->left;
		};

		Node* getRight() {
			return this->right;
		};

		void setValue(T v) {
			this->value = v;
		};

		T getValue() {
			return this->value;
		};

		Node* newLeft(T v) {
			Node *temp = new Node(v);
			this->setLeft(temp);
			return this->getLeft();
		};

		Node* newRight(T v) {
			Node *temp = new Node(v);
			this->setRight(temp);
			return this->getRight();
		};
};
