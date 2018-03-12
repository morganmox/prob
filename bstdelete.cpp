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

void insert(TreeNode*& r, TreeNode*& x)
{
  if(!r)
    r = x;
  else if(x->val < r->val)
	insert(r -> left,x);
  else if(x->val > r->val)
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

TreeNode* findmin(TreeNode* r)
{
	TreeNode* root = r;
	while(root -> left != NULL)
		root = root -> left;
	return root;
}

TreeNode* deleto(TreeNode* r, valueType x)
{
	if(r == NULL) return r;
	else if(x < r -> val) r -> left = deleto(r -> left,x);
	else if(x > r -> val) r -> right = deleto(r -> right,x);
	else
	{
		if(r -> left == NULL && r -> right == NULL)
		{
			delete r;
			r = NULL;
		}
		else if(r -> left == NULL)
		{
			struct TreeNode *tmp = r;
			r = r -> right;
			delete tmp;
		}
		else if(r -> right == NULL)
		{
			struct TreeNode *tmp = r;
			r = r -> left;
			delete tmp;
		}
		else
		{
			TreeNode* tmp = findmin(r -> right);
			r -> val = tmp -> val;
			r -> right = deleto(r -> right,tmp -> val);
		}
	}
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
		  TreeNode* newnode = new TreeNode(y);
		  insert(root,newnode);
	  }else if (x==2){
		  if(find(root,y))
			  cout << "1" << endl;
		  else
			  cout << "0" << endl;
	  }else if (x==3){
		  if(find(root,y))
			root = deleto(root,y);
	  }
  }
}