// written by OuOhaha

#include <stdio.h>
#include <math.h>
#include <time.h>

size_t factorial(size_t n)
{
  size_t total = 1;
  for(size_t i = 1; i <= n; i++) total *= i;
  return total;
}

//4_01
size_t point[3];
double avg = 0;
for(int i = 0; i < 3; i++)
{
  scanf("%zu", &point[i]);
  avg += (sqrt(point[i]) * 10) / 3.0;
}
printf("%.2f ", avg);
if(avg >= 60) printf("及格");
else printf("不及格");

//4_02
size_t year = 0;
float interest_o = 0.12;
double principle = 10000, value = 10000, limit, interest_n;
limit = principle * 1.50;
while(value <= limit)
{
  year++;
  value *= (1 + interest_o);
  interest_n = value / principle;
  printf("第 %zu 年 利率：%.2lf 本利和：%.2lf\n", year, interest_n, value);
}

//4_03
float import, defective_value;
scanf("%f%f", &import, &defective_value);
if(import <= 5000)
{
  if(defective_value / import > 0.05) printf("退貨數量為 %f 個", import);
  else if(defective_value / import <= 0.02) puts("退貨數量為 0 個");
  else printf("%.0f", defective_value);
}
else
{
  if(defective_value / import > 0.06) printf("退貨數量為 %f 個", import);
  else if(defective_value / import <= 0.03) puts("退貨數量為 0 個");
  else printf("%.0f", defective_value);
}

//4_04
size_t n, total = 0;
printf("N=");
scanf("%zu", &n);
if(n % 2 == 1) for(int i = 1; i <= n; i += 2) total += i;
else for(int i = 2; i <= n; i += 2) total += i;
printf("%zu", total);

//4_05
size_t num = 1;
for(int i = 0; i <= 6 ; i++)
{
  for(int j = 0; j < i; j++)
  {
    printf("%3d", num);
    num++;
  }
  puts("");
}

//4_06
size_t n, i = 1;
double total = 0;
printf("N= ");
scanf("%zu", &n);
if((n % 2) == 1)
{
  while(i <= n)
  {
    total += 1.0 / i;
    i += 2;
  }
}
else
{
  i = 2;
  while(i <= n)
  {
    total += 1.0 / i;
    i += 2;
  }
}
printf("%.6lf", total);

//4_07
for(size_t a = 1; a <= 3; a++)
  for(size_t b = 1; b <= 3; b++)
    for(size_t c = 1; c <= 3; c++)
    {
      if((a != b) && (a != c) && (b != c) && (a != 1) && (c != 1) && (c != 3))
      {
        switch (a)
        {
          case 1: puts("A <-> X"); break;
          case 2: puts("A <-> Y"); break;
          case 3: puts("A <-> Z"); break;
        }
        switch (b)
        {
          case 1: puts("B <-> X"); break;
          case 2: puts("B <-> Y"); break;
          case 3: puts("B <-> Z"); break;
        }
        switch (c)
        {
          case 1: puts("C <-> X"); break;
          case 2: puts("C <-> Y"); break;
          case 3: puts("C <-> Z"); break;
        }
      }
    }

//4_08
size_t l, triangle_num, r;
printf("The number of levels: ");
scanf("%zu", &l);
for(size_t i = 0; i <= l; i++)
{
  for(size_t k = 1; k <= l - i + 1; k++) printf("   ");
  for(size_t j = 0; j <= i; j++)
  {
    if(j != 0) printf("   ");
    r = i - j;
    triangle_num = factorial(i) / (factorial(j) * factorial(r));
    printf("%3zu", triangle_num);
  }
  puts("");
}


//4_09
size_t x, y, max, min, r;
scanf("%zu%zu", &x, &y);
if(x > y)
{
  r = x;
  x = y;
  y = r;
}
for(size_t i = 1; i <= y; i++)
{
  if((x % i == 0) && (y % i == 0)) max = i;
}
min = x * y / max;
printf("%zu\n%zu", max, min);

//4_10
size_t tao, taic, tain;
tao = 40000 + 133 * 5 * 2 * (4 - 2) - 1500 * 2;
taic = 39000;
tain = 42000 - 800 * 2;
printf("桃園: $%zu\n台中: $%zu\n台南: $%zu\n", tao, taic, tain);
if(tao > taic && tao > tain) puts("桃園");
else if(taic > tain) puts("台中");
else puts("台南");

//4_11
size_t num, r = 0;
printf("請輸入一個大於 1 的正整數：");
scanf("%zu", &num);
for(size_t i = 2; i < num; i++)
{
  if(num % i == 0)
  {
    r = i;
  }
}
if(r == 0) puts("質數！");
else
{
  for(size_t j = 1; j <= num; j++)
  {
    if(num % j == 0) printf("%zu ", j);
  }
}

//4_12
size_t n;
char a;
printf("請輸入n和符號：");
scanf("%zu %c", &n, &a);
for(size_t i = 1; i <= n; i++)
{
  for(size_t j = 1; j <= n - i; j++) printf(" ");
  for(size_t k = 1; k <= 2 * i - 1; k++) printf("%c", a);
  puts("");
}

//4_13
size_t kcal, kg = 90, need, total = 0, days = 20;
need = kg * 30 * days;
printf("請輸出第一天攝取的熱量：");
scanf("%zu", &kcal);
for(size_t i = 0; i < days; i++) total += kcal - 50 * i;
if(total > need) printf("%zu 天總熱量 %zu 大卡\n比正常人攝取熱量(%zu 大卡)還少", days, total, need);
else if(total > need) printf("%zu 天總熱量 %zu 大卡\n比正常人攝取熱量(%zu 大卡)還多", days, total, need);
else printf("%zu 天總熱量 %zu 大卡\n正常", days, total);

//4_14
size_t x, num = 0;
printf("輸入一個正整數：");
scanf("%zu", &x);
puts("正因數包括：");
for(size_t i = 1; i <= x; i++)
{
  if(x % i == 0)
  {
    num++;
    printf("%zu ", i);
  }
}
printf("\n正因數的數量：%zu", num);

//4_15
size_t year, month, day, total;
scanf("%zu%zu%zu", &year, &month, &day);
switch (month)
{
  case 1: total = day;
  case 2: total = day + 31;
  case 3: total = day + 31 + 28;
  case 4: total = day + 31 + 28 + 31;
  case 5: total = day + 31 + 28 + 31 + 30;
  case 6: total = day + 31 + 28 + 31 + 30 + 31;
  case 7: total = day + 31 + 28 + 31 + 30 + 31 + 30;
  case 8: total = day + 31 + 28 + 31 + 30 + 31 + 30 + 31;
  case 9: total = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
  case 10: total = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
  case 11: total = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
  case 12: total = day + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
}
if((((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) && month > 2) total++;
printf("It is the %zuth day.", total);

//4_16
size_t m_now, s_now, o_now, m = 69, s = 31, o = 28, o_limit = 36, limit = 128;
printf("輸入已修必修學分:");
scanf("%zu", &m_now);
printf("輸入已修選修學分:");
scanf("%zu", &s_now);
printf("輸入已修通識學分:");
scanf("%zu", &o_now);
if(m_now != 69) printf("必修學分有錯誤!");
else
{
  if(s_now < s) printf("選修學分未達\n");
  else if(o_now < o) printf("通識學分未達\n");
}

//4_17
size_t p_s, total = 21;
puts(" -------- 你不能戰勝我,不信試試 --------\n\nGame begin:\n");
while(total >= 1)
{
  printf(" -------- 目前還有火柴 %zu 根 --------\nPlayer:", total);
  scanf("%zu", &p_s);
  if(p_s > 4 || p_s < 1 || p_s > total) puts("你違規了，你取的火柴數有問題!");
  else if(total != 1)
  {
    total -= 5;
    printf("Computer:%zu\n", 5 - p_s);
  }
  else break;
}
puts("\nComputer win! Game Over!");

//4_18
size_t month = 8, birth_month;
float sale = 0.9, cost = 3580.0;
printf("請輸入生日的月份：");
scanf("%zu", &birth_month);
while(True)
{
  if(birth_month == month)
  {
    printf("您是本月的壽星\n所需支付的金額為 %.2f", cost * sale);
    break;
  }
  else if((birth_month >= 1) &&(birth_month <= 12))
  {
    printf("您不是本月的壽星\n所需支付的金額為 %.2f", cost);
    break;
  }
  else puts("您輸入了錯誤的數值，請重新輸入");
}

//4_19
size_t randNum1, randNum2, total, a[3] = {};
srand(time(NULL));
for(size_t i = 0; i < 10000; i++)
{
  randNum1 = rand() % 6 + 1;
  randNum2 = rand() % 6 + 1;
  switch (randNum1 + randNum2)
  {
    case 6: a[0]++; break;
    case 7: a[1]++; break;
    case 8: a[2]++; break;
    defaut: break;
  }
}
for(size_t j = 6; j <= 8; j++) printf("擲10000次兩個骰子和 %zu 的機率為 %.3lf\n", j, a[j - 6] / 10000.0);

//4_20
size_t m_now, s_now, o_now, m = 69, s = 31, o = 28;
printf("輸入已修必修學分:");
scanf("%zu", &m_now);
printf("輸入已修選修學分:");
scanf("%zu", &s_now);
printf("輸入已修通識學分:");
scanf("%zu", &o_now);
if(m_now > m) puts("必修學分有問題");
else if((m_now == m) && (s_now == s) && (o_now == o)) puts("已達畢業門檻");
else
{
  if(m_now < m) printf("不夠必修學分:%zu", m - m_now);
  if(s_now < s) printf("不夠選修學分:%zu", s - s_now);
  if(o_now < o) printf("不夠通識學分:%zu", o - o_now);
}

//4_21
size_t hour, total, salary = 98;
float bonus1 = 1.2, bonus2 = 1.5;
printf("請輸入工讀時數(整數):");
scanf("%zu", &hour);
if(hour <= 100) total = hour * salary;
else if(hour > 200) total = ((hour - 200) * bonus2 + 100 * bonus1 + 100) * salary;
else total = ((hour - 100) * bonus1 + 100) * salary;
printf("工讀金為%zu元", total);

//4_22
size_t n;
printf("輸入值(0~4):");
scanf("%zu", &n);
for(size_t i = 0; i <= n; i++)
{
  for(size_t j = 0; j < i; j++) printf(" ");
  for(size_t k = 2 * n + 1; k >= 2 * i + 1; k--) printf("%zu", k);
  puts("");
}

//4_23
size_t n;
printf("請輸入整數(1~10):");
scanf("%zu", &n);
for(size_t i = 0; i < n; i++)
{
  for(size_t j = 0; j < i; j++) printf(" ");
  for(size_t k = n; k > i; k--) printf("%zu", k);
  puts("");
}

//4_24
size_t t, test_num, result = 1;
printf("請輸入測試資料組數:");
scanf("%zu", &t);
while(t > 0)
{
  printf("請輸入正整數:");
  scanf("%zu", &test_num);
  while(test_num > 0)
  {
    result *= test_num % 10;
    test_num /= 10;
  }
  printf("結果:%zu\n", result);
  t--;
}

//4_25
size_t n, avg, i = 1, point;
printf("考了n科筆試:n=");
scanf("%zu", &n);
while(i <= n)
{
  printf("第%zu科筆試成績:", i);
  scanf("%zu", &point);
  avg += point;
  point = 0;
  i++;
}
avg /= n;
if(avg >= 60) printf("平均成績為%zu分 yes", avg);
else printf("平均成績為%zu分 no", avg);

//4_26
size_t a, b, test = 0, n, r = 0;
scanf("%zu%zu", &a, &b);
for(size_t i = a; i <= b; i++)
{
  n = 10;
  while(i % n == i * i % n)
  {
    n *= 10;
    if(n / 10 > i) r++;
  }
}
if(r > 0) puts("Yes");
else puts("No");

//4_27
size_t fib(size_t n)
{
  if(n == 1) return 1;
  else if(n == 2) return 2;
  else if(n == 3) return 3;
  else if(n > 3) return fib(n - 1) + fib(n - 2);
}
size_t n, total = 0;
scanf("%zu", &n);
total += fib(n);
printf("%zu", total);

//4_28
size_t n = 1, t = 0;
while(scanf("%zu", &n) != EOF)
{
  t = 0;
  if(n == 0) break;
  while(1)
  {
    if(n % 2 == 1) t++;
    else break;
    n /= 2;
  }

//4_29
size_t a, b, ap, bp, r = 0;
scanf("%zu%zu", &a, &b);
if(b == 0) printf("The denominator cannot be 0");
else
{
  if(b > a)
  {
    ap = b;
    bp = a;
  }
  else
  {
    ap = a;
    bp = b;
  }
  for(size_t i = 1; i <= bp; i++)
  {
    if((ap % i == 0) && (bp % i == 0)) r = i;
  }
  printf("%zu %zu", a / r, b / r);
}

//4_30
size_t now, want;
scanf("%zu%zu", &now, &want);
if(now > want) printf("%zu", 100 - (now - want));
else printf("%zu", want - now);

//written by OuOhaha
