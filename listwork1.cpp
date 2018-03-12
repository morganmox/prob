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
	char ID;
	cin >> N;
	for(int i = 0;i<N;i++)
	{
		cin >> ID >> input;
		if(ID == 'I')
		{
			count+=1;
			ListNode* newnode = new ListNode(input);
			newnode -> next = header -> next;
			header -> next = newnode;
		}else if(input <= count){
			for(int i = 0;i < input -1 ;i++)
			{	
			//	cout << "this box value = " << header -> value << endl;
				header = header -> next;
			}
			ListNode* tmp = header -> next;
			header -> next = tmp -> next;
			//cout << "deleting " << tmp -> value << endl;
			delete tmp;
			header = temp;
			count -= 1;
			//cout << "total box = " << count << endl;
		}
	}
	header = header -> next;
	while(header != NULL)
	{
		cout << header -> value << endl;
		header = header -> next;
	}
}