#include <iostream>

using namespace std;

typedef int valueType;

struct TreeNode
{
  valueType val;
  TreeNode* left;
  TreeNode* right;

  TreeNode(valueType val, TreeNode* left=0, TreeNode* right=0)
    : val(val), left(left), right(right) {}
};

void insert(TreeNode*& r, valueType x)
{
  if(!r)
    r = new TreeNode(x);
  else if(x < r->val)
	insert(r -> left,x);
  else if(x > r->val)
	insert(r -> right,x);
}

TreeNode* find(TreeNode* r, valueType x)
{
	if(!r)
		return NULL;
	else if(x > r -> val)
		return find(r->right,x);
	else if(x < r -> val)
		return find(r->left,x);
	else if(x == r -> val)
		return r;
	else
		return r;
}

int main()
{
  TreeNode* root = 0;
  int n,x,y;
  cin >> n;
  for(int i = 0;i<n;i++)
  {
	  cin >> x >> y;
	  if(x==1){
		  insert(root,y);
	  }else{
		  if(find(root,y))
			  cout << "1" << endl;
		  else
			  cout << "0" << endl;
	  }
  }
}