#include <stdio.h>
#include <math.h>

//2_01
int num1, num2, num3;
double avg;
scanf("%d%d%d", &num1, &num2, &num3);
avg = (num1 + num2 + num3) / 3;
printf("%.2lf", avg);

//2_02
size_t time;
time = (21 - 5) * 60 * 60;
printf("%zu", time);

//2_03
size_t a = 90, b = 95, c = 85, d = 64, e = 84;
unsigned double total, avg;
total = a + b + c + d + e;
avg = total / 5.0;
printf("%.6lf\n%.6lf", total, avg);

//2_04
double NTD, USD, GBP, trans_USD = 32.35, trans_GBP = 48.09;
scanf("%lf", &NTD);
USD = NTD * trans_USD;
GBP = NTD * trans_GBP;
printf("%.6lf\n%.6lf", USD, GBP);

//2_05
size_t upper, lower, high;
unsigned double area;
scanf("%zu%zu%zu", &upper, &lower, &high);
area = (upper + lower) * high / 2.0;
printf("%.6lf", area);

//2_06
size_t total = 0;
for(int i = 1; i <= 10; i++) total *= i;
printf("10!=%zu", total);

//2_07
size_t year;
scanf("%zu", &year);
if(year % 4 == 0) puts("It's a leap year.");
else puts("Not a leap year");

//2_08
size_t a = 1, b = 2, c = 3;
printf("A0=%zu, B0=%zu, C0=%zu", a, b, c);
printf("A1=%zu, B1=%zu, C1=%zu", a, a, b);
printf("A2=%zu, B2=%zu, C2=%zu", a * 2, b + 1, b);

//2_09
for(int i = 1; i <= 9; i++)
{
  for(int j = 1; j <= 9; j++) printf("%d*%d=%2d", j, i , i * j);
  puts("");
}

//2_10
float a, b, c, total;
scanf("%f%f%f", &a, &b, &c);
total = (pow(b, 2) - 4 * a * c) / 2 / a;
printf("%.2f", total);

//2_11
size_t black_tea = 1, milk_green = 2, pearl = 12, walk = 3;
unsigned float total;
total = walk + 5 * (black_tea + pearl / 60) + 2 * black_tea + 2 * (milk_green + pearl / 60);
printf("%.2f", total);

//2_12
size_t principle, year;
unsigned double interest_1 = 0.0063, interest_2 = 0.0066, interest_3 = 0.0069, interest_5 = 0.0075, interest_8 = 0.0084;
scanf("%zu%zu", &principle, &year);
switch (year)
{
  case 1: total = principle * (1 + interest_1 * 12);
  case 2: total = principle * (1 + interest_2 * 24);
  case 3: total = principle * (1 + interest_3 * 36);
  case 5: total = principle * (1 + interest_5 * 60);
  case 8: total = principle * (1 + interest_8 * 96);
}
printf("%lf", total);

//2_13
size_t salary = 35000, part_time, net_income;
unsigned float tax = 0.03;
part_time = ((16 - 5) + (22 - 18)) * 133;
net_income = (part_time + salary) * (1 - tax);
printf("%zu", net_income);

//2_14
unsigned double pi = 3.14159, r, circumference, area;
scanf("%lf", &r);
circumference = 2 * pi * r;
area = pi * pow(r, 2);
printf("%.6lf%.6lf", circumference, area);

//2_15
