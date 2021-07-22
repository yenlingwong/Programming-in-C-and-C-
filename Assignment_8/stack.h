struct stack {
    unsigned int count;
    int array[12]; // Container
};

int isEmpty(struct stack *one);
void push(struct stack *one , int n);
void pop(struct stack *one);
void empty(struct stack *one);
void toBinary(struct stack *one, unsigned int n);
void printBinary(struct stack *one, unsigned int n);