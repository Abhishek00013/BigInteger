#include<stdio.h>
#include<stdlib.h>

// Define a structure for a node in a linked list
struct node{
    int data;
    struct node* next;
};

// Define a structure for a BigInteger
struct BigInteger{
    struct node* head;
    long int length;
    char sign;
};

// Function to insert a new node at the beginning of a linked list
struct node* insert(struct node* head, int val);

// Function to insert a new element at the end of a BigInteger
void insert_tail(struct BigInteger* num, int element);

// Function to calculate the length of a linked list
long int length(struct node* head);

// Function to display a linked list in reverse order
void displayLL(struct node* link);

// Function to display a BigInteger
void display(struct BigInteger b);

// Function to initialize a BigInteger from a string
struct BigInteger initialize(char* s);

// Function to reverse a linked list
struct node* reverse(struct node* head);

// Function to compare two BigIntegers
int compare(struct BigInteger num1, struct BigInteger num2);

// Function to perform addition of two BigIntegers
struct BigInteger add(struct BigInteger num1, struct BigInteger num2);

// Function to perform subtraction of two BigIntegers
struct BigInteger sub(struct BigInteger num1, struct BigInteger num2);

// Function to perform multiplication of two BigIntegers
struct BigInteger mul(struct BigInteger num1, struct BigInteger num2);

// Function to perform division of two BigIntegers
struct BigInteger div1(struct BigInteger num1, struct BigInteger num2);

// Function to perform modulus of two BigIntegers
struct BigInteger mod(struct BigInteger num1, struct BigInteger num2);

// Function to free the memory allocated for a BigInteger
void freeL(struct BigInteger* num);
