#include "s21_calc.h"

// int main() {
//   const char *str = "ln(2)";
//   double x = 30;
//   base(str, x);
//   return 0;
// }

// void base(const char *str, double x) {
//   if (!valid(str)) {
//     stack_ready *calc = {0};
//     polish(str, &calc);
//     // printf("\n\nПЕРЕВЕРНУТЫЙ СТЕК ДЛЯ ВЫЧИСЛЕНИЙ\n");
//     // print_ready(calc);
//     printf("\n\nRESULT = %lf\n", my_calc(calc, x));
//   } else
//     printf("ОШИБКА ВВОДА\n");
// }

// Вычисляеммммм))))))
double my_calc(stack_ready *calc, double cur_x) {
  double res = 0;
  stack_ready *result = {0};
  while (calc != NULL) {
    // ПОКА ЧИСЛА ИЛИ Х, перекладываем в итоговый стек
    if (calc->operand == 0) {
      if (calc->x) {
        push_ready(&result, 0, cur_x, 0, 0);
      } else
        push_ready(&result, 0, calc->num, 0, 0);
      pop_ready(&calc);
    } else if (calc->operand < 7) {
      double a = pop_ready(&result);
      double b = pop_ready(&result);
      double r = calculator(b, a, calc->operand);
      push_ready(&result, 0, r, 0, 0);
      pop_ready(&calc);
    } else if (calc->operand > 8) {
      double a = pop_ready(&result);
      double r = calculator(0, a, calc->operand);
      push_ready(&result, 0, r, 0, 0);
      pop_ready(&calc);
    }
  }
  res = result->num;
  pop_ready(&result);
  return res;
}

// Вычисления
double calculator(double a, double b, int oper) {
  double res = 0;
  if (oper == PLUS)
    res = a + b;
  else if (oper == MINUS)
    res = a - b;
  else if (oper == MUL)
    res = a * b;
  else if (oper == DIV)
    res = a / b;
  else if (oper == MOD)
    res = fmod(a, b);
  else if (oper == SIN)
    res = sin(b);
  else if (oper == COS)
    res = cos(b);
  else if (oper == TAN)
    res = tan(b);
  else if (oper == ASIN)
    res = asin(b);
  else if (oper == ACOS)
    res = acos(b);
  else if (oper == ATAN)
    res = atan(b);
  else if (oper == POW)
    res = pow(a, b);
  else if (oper == SQRT)
    res = sqrt(b);
  else if (oper == LOG)
    res = (double)logl(b);
  else if (oper == LN)
    res = (double)log10l(b);
  return res;
}

void polish(const char *str, stack_ready **calc) {
  int current_operand = 0;  // текущий операнд
  stack_ready *ready = {0};  ///<  инициализация стэка с операндами
  stack_support *support = {0};  ///<  инициализация стэка с операторами

  // Основной цикл парсинга входной строки выражения
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ') i++;
    if (is_number(str[i])) {
      push_ready(&ready, 0, parse_number(str, &i), 0, 0);
    } else if (str[i] == 'x') {
      push_ready(&ready, 1, 0, 0, 0);
    } else if (is_oper(str[i])) {
      current_operand = which_oper(str, &i);
      if (str[i] != ')') {  // кладем все в саппорт, кроме закрывающей скобки
        if (str[i] == '-' || str[i] == '+') {  // УНАРНЫЙ МИНУС/ПЛЮС
          if (i == 0 || (i > 0 && str[i - 1] == '('))
            push_ready(&ready, 0, 0, 0, 0);
        }
        if (support != NULL && priority_oper(str[i]) <= support->priority &&
            current_operand != 7 && current_operand != 8) {
          push_ready(&ready, 0, 0, support->operand,
                     support->priority);  // добавляем в ready высший приоритет
          if (support != NULL)
            pop_support(&support);  // удаляем высший приоритет из support
        }
        push_support(
            &support, current_operand,
            priority_oper(str[i]));  // кладем в саппорт текущий операнд
      } else {  // если встретили закрывающую скобку
        while (support->operand != OPEN_BR) {
          push_ready(&ready, 0, 0, support->operand, support->priority);
          if (support != NULL) pop_support(&support);
        }
        pop_support(&support);  // удаляем закрывающую тоже
      }
    } else
      push_support(&support, current_operand, priority_oper(str[i]));
  }
  while (support != NULL) {  // ЗАБИРАЕМ ОСТАТКИ ИЗ SUPPORT
    push_ready(&ready, 0, 0, support->operand, support->priority);
    if (support != NULL) pop_support(&support);
  }
  // ВЫВОД
  // print_ready(ready);
  // printf("\n");
  // if (support != NULL)
  //   print_support(support);
  // else
  //   printf("SUPPORT пустой\n");
  while (ready != NULL) {  // ПЕРЕВОРАЧИВАЕМ СТЕК
    push_ready(calc, ready->x, ready->num, ready->operand, ready->priority);
    pop_ready(&ready);
  }
}

// получаем число
double parse_number(const char *string, int *i) {
  double number = 0;  // для записи результата
  char temp_value[256] = {'\0'};
  char *digits = "0123456789.";  // сравниваем с этим массивом
  char *begin = (char *)string + *i;
  size_t len_numb =
      strspn(begin, digits);  // Вычисляет длину начального сегмента str1,
                              // который полностью состоит из символов str2.
  for (size_t j = 0; j < len_numb; j++) {
    temp_value[j] = *(begin + j);
    *i += 1;
  }
  *i -= 1;
  number = atof(temp_value);
  return number;
}

int priority_oper(char c) {
  int res = 0;
  if (c == '+' || c == '-')
    res = 1;
  else if (c == '*' || c == '/' || c == '%')
    res = 2;
  else if (c == '^')
    res = 3;
  else if (strchr("sctoialqngr", c))
    res = 4;
  return res;
}
// проверяет, если цифра
int is_number(char c) {
  int res = 0;
  if (c > 47 && c < 58) {
    res = 1;
  }
  return res;
}

int is_oper(char c) {
  int res = 0;
  if (strchr("sctoilaqngr+-*/%^)(", c)) res = 1;
  return res;
}

int which_oper(const char *str, int *i) {
  int res = 0;
  if (str[*i] == '+')
    res = PLUS;
  else if (str[*i] == '-')
    res = MINUS;
  else if (str[*i] == '*')
    res = MUL;
  else if (str[*i] == '/')
    res = DIV;
  else if (str[*i] == '%')
    res = MOD;
  else if (str[*i] == '^')
    res = POW;
  else if (str[*i] == '(')
    res = OPEN_BR;
  else if (str[*i] == ')')
    res = CLOSE_BR;
  else if (strncmp(str, "sin(", 4) == 0) {
    *i += 2;
    res = SIN;
  } else if (strncmp(str, "cos(", 4) == 0) {
    *i += 2;
    res = COS;
  } else if (strncmp(str, "tg(", 3) == 0) {
    *i += 1;
    res = TAN;
  } else if (strncmp(str, "acos(", 5) == 0) {
    *i += 3;
    res = ACOS;
  } else if (strncmp(str, "asin(", 5) == 0) {
    *i += 3;
    res = ASIN;
  } else if (strncmp(str, "atan(", 5) == 0) {
    *i += 3;
    res = ATAN;
  } else if (strncmp(str, "sqrt(", 5) == 0) {
    *i += 3;
    res = SQRT;
  } else if (strncmp(str, "ln(", 3) == 0) {
    *i += 1;
    res = LN;
  } else if (strncmp(str, "log(", 4) == 0) {
    *i += 2;
    res = LOG;
  }
  return res;
}

// РАБОТА СО СТЕКОМ

// ДОБАВЛЕНИЕ В КОНЕЦ
// добавление в конец стека с итоговой польской нотацией
void push_ready(stack_ready **ready, bool is_x, double value, int oper,
                int prior) {
  stack_ready *up = calloc(1, sizeof(stack_ready));
  if (up != NULL) {
    up->x = is_x;
    up->num = value;
    up->operand = oper;
    up->priority = prior;
    up->down = *ready;
    *ready = up;
  }
}

// добавление в конец стека с очередью операндов
void push_support(stack_support **support, int oper, int prior) {
  stack_support *up = calloc(1, sizeof(stack_support));
  up->operand = oper;
  up->priority = prior;
  up->down = *support;
  *support = up;
}

// УДАЛЕНИЕ С КОНЦА
double pop_ready(stack_ready **ready) {
  stack_ready *up = *ready;
  double res = (*ready)->num;
  *ready = up->down;
  free(up);
  return res;
}

// double peek_ready(stack_ready **ready) { return (*ready)->num; }

// удаление с конца стека с очередью операндов
void pop_support(stack_support **support) {
  stack_support *up = *support;
  *support = up->down;
  free(up);
}

// ПЕЧАТЬ СТЕКА
// печать стека READY
// void print_ready(stack_ready *ready) {
//   stack_ready *up = ready;
//   while (1) {
//     if (up->x == 1)
//       printf("x\n");
//     else if (up->operand == 0)
//       printf("%lf\n", up->num);
//     else
//       printf("%d\n", up->operand);
//     if (up->down == NULL) break;
//     up = up->down;
//   }
// }

// // печать стека SUPPORT
// void print_support(stack_support *support) {
//   stack_support *up = support;
//   while (1) {
//     printf("%d\n", up->operand);
//     if (up->down == NULL) {
//       break;
//     }
//     up = up->down;
//   }
// }

// ДОДЕЛАТЬ ВАЛИДАЦИЮ
int valid(const char *str) {
  int err = 0;
  int current_operand = 0;
  int count_open_br = 0;   // счетчик открытых скобок
  int count_close_br = 0;  // счетчик закрытых скобок

  bool num = 0, un = 0, bin = 0, dot = 0, op_br = 0;

  if (str[0] == '\0')
    err = 1;
  else {
    for (int i = 0; str[i] != '\0' && !err; i++) {
      if (str[i] == ' ') i++;

      if (str[i] == '(') {  // ПРОВЕРКа КОЛ-ВА СКОБОК
        count_open_br++;
        op_br = 1;
      } else if (str[i] == ')') {
        if (op_br) err = 1;
        count_close_br++;
      } else if (is_number(str[i]) || str[i] == 'x') {
        num = 1, un = 0, bin = 0, op_br = 0;
      } else if (str[i] == '.') {
        if (!num)
          err = 1;
        else if (num && dot)
          err = 1;
        num = 0, un = 0, bin = 0, dot = 1, op_br = 0;
      } else if (is_oper(str[i])) {
        current_operand = which_oper(str, &i);
        if (current_operand > 8) {  // ( СКОБКА ПОСЛЕ ФУНКЦИИ
          num = 0, un = 1, bin = 0, dot = 0, op_br = 0;
        } else if (current_operand < 7 &&
                   current_operand != 0) {  // ОПЕРАТОР В КОНЦЕ СТРОКИ
          if ((current_operand == 1 ||  // УНАРНЫЙ МИНУС ИЛИ ПЛЮС
               current_operand == 2) &&
              (i == 0 || op_br))
            err = 0;
          else if (str[i + 1] == '\0' || bin || un || !num)
            err = 1;
          num = 0, un = 0, bin = 1, dot = 0, op_br = 0;
        } else if (current_operand == 0)
          err = 1;
      } else
        err = 1;
      if (count_open_br < count_close_br) err = 1;
    }

    // ПРОВЕРКа КОЛ-ВА СКОБОК
    if (count_open_br != count_close_br) err = 1;
  }
  return err;
}

void kredit_an(double sum, int month, double proz, double *res_mon,
               double *res_proz, double *res_total) {
  *res_mon = sum * ((proz / 1200) / (1 - pow(1 + (proz / 1200), -month)));
  *res_total = *res_mon * month;
  *res_proz = *res_total - sum;
}

void kredit_dif(double sum, int month, double proz, double *res_begin,
                double *res_end, double *res_proz, double *res_total) {
  double pay = sum / month;
  *res_begin = pay + sum * proz / (100 * 12);

  for (int i = 0; i < month; i++) {
    *res_end = pay + (sum - (pay * i)) * proz / 12 / 100;
    *res_total += *res_end;
  }
  *res_proz = *res_total - sum;
}
