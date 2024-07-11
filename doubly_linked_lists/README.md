0. Print list <br>

Write a function that prints all the elements of a dlistint_t list. <br>

Prototype: size_t print_dlistint(const dlistint_t *h); <br>
Return: the number of nodes <br>
Format: see example

1. List length <br>

Write a function that returns the number of elements in a linked dlistint_t list. <br>

Prototype: size_t dlistint_len(const dlistint_t *h);

2. Add node <br>

Write a function that adds a new node at the beginning of a dlistint_t list.<br>

Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n); <br>
Return: the address of the new element, or NULL if it failed

3. Add node at the end <br>

Write a function that adds a new node at the end of a dlistint_t list. <br>

Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n); <br>

Return: the address of the new element, or NULL if it failed

4. Free list <br>

Write a function that frees a dlistint_t list. <br>

Prototype: void free_dlistint(dlistint_t *head);

5. Get node at index <br>

Write a function that returns the nth node of a dlistint_t linked list. <br>

Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index); <br>
where index is the index of the node, starting from 0 <br>
if the node does not exist, return NULL
