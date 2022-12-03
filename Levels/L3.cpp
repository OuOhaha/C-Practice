#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

//3_01
size_t x, y, z;
double avg;
scanf("%zu%zu%zu", &x, &y, &z);
avg = (sqrt(x) + sqrt(y) + sqrt(z)) * 10 / 3;
printf("%.2lf", avg);

//3_02
size_t sal = 200, t = 8, goal = 20000, day;
day = 1 + (goal / (sal * t));
printf("%zu", day);

//3_03
double cm, kg, BMI;
scanf("%lf%lf", &kg, &cm);
BMI = kg / pow(cm / 100.0, 2);
if(BMI < 18.5)
  printf("%.6lf 體重過輕", BMI);
else if(BMI < 24)
  printf("%.6lf 正常範圍", BMI);
else if(BMI < 27)
  printf("%.6lf 體重過重", BMI);
else if(BMI < 30)
  printf("%.6lf 輕度肥胖", BMI);
else if(BMI < 35)
  printf("%.6lf 中度肥胖", BMI);
else
  printf("%.6lf 重度肥胖", BMI);

//3_04
size_t s, m, h, total;
scanf("%zu", &total);
h = total / (60 * 60);
m = (total - h * 60 * 60) / 60;
s = total - h * 60 * 60 - m * 60;
printf("%zu %zu %zu", h, m, s);

//3_05
size_t t, cost = 15, limit = 240;
scanf("%zu", &t);
if(t <= 30)
  printf("0");
else if(t <= ((limit / cost) + 1) * 30)
  if(t % 30 == 0)
    printf("%zu", cost * (t / 30 - 1));
  else
    printf("%zu", cost * (t / 30));
else
  printf("240");

//3_06
size_t p_s, num, round = 1, cur_num;
srand(time(NULL));
num = (rand() % 100) + 1;
printf("Guess number\n%zu. 1-100 =>", round);
while(scanf("%zu", &p_s) != num)
{
  round++;
  if(p_s == num)
  {
    printf("Bingo! You Spend %zu times.", round);
    break;
  }
  else
    if(p_s > num)
      printf("Too Big!\nGuess number\n%zu. 1-100 =>", round);
    else
      printf("Too Small!\nGuess number\n%zu. 1-100 =>", round);
}

//3_07
