#include <bits/stdc++.h>>

using namespace std;

struct bst {
  int val;
  struct bst *llink;
  struct bst *rlink;
};

struct bst *createNode(int val) {
  struct bst * node  = new bst();
  node->val = val;
  node->llink = NULL;
  node->rlink = NULL;
}

int main() {
  struct bst *root = createNode(10);
  root->llink = createNode(20);
  std::cout << root->llink->val << std::endl;
  return 0;
}
