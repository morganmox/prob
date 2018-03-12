#include <iostream>
using namespace std;

typedef int valueType;

struct ListNode
{
  valueType val;
  ListNode* next;

  ListNode(valueType val, ListNode* next=0)
    : val(val), next(next) {}
};

class LinkedList
{
private:
  ListNode* header;

public:
  LinkedList();
  void print_list();
  void insert_back(valueType x);
  ListNode* gethead();
};

LinkedList::LinkedList()
{
  header = new ListNode(0);
}

void LinkedList::print_list()
{
  ListNode* node = header->next;
  while(node != 0) {
    cout << node->val << endl;
    node = node->next;
  }
}

void LinkedList::insert_back(valueType x)
{
	ListNode* back = new ListNode(x);
	if(header -> next == NULL){
		header -> next = back;
	}else{
		ListNode* tmp = header;
		while(header -> next != NULL){
			header = header -> next;
		}
		header -> next = back;
		header = tmp;
	}
}

ListNode* LinkedList::gethead()
{
	return header;
}

LinkedList headlist[100001];

void xtory(ListNode* x ,ListNode* y)
{
	if(y->next == NULL){
		y->next = x->next;
	}else{
		ListNode* tmp = y;
		while(y->next!=NULL)
			y=y->next;
		y->next = x->next;
		y = tmp;
	}
	x->next = NULL;
}

int main()
{
	int N,x,y;
	char NM;
	cin >> N;
	for(int i = 0;i<N;i++)
	{
		cin >> NM >> x >> y;
		if(NM == 'N'){
			headlist[y].insert_back(x);
		}else{
			xtory(headlist[x].gethead(),headlist[y].gethead());
		}
	}
	for(int i = 0;i<100001;i++)
		headlist[i].print_list();
}

