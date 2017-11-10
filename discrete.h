#ifndef DISCRETE_H_INCLUDED
#define DISCRETE_H_INCLUDED

struct node
{
    int vertex;
    struct node* next;
};

struct node* createNode(int n);

struct Graph
{
    int numVertices;
    struct node** adjLists;
};

struct Graph* createGraph(int vertices);

void addEdge(struct Graph* graph, int start, int dest);
void printGraph(struct Graph* graph);

int binary(int x);  //Decimal to binary conversion
int decimal(int x); //Binary to decimal conversion
int factorial(int x);   //Factorial of a number
float binCoefficient(int x, int y); //Binomial coefficient
int simplePermutation(int x);   //Simple permutation
float repPermutation(int x, int y);  //Permutation with repetition
float simpleArr(int x, int y);  //Simple arrangement
void fibonacci(int x);  //Fibonacci series
void pascal(int x); //Pascal's triangle
int gcd(int x, int y);  //Greatest common divisor (Euclidean algorithm)
float probability(int x, int y); //Probability
void cryptASC(char word[]); //Char to ASCII conversion
void decryptASC(int *numbers); //ASCII to char conversion

#endif // DISCRETE_H_INCLUDED
