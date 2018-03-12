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

void inorder(TreeNode* r,int level)
{
	if(!r){
		level-=1;
		return;
	}
	level+=1;
	inorder(r -> right,level);
	level-=1;
	for(int i = 0;i<level;i++)
		cout << "...";
	cout << "* ";
	cout << r->val << endl;
	level+=1;
	inorder(r -> left,level);
}


int main()
{
  TreeNode* root = 0;
  int n,x;
  cin >> n;
  for(int i = 0;i<n;i++)
  {
	  cin >> x;
	  insert(root,x);
  }
  inorder(root,0);
}