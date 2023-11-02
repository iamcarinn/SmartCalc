#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI 3.141592653589793

enum opers {
  PLUS = 1,
  MINUS = 2,
  MUL = 3,
  DIV = 4,
  MOD = 5,
  POW = 6,
  OPEN_BR = 7,
  CLOSE_BR = 8,
  SIN = 9,
  COS = 10,
  TAN = 11,
  ASIN = 12,
  ACOS = 13,
  ATAN = 14,
  SQRT = 15,
  LOG = 16,
  LN = 17
};

// стек с операндами READY
typedef struct stack_ready {
  bool x;
  double num;
  int operand;
  int priority;
  struct stack_ready *down;  // указатель на следующий элемент списка
} stack_ready;

// стек с операторами и скобками SUPPORT
typedef struct stack_support {
  char operand;
  int priority;
  struct stack_support *down;  // указатель на следующий элемент списка
} stack_support;

void base(const char *str, double x);
int valid(const char *str);
int is_number(char c);
int which_oper(const char *str, int *i);
int is_oper(char c);
void polish(const char *str, stack_ready **calc);
int priority_oper(char buf);
double parse_number(const char *string, int *i);
double calculator(double a, double b, int oper);
double my_calc(stack_ready *calc, double cur_x);
// double result(stack_ready *ready, double x);

void push_ready(stack_ready **ready, bool is_x, double value, int oper,
                int prior);
void push_support(stack_support **support, int oper, int prior);
double pop_ready(stack_ready **ready);
void pop_support(stack_support **support);
void print_ready(stack_ready *ready);
void print_support(stack_support *support);

void kredit_an(double sum, int month, double proz, double *res_mon,
               double *res_proz, double *res_total);
void kredit_dif(double sum, int month, double proz, double *res_begin,
                double *res_end, double *res_proz, double *res_total);