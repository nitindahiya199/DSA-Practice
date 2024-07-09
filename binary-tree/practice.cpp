// // Binary tree representation in c++

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// void inorderTraversal(struct Node* node) {
//     if (node == nullptr) {
//         return;
//     }
//     inorderTraversal(node->left);   // Visit left subtree
//     cout << node->data << " ";     // Print node data
//     inorderTraversal(node->right);  // Visit right subtree
// }

// int main() {
//     struct Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->right = new Node(5);

//     cout << "In-order traversal of the binary tree: ";
//     inorderTraversal(root);
//     cout << endl;

//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// Preorder traversal of binary tree ...!!

// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     struct Node* right;
//     struct Node* left;
//     Node(int val){
//         data = val;
//         left = right = nullptr;
//     };
// };

// void preorder(Node* node){
//     if(node == nullptr) return;

//     cout << node->data << " ";
//     preorder(node->left);
//     preorder(node->right);
// }

// int main() {
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     cout << "Preorder traversal: ";
//     preorder(root);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------

// inorder travesal in binary tree !!

// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = right = nullptr;
//     };
// };

// void inorder(Node *node)
// {
//     if (node == nullptr)
//         return;

//     inorder(node->left);
//     cout << node->data << " ";

//     inorder(node->right);
// }

// int main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     cout << "Preorder traversal: ";
//     inorder(root);
// }

// --------------------------------------------------------------------------------------------------

// post order travesal in binary tree !!
// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val){
//         data = val;
//         left = right = nullptr;
//     };
// };

// void postorder(Node* node){
//     if(node == nullptr) return;

//     postorder(node->left);
//     postorder(node->right);
//     cout << node->data << " ";
// }

// int main(){
//     Node* root = new Node(1);

//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     postorder(root);
//     return 0;
// }

// --------------------------------------------------------------------------------------------

// breath order travesal( Level Order Traversal )

//     1
//    / \
    //   2   3
//  / \ / \
    // 4  5 6  7

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// void levelOrderTraversal(Node* root) {
//     if (root == nullptr) return;

//     queue<Node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         Node* current = q.front();
//         q.pop();
//         cout << current->data << " ";

//         if (current->left != nullptr) {
//             q.push(current->left);
//         }

//         if (current->right != nullptr) {
//             q.push(current->right);
//         }
//     }
// }

// int main() {
//     // Creating a simple binary tree
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     cout << "Level order traversal: ";
//     levelOrderTraversal(root);

//     return 0;
// }

// -------------------------------------------------------------------------------------------------

// Iterative Preorder Traversal in Binary Tree

// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val){
//         data = val;
//         left = right = nullptr;
//     }
// };

// vector<int> fn(Node* root){
//     vector<int> preorder;
//     if(root == nullptr) return preorder;

//     stack<Node*> st;
//     st.push(root);

//     while (!st.empty())
//     {
//         root = st.top();
//         st.pop();
//         preorder.push_back(root->data);

//         if(root->left != NULL) st.push(root->right);
//         if(root->right != NULL) st.push(root->left);
//     }
//     return preorder;
// }

// int main() {
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     cout << "Level order traversal: ";
//     cout << "Preorder traversal: ";
//     vector<int> result = fn(root);
//     for (int val : result) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

// --------------------------------------------------------------------------------------------------

// Iterative Inorder traversal in binary tree..!!
// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// vector<int> fn(Node *root) {
//     vector<int> inorder;
//     stack<Node *> st;
//     Node *curr = root;

//     while (curr != nullptr || !st.empty()) {
//         while (curr != nullptr) {
//             // Place pointer to a tree node on the stack before traversing the node's left subtree
//             st.push(curr);
//             curr = curr->left;
//         }

//         curr = st.top();
//         st.pop();
//         inorder.push_back(curr->data);

//         // We have visited the node and its left subtree. Now, it's right subtree's turn
//         curr = curr->right;
//     }

//     return inorder;
// }

// int main() {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     vector<int> result = fn(root);

//     for (int val : result) {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------

// Iterative Postorder Traversal using 2 stacks [left right root]

//     1
//    / \
//   2   3
//  / \ / \
// 4  5 6  7

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// vector<int> fn(Node* root) {
//     vector<int> postorder;
//     if (root == nullptr) return postorder;

//     stack<Node*> st1, st2;
//     st1.push(root);

//     while (!st1.empty()) {
//         Node* node = st1.top();
//         st1.pop();
//         st2.push(node);

//         if (node->left != nullptr) st1.push(node->left);
//         if (node->right != nullptr) st1.push(node->right);
//     }

//     while (!st2.empty()) {
//         postorder.push_back(st2.top()->data);
//         st2.pop();
//     }

//     return postorder;
// }

// int main() {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     vector<int> result = fn(root);
//     for (int val : result) {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------

// Iterative Postorder Traversal using 1 stacks [left right root]

//     1
//    / \
//   2   3
//  / \ / \
// 4  5 6  7

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// vector<int> fn(Node* root) {
//     vector<int> postorder;
//     if (root == nullptr) return postorder;

//     stack<Node*> st;
//     Node* curr = root;
//     Node* lastVisited = nullptr;

//     while (!st.empty() || curr != nullptr) {
//         if (curr != nullptr) {
//             st.push(curr);
//             curr = curr->left;
//         } else {
//             Node* topNode = st.top();
//             if (topNode->right != nullptr && lastVisited != topNode->right) {
//                 curr = topNode->right;
//             } else {
//                 postorder.push_back(topNode->data);
//                 lastVisited = topNode;
//                 st.pop();
//             }
//         }
//     }

//     return postorder;
// }

// int main() {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     vector<int> result = fn(root);
//     for (int val : result) {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// Preorder Inorder Postorder Traversals in One Traversals..!!

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// void fn(Node* root, vector<int>& pre, vector<int>& in, vector<int>& post) {
//     if (root == nullptr) return;

//     stack<pair<Node*, int>> st;
//     st.push({root, 1});

//     while (!st.empty()) {
//         auto item = st.top();
//         st.pop();

//         // This is part of pre-order
//         // Increment 1 to 2
//         // Push the left side of the tree
//         if (item.second == 1) {
//             pre.push_back(item.first->data);
//             item.second++;
//             st.push(item);

//             if (item.first->left != nullptr) {
//                 st.push({item.first->left, 1});
//             }
//         }
//         // This is a part of in-order
//         // Increment 2 to 3
//         // Push the right side of the tree
//         else if (item.second == 2) {
//             in.push_back(item.first->data);
//             item.second++;
//             st.push(item);

//             if (item.first->right != nullptr) {
//                 st.push({item.first->right, 1});
//             }
//         }
//         // Don't push item back again
//         else {
//             post.push_back(item.first->data);
//         }
//     }
// }

// int main() {
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     vector<int> pre, in, post;
//     fn(root, pre, in, post);

//     cout << "Preorder traversal: ";
//     for (int val : pre) {
//         cout << val << " ";
//     }
//     cout << endl;

//     cout << "Inorder traversal: ";
//     for (int val : in) {
//         cout << val << " ";
//     }
//     cout << endl;

//     cout << "Postorder traversal: ";
//     for (int val : post) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

// ----------------------------------------------------------------------------------------------------
//  Maximum Depth in Binary Tree

// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = right = nullptr;
//     }
// };

// // Renaming fn to maxDepth for clarity
// int maxDepth(Node *root)
// {
//     if (root == NULL)
//         return 0;

//     int lh = maxDepth(root->left);
//     int rh = maxDepth(root->right);

//     return 1 + max(lh, rh);
// }

// int main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     cout << "Maximum Depth of the tree: " << maxDepth(root) << endl;
//     return 0;
// }

// -------------------------------------------------------------------------------------------------

// determine if a binary tree is balanced or not ?

// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = right = nullptr;
//     }
// };

// int fn(Node *root)
// {
//     if (root == NULL)
//         return 0;

//     int lh = fn(root->left);
//     int rh = fn(root->right);
//     if (lh == -1 && rh == -1)
//         return -1;

//     if (abs(lh - rh > 1))
//         return -1;
// }

// int main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     int ans = fn(root);
//     if(ans == -1) {
//         cout << "this is not a balanced binary tree";
//     } else {
//         cout << "this is a balanced binary tree";
//     }
//     return 0;
// }

// -------------------------------------------------------------------------------------------------

// determine diameter of binary tree ?

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// int height(Node* root, int& diameter) {
//     if (!root)
//         return 0;

//     int lh = height(root->left, diameter);
//     int rh = height(root->right, diameter);

//     diameter = max(diameter, lh + rh);
//     return 1 + max(lh, rh);
// }

// int diameter(Node* root) {
//     int diameter = 0;
//     height(root, diameter);
//     return diameter;
// }

// int main() {
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     int ans = diameter(root);
//     cout << "The diameter of the binary tree is: " << ans << endl;

//     return 0;
// }

// -------------------------------------------------------------------------------------------------

// determine Max sum of path in binary tree?

// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = right = nullptr;
//     }
// };

// int max_path_down(Node *root, int &max_sum)
// {
//     if (!root)
//         return 0;

//     int left = max(0, max_path_down(root->left, max_sum));
//     int right = max(0, max_path_down(root->right, max_sum));

//     max_sum = max(max_sum, left + right + root->data);
//     return max(left, right) + root->data;
// }

// int max_path_sum(Node *root)
// {
//     int max_sum = INT_MIN;
//     max_path_down(root, max_sum);
//     return max_sum;
// }

// int main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     cout << "Maximum Path Sum: " << max_path_sum(root) << endl;

//     return 0;
// }

// --------------------------------------------------------------------------------------------------

// Check it two trees are Identical or Not ?

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// bool is_same_tree(Node *p, Node *q) {
//     if (p == nullptr || q == nullptr)
//         return p == q;

//     return (p->data == q->data)
//         && is_same_tree(p->left, q->left)
//         && is_same_tree(p->right, q->right);
// }

// int main() {
//     Node* root1 = new Node(1);
//     root1->left = new Node(2);
//     root1->right = new Node(3);

//     Node* root2 = new Node(1);
//     root2->left = new Node(2);
//     root2->right = new Node(3);

//     if (is_same_tree(root1, root2)) {
//         cout << "The trees are identical." << endl;
//     } else {
//         cout << "The trees are not identical." << endl;
//     }

//     return 0;
// }



// --------------------------------------------------------------------------------------------------

// Zig - Zag and spiral traversel ?

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// vector<vector<int>> zig_zag_level_order(Node* root) {
//     vector<vector<int>> result;
//     if (root == NULL) return result;

//     queue<Node*> node_queue;
//     node_queue.push(root);
//     bool left_to_right = true;

//     while (!node_queue.empty()) {
//         int size = node_queue.size();
//         vector<int> row(size);

//         for (int i = 0; i < size; i++) {
//             Node* node = node_queue.front();
//             node_queue.pop();

//             int index = left_to_right ? i : size - 1 - i;
//             row[index] = node->data;

//             if (node->left) {
//                 node_queue.push(node->left);
//             }

//             if (node->right) {
//                 node_queue.push(node->right);
//             }
//         }

//         left_to_right = !left_to_right;
//         result.push_back(row);
//     }

//     return result;
// }

// void print_zig_zag_order(vector<vector<int>> result) {
//     for (const auto& level : result) {
//         for (int val : level) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     vector<vector<int>> result = zig_zag_level_order(root);
//     print_zig_zag_order(result);

//     return 0;
// }

// -------------------------------------------------------------------------------------------

// Boundary traversal
// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// bool isLeaf(Node* node) {
//     return !node->left && !node->right;
// }

// void add_left_boundary(Node* root, vector<int>& res) {
//     Node* cur = root->left;
//     while (cur) {
//         if (!isLeaf(cur)) res.push_back(cur->data);
//         if (cur->left) cur = cur->left;
//         else cur = cur->right;
//     }
// }

// void add_right_boundary(Node* root, vector<int>& res) {
//     Node* cur = root->right;
//     vector<int> temp;
//     while (cur) {
//         if (!isLeaf(cur)) temp.push_back(cur->data);
//         if (cur->right) cur = cur->right;
//         else cur = cur->left;
//     }
//     for (int i = temp.size() - 1; i >= 0; --i) {
//         res.push_back(temp[i]);
//     }
// }

// void add_leaves(Node* root, vector<int>& res) {
//     if (isLeaf(root)) {
//         res.push_back(root->data);
//         return;
//     }
//     if (root->left) add_leaves(root->left, res);
//     if (root->right) add_leaves(root->right, res);
// }

// vector<int> print_boundary(Node* root) {
//     vector<int> res;
//     if (!root) return res;
//     if (!isLeaf(root)) res.push_back(root->data);
//     add_left_boundary(root, res);
//     add_leaves(root, res);
//     add_right_boundary(root, res);
//     return res;
// }

// int main() {
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     vector<int> boundary = print_boundary(root);
//     for (int val : boundary) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }


// -------------------------------------------------------------------------------------------

// Vertical Order Traversal of Binary Tree

// #include <iostream>
// #include <map>
// #include <queue>
// #include <set>
// #include <vector>
// using namespace std;

// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// vector<vector<int>> vertical_traversal(Node* root) {
//     // map<x-coordinate, map<y-coordinate, multiset of node values>>
//     map<int, map<int, multiset<int>>> nodes;
//     // queue of pairs {node, {x-coordinate, y-coordinate}}
//     queue<pair<Node*, pair<int, int>>> todo;
//     todo.push({root, {0, 0}}); 

//     while (!todo.empty()) {
//         auto p = todo.front();
//         todo.pop();

//         Node* node = p.first;
//         int x = p.second.first, y = p.second.second;
//         nodes[x][y].insert(node->data);

//         if (node->left) {
//             todo.push({node->left, {x-1, y+1}});
//         }
//         if (node->right) {
//             todo.push({node->right, {x+1, y+1}});
//         }
//     }

//     vector<vector<int>> ans;
//     for (auto p : nodes) {
//         vector<int> col;
//         for (auto q : p.second) {
//             col.insert(col.end(), q.second.begin(), q.second.end());
//         }
//         ans.push_back(col);
//     }
//     return ans;
// }

// int main() {
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     vector<vector<int>> result = vertical_traversal(root);
//     for (const auto& vec : result) {
//         for (int val : vec) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// -------------------------------------------------------------------------------------------

// Top view of Binary tree

// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// vector<int> top_view(Node* root) {
//     vector<int> ans;
//     if (root == nullptr) return ans; // Check if the tree is empty

//     map<int, int> mpp; // To store the first node at each horizontal distance
//     queue<pair<Node*, int>> q; // Queue to store nodes and their horizontal distances
//     q.push({root, 0});

//     while (!q.empty()) {
//         auto it = q.front();
//         q.pop();

//         Node* node = it.first;
//         int line = it.second;

//         if (mpp.find(line) == mpp.end()) // If this horizontal distance is not yet in the map
//             mpp[line] = node->data;

//         if (node->left != nullptr) // Add left child to the queue with horizontal distance - 1
//             q.push({node->left, line - 1});
//         if (node->right != nullptr) // Add right child to the queue with horizontal distance + 1
//             q.push({node->right, line + 1});
//     }

//     for (auto it : mpp) {
//         ans.push_back(it.second); // Collecting the top view nodes in the answer vector
//     }
//     return ans;
// }

// int main() {
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     vector<int> topView = top_view(root); // Corrected function call

//     for (int val : topView) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }



// -------------------------------------------------------------------------------------------


// bottom view of Binary tree


#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

vector<int> bottom_view(Node* root) {
    vector<int> ans;
    if (root == nullptr) return ans; // Check if the tree is empty

    map<int, int> mpp; // To store the last node at each horizontal distance
    queue<pair<Node*, int>> q; // Queue to store nodes and their horizontal distances
    q.push({root, 0});

    while (!q.empty()) {
        auto it = q.front();
        q.pop();

        Node* node = it.first;
        int line = it.second;

        // Update the map with the current node's data at its horizontal distance
        mpp[line] = node->data;

        if (node->left != nullptr) // Add left child to the queue with horizontal distance - 1
            q.push({node->left, line - 1});
        if (node->right != nullptr) // Add right child to the queue with horizontal distance + 1
            q.push({node->right, line + 1});
    }

    for (auto it : mpp) {
        ans.push_back(it.second); // Collecting the bottom view nodes in the answer vector
    }
    return ans;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> bottomView = bottom_view(root);

    for (int val : bottomView) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}



// -------------------------------------------------------------------------------------------