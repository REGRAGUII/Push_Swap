#include <stdio.h>
#include <stdlib.h>

typedef struct s_list {
    int content;
    int index;
    struct s_list *next;
} t_list;

static void bubble_sort(int *array, int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap array[j] and array[j + 1]
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

static void indexing(t_list **a, int *array, int size) {
    t_list *ls;
    int i;

    ls = *a;
    while (ls) {
        i = 0;
        while (i < size) {
            if (ls->content == array[i]) {
                ls->index = i;
                break;
            }
            i++;
        }
        ls = ls->next;
    }
}

static void sort_array(t_list **a, int size) {
    int *array;
    int i;
    t_list *current;

    array = (int *)malloc(sizeof(int) * size);
    if (!array)
        return;

    current = *a;
    i = 0;
    while (current) {
        array[i] = current->content;
        i++;
        current = current->next;
    }

    bubble_sort(array, size);
    indexing(a, array, size);
    free(array);
}

// Helper function to create a new node
t_list *create_node(int content) {
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    new_node->content = content;
    new_node->index = -1; // Initialize index to -1
    new_node->next = NULL;
    return new_node;
}

// Helper function to print the list (for testing purposes)
void print_list(t_list *list) {
    while (list) {
        printf("Content: %d, Index: %d\n", list->content, list->index);
        list = list->next;
    }
}

int main() {
    // Creating a sample linked list: 10 -> 30 -> 20
    t_list *node1 = create_node(10);
    t_list *node2 = create_node(30);
    t_list *node3 = create_node(20);
    node1->next = node2;
    node2->next = node3;
    t_list *list = node1;

    // Print the list before sorting and indexing
    printf("Before sorting and indexing:\n");
    print_list(list);

    // Sort and index the list
    sort_array(&list, 3);

    // Print the list after sorting and indexing
    printf("After sorting and indexing:\n");
    print_list(list);

    // Free allocated memory for the list
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
