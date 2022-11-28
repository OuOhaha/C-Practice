#include <stdio.h>
#include <math.h>

//4_01
size_t point[3];
unsigned float avg = 0;
for(int i = 0; i < 3; i++)
{
  scanf("%zu", &point[i]);
  avg += sqrt(point[i]) * 10.0 / 3.0;
}
printf("%.2f", avg);

//4_02
size_t year = 0;
unsigned float interest_o = 0.12;
unsigned double principle = 10000, value = 10000, limit, interest_n;
limit = principle * 1.50;
while(principle <= limit)
{
  year++;
  value *= (1 + interest_o);
  interest_n = value / principle;
  printf("第 %zu 年 利率：%.2lf 本利和：%.2lf\n", year, interest_n, value);
}

//4_03
size_t import, defective_value;
scanf("%zu%zu", &import, &defective_value);
if(import > 5000)
{
  if(defective_value / import > 0.05) printf("退貨數量為 %zu 個", import);
  else if(defective_value / import <= 0.02) puts("退貨數量為 0 個");
  else printf("%zu", defective_value);
}
else
{
  if(defective_value / import > 0.06) printf("退貨數量為 %zu 個", import);
  else if(defective_value / import <= 0.03) puts("退貨數量為 0 個");
  else printf("%zu", defective_value);
}

//4_04
size_t n, total;
printf("N=");
scanf("%zu", &n);
if(n % 2 == 1)
{
  for(int i = 0, i <= N / 2; i++) total += 2 * i + 1;
}
else
{
  for(int i = 0, i <= N / 2; i++) total += 2 * i + 2;
}
printf("%zu", total);

//4_05
size_t num = 1;
for(int i = 0; i < 6 ; i++)
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
unsigned double total = 0;
printf("N= ");
scanf("%zu", &n);
if(n % 2 == 1)
{
  while(i <= n) total += 1 / i;
}
else
{
  while(i <= n) total += 1 / 2 / i;
}
printf("%.6lf", total);

//4_07
