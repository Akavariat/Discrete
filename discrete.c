#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include "discrete.h"

int binary(int x)
{
    int rem, i, res = 0;

    if(x >= 0)
    {
        for(i = 1; x != 0; i *= 10)
        {
            rem = x % 2;
            x /= 2;
            res += (rem * i);
        }
    }

    else
    {
        fprintf(stderr, "\nError: number less than 0");

        exit(EXIT_FAILURE);
    }

    return res;
}

int decimal(int x)
{
    int rem, i = 0, res = 0;

    while(x != 0)
    {
        rem = x % 10;
        x /= 10;
        res += rem * pow(2, i);

        i++;
    }

    if(x < 0)
    {
        fprintf(stderr, "\nError: number less than 0");

        exit(EXIT_FAILURE);
    }

    return res;
}

int factorial(int x)
{
    if(x > 1)
    {
        return x * factorial(x - 1);
    }

    else
    {
        return 1;
    }
}

float binCoefficient(int x, int y)
{
    if((x > y) && ((x && y) >= 0))
    {
        return factorial(x)/(factorial(y) * factorial(x - y));
    }

    else if(x < y)
    {
        fprintf(stderr, "\nError: n value is less than k");

        exit(EXIT_FAILURE);
    }

    if((x < 1) || (y < 1))
    {
        fprintf(stderr, "\nError: n or k are less than 1");

        exit(EXIT_FAILURE);
    }

    return 0;
}

int simplePermutation(int x)
{
    if(x > 0)
    {
        return factorial(x);
    }

    else
    {
        fprintf(stderr, "Error: number less than 0");

        exit(EXIT_FAILURE);
    }
}

float repPermutation(int x, int y)
{
    if((x > y) && (x > 0))
    {
        return factorial(x)/factorial(y);
    }

    else if(x < y)
    {
        fprintf(stderr, "Error: the amount of repeated elements is bigger than the size of the amount of elements");

        exit(EXIT_FAILURE);
    }

    else if(y < 1)
    {
        fprintf(stderr, "Error: there are no repeated elements");

        exit(EXIT_FAILURE);
    }

    return 0;
}

float simpleArr(int x, int y)
{
    if((x > y) && (x > 0))
    {
        return factorial(x)/factorial(x - y);
    }

    else if(x < y)
    {
        fprintf(stderr, "Error: the amount of grouped elements is bigger than that of the amount of elements");

        exit(EXIT_FAILURE);
    }

    else if(y < 1)
    {
        fprintf(stderr, "Error: there are no grouped elements");

        exit(EXIT_FAILURE);
    }

    return 0;
}

void fibonacci(int x)
{
    int i, actual, prev = 1, next = 0;

    for(i = 0; i < x; i++)
    {
        if(i < 2)
        {
            actual = i;
        }

        else
        {
            actual = prev + next;
            next = prev;
            prev = actual;
        }

        printf("%d ", actual);
    }
}

void pascal(int x)
{
    int i, j, k, coef;

    if(x < 1)
    {
        fprintf(stderr, "Error: number of rows is less than 1");

        exit(EXIT_FAILURE);
    }

    for(i = 0; i < x; i++)
    {
        for(j = 1; j <= (x - i); j++)
        {
            printf(" ");
        }

        for(k = 0; k <= i; k++)
        {
            if((k == 0) || (i == 0))
            {
                coef = 1;
            }

            else
            {
                coef *= (i - k + 1)/k;
            }

            printf("%4d", coef);
        }

        printf("\n");
    }
}

struct node* createNode(int n)
{
    struct node* newNode = malloc(sizeof(struct node));

    newNode -> vertex = n;
    newNode -> next = NULL;

    return newNode;
};

struct Graph* createGraph(int vertices)
{
    int i;
    struct Graph *graph = malloc(sizeof(struct Graph));
    graph -> numVertices = vertices;

    graph -> adjLists = malloc(vertices * sizeof(struct node*));

    for(i = 0; i < vertices; i++)
    {
        graph -> adjLists[i] = NULL;
    }

    return graph;
};

void addEdge(struct Graph* graph, int start, int dest)
{
    struct node* newNode = createNode(dest);

    newNode -> next = graph -> adjLists[start];
    graph -> adjLists[start] = newNode;

    newNode = createNode(start);
    newNode -> next = graph -> adjLists[dest];
    graph -> adjLists[dest] = newNode;
}

void printGraph(struct Graph* graph)
{
    int i;

    for(i = 0; i < (graph -> numVertices); i++)
    {
        struct node* tmp = graph -> adjLists[i];

        printf("\nAdjacency list of vertex %d\n\n", i);

        while(tmp)
        {
            printf("%d -> ", tmp -> vertex);

            tmp = tmp -> next;
        }

        printf("\n");
    }
}

int gcd(int x, int y)
{
    if(y != 0)
    {
        return gcd(y, x % y);
    }

    else
    {
        return x;
    }
}

float probability(int x, int y)
{
    return (float) x/y;

    if((x < 1) || (y < 1))
    {
        fprintf(stderr, "Error: the divisor or dividend are less than 1");

        exit(EXIT_FAILURE);
    }
}

void cryptASC(char word[])
{
    int i = 0;

    while(word[i] != '\0')
    {
        printf("%d ", word[i]);

        i++;
    }

}

void decryptASC(int *numbers)
{
    int i;
    int size = sizeof(numbers)/sizeof(numbers[0]);

    for(i = 0; i < size; i++)
    {
        if(numbers[i] < 0)
        {
            fprintf(stderr, "Error: number less than 0");

            exit(EXIT_FAILURE);
        }

        else
        {
            printf("%c ", numbers[i]);
        }
    }
}
