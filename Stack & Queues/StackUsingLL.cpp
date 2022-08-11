#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node*next;
	node(int d){
		data = d;
		next = NULL;
	}
};

class Stack{
private:
	node*head;
	int len;
public:
	Stack(){
		head = NULL;
		len = 0;
	}

	void push(int d){
		if(head == NULL){
			head = new node(d);
			len++;
		}
		else{
			//head is already there , we are inserting at front
			node*n = new node(d); //created a new node
			n->next = head;
			head = n;
			len++;
		}
	}

	void pop(){
		if(head == NULL){
			return;
		}
		else if(head->next == NULL){
			//we have a single node
			delete head ;
			head = NULL;
			len--;
		}
		else{
			node*n = head; //set the pointer to head
			head = head->next;
			delete n;
			len--;
		}
	}

	bool empty(){
		return head == NULL;
	}

	int size(){
		return len;
	}

	int top(){
		return head->data;
	}
};

int main(){

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	Stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);	

	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}

	return 0;
}