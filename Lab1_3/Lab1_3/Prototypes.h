#ifndef Lab_1_3_H
#define Lab_1_3_H

//general
void Enter_type(char);
void Main_menu();

// task 1
template <typename Type> void work_array(Type);
int check_size();
template <typename Type> void inputarray(int, Type*);
template <typename Type> Type array_sum(int, Type*);
template <typename Type> Type mode_of_output(int, int, Type*);
template <typename Type> Type Prod_max_min(int, Type*);
template <typename Type> bool check_product(Type, int, Type*, bool);
template <typename Type> int max_for_product(int, Type*);
template <typename Type> int min_for_product(int, Type*);
template <typename Type> int count_negative_elements(int, Type*);
template <typename Type> int count_same_elements(int, Type*);
template <typename Type> Type count_product(int, int, Type*);
template <typename Type> Type* sort_by_choice(int, int, Type*);
template <typename Type> void sort_array(int, Type*);
template <typename Type> void outputarray(int, Type*);

// 2 семинар
template <typename Type> void work_matrix(Type);
int check_rows();
int check_columns();
template <typename Type> void inputmatrix(int, int, Type**);
template <typename Type> int nonzero_colums(int, int, Type**);
template <typename Type> void sort_characteristic(int, int, Type**); // не сортирует, а вызывает функцию, которая сортирует
template <typename Type> Type** sort_rows(Type*, int, int, Type**);
template <typename Type> void output_matrix(int, int, Type**);

// 3 семинар
void work_string();
void inputstring(char*, char*);
void output_string(char*, char*, int*, int, int*);

#endif