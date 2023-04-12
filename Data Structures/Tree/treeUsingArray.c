#include <stdio.h>

#define MAX_NODES 100

int tree[MAX_NODES];

// Function to initialize the tree with -1 (meaning no node)
void initialize_tree() {
    for (int i = 0; i < MAX_NODES; i++) {
        tree[i] = -1;
    }
}

// Function to add a node to the tree
void add_node(int node_value, int parent_index, int is_left_child) {
    int node_index = -1;
    
    // Search for an empty slot in the tree
    for (int i = 0; i < MAX_NODES; i++) {
        if (tree[i] == -1) {
            node_index = i;
            break;
        }
    }
    
    if (node_index == -1) {
        printf("Error: Tree is full.\n");
        return;
    }
    
    // Set the node's value and parent index
    tree[node_index] = node_value;
    
    if (parent_index >= 0 && parent_index < MAX_NODES) {
        // If the parent index is valid, set the appropriate child pointer
        if (is_left_child) {
            tree[parent_index * 2 + 1] = node_index;
        } else {
            tree[parent_index * 2 + 2] = node_index;
        }
    } else if (parent_index != -1) {
        // If the parent index is invalid, print an error message and remove the node
        printf("Error: Parent index %d is out of range.\n", parent_index);
        tree[node_index] = -1;
    }
}

// Function to print the tree in order
void print_tree(int node_index, int depth) {
    if (node_index < 0 || node_index >= MAX_NODES || tree[node_index] == -1) {
        return;
    }
    
    print_tree(node_index * 2 + 2, depth + 1);
    
    // for (int i = 0; i < depth; i++) {
    //     printf("   ");
    // }
    
    printf("%d\n", tree[node_index]);
    
    print_tree(node_index * 2 + 1, depth + 1);
}

int main() {
    initialize_tree();
    
    // Add nodes to the tree
    add_node(1, -1, 0);
    add_node(2, 0, 1);
    add_node(3, 0, 0);
    add_node(4, 1, 1);
    add_node(5, 1, 0);
    
    // Print the tree
    print_tree(0, 0);
    
    return 0;
}
