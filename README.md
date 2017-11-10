# Discrete
Discrete is a simple, yet efficient Discrete Mathematics library for the C programming language. Envisioned as a small project for applying concepts of Discrete Mathematics into programming, this library contains the following functions:

- **int binary(int x):** converts a decimal number to binary format;
- **int decimal(int x):** converts a binary number to decimal format;
- **int factorial(int x):** simple recursive calculation of the factorial of a number;
- **float binCoefficient(int x, int y):** calculates the binomial coefficient of x and y;
- **int simplePermutation(int x):** calculates x's simple (easy) permutation;
- **float repPermutation(int x):** calculates x's permutation with repetitions allowed; 
- **float simpleArr(int x, int y):** calculates the simple arrangement of x and y;
- **void fibonacci(int x):** generates the Fibonacci series up to the value of x;
- **void pascal(int x):** generates Pascal's triangle which contains x lines;
- **int gcd(int x, int y):** calculates the Greatest Common Divisor between x and y using the Euclidean algorithm;
- **float probability(int x, int y):** calculates the probability between x and y;
- **void cryptASC(char word[]):** encrypts character values into ASCII numerical values;
- **void decryptASC(int * numbers):** decrypts ASCII numerical values back to character values.

In addition to these functions, there are 4 graph functions which allow the user to experiment with and obtain some knowledge about Graph Theory, mainly regarding edges and vertices:

- **struct node * createNode(int n):** creates n nodes (vertices);
- **struct Graph * createGraph(int vertices):** creates a graph made of n vertices;
- **void addEdge(struct Graph * graph, int start, int end):** adds an edge from the starting vertex to the desired vertex;
- **void printGraph(struct Graph * graph):** prints the graph's adjacency list.

Please note, however, that the main focus of this library is not graph manipulation: this may or may not come in a new library.

