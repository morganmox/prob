#include <iostream>
using namespace std;

struct ListNode {
  int value;
  ListNode* next;
  
  ListNode(int v,ListNode* n = 0)
	:value(v),next(n)
  {}
};

int main()
{
	ListNode* header = new ListNode(0);
	ListNode* temp = header;
	int N,input,count = 0;
	string ID;
	cin >> N;
	for(int i = 0;i<N;i++)
	{
		cin >> ID ;
		if(ID == "li")
		{
			count+=1;
			cin >> input;
			ListNode* newnode = new ListNode(input);
			newnode -> next = header -> next;
			header -> next = newnode;
		}else if (ID == "ri"){
			count +=1;
			cin >> input;
			ListNode* newnode = new ListNode(input);
			while(header -> next != NULL)
				header = header -> next;
			header -> next = newnode;
			header = temp;
		}else if (ID == "lr"&& count >1){
			ListNode* tmp = header -> next;
			header -> next = tmp -> next;
			ListNode* alternode = new ListNode(tmp -> value);
			delete tmp;
			while(header -> next != NULL)
			{
				header = header -> next;
			}
			header -> next = alternode;
			header = temp;
		}else if (ID == "rr"&& count >1){
			while(header -> next -> next != NULL)
				header = header -> next;
			ListNode* alternode = new ListNode(header -> next -> value);
			header -> next = NULL;
			header = temp;
			alternode -> next = header -> next;
			header -> next = alternode;
		}
	}
	if(count >=1)
		header = header -> next;
	while(header -> next != NULL)
	{
		cout << header -> value << endl;
		header = header -> next;
	}
	cout << header -> value << endl;
}