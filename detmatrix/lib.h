#ifndef ___LIB_H___
#define ___LIB_H___

int calculateDeterm(int** matrix, int size);
void test_determ();
int** random_create(int n);
void show_matrx(int** a, int n);
void free_matrix(int** matrx, int n);
#endif
