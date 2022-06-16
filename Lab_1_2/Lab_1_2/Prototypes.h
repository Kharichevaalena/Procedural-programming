#ifndef Lab_1_2_H
#define Lab_1_2_H

//главное меню
void Main_menu();

// 1 семинар
void work_array();
int check_size();
void inputarray(int, double*);
double array_sum(int, double*);
int count_negative_elements(int, double*);
double mode_of_output(int, int, double*);
double Prod_max_min(int, double*);
int max_for_product(int, double*);
int min_for_product(int, double*);
double count_product(int, int, double*);
void sort_array(int, double*); // не сортирует, а вызывает функцию, которая сортирует
int count_same_elements(int, double*);
double* sort_by_choice(int, int, double*);
void outputarray(int, double*);

// 2 семинар
void work_matrix();
int check_rows();
int check_columns();
void inputmatrix(int, int , int**);
int nonzero_colums(int, int, int**);
void sort_characteritic(int,int,int**); // не сортирует, а вызывает функцию, которая сортирует
int** sort_rows(int*, int, int, int**);
void output_matrix(int, int, int**);

// 3 семинар
void work_string();
void inputstring(char*, char*);
void output_string(char*, char*, int *, int, int *);

#endif