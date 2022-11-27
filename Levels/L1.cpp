#include <stdio.h>
#include <math.h>

//1_01
unsigned float gas = 23.7, gallon, cost;
scanf("%f", &gallon);
cost = gallon * gas;
printf("%f", cost);

//1_02
int num1, num2, num3, sum;
scanf("%d%d%d", &num1, &num2, &num3);
sum = num1 + num2 + num3;
printf("%d", sum);

//1_03
puts("Hello, how are you\nI am fine, thank you. And you ?\nOver");

//1_04
puts("x=100,y=200,z=300")

//1_05
puts("       *\n      **\n     * *\n    *  *\n   *   *\n  *    *\n *     *\n***************");

//1_06
size_t black_tea = 1, milk_green = 2, time = 10, make_bt, make_mg;
make_bt = time / black_tea;
make_mg = time / milk_green;
printf("%zu\n%zu", make_bt, make_mg);

//1_07
double num1, num2, sum;
printf("請輸入兩個數：");
scanf("%lf%lf", &num1, &num2);
sum = num1 * num2;
printf("兩數相乘：%.6lf", sum);

//1_08
size_t x, days = 10;
unsigned float eaten = 1.5;
x = days * eaten;
printf("%zu", x);

//1_09
size_t peach = 18, days;
unsigned float eat = 1.5;
days = peach / eat;
printf("%zu", days);

//1_10
int num;
scanf("%d", &num);
if(num % 2 == 1) puts("奇數");
else puts("偶數"):

//1_11
size_t digit1, digit2, digit3, Arms_num, org_num;
scanf("%1zu%1zu%1zu", &digit1, &digit2, &digit3);
org_num = 100 * digit1 + 10 * digit2 + digit3;
Arms_num = pow(digit1, 3) + pow(digit2, 3) + pow(digit3, 3);
if(Arms_num == org_num) puts("Yes, it's an Armstrong number!");
else puts("No, it isn't an Armstrong number");

//1_12
double num1, num2;
scanf("%lf%lf", &num1, &num2);
if(num1 > num2) printf("%.6lf%.6lf", num2, num1);
else printf("%.6lf%.6lf", num1, num2);

//1_13
char char1, char2, char3, char4, char5;
scanf(%c%c%c%c%c, &char1, &char2, &char3, &char4, &char5);
printf("%c%c%c%c%c", char5, char4, char3, char2, char1);

//1_14
unsigned double USD, NTD, trans = 32.35;
scanf("%lf", &USD);
NTD = USD * trans;
printf("%.6lf", NTD);

//1_15
size_t hour, minute, second, ans;
puts("請依序輸入小時/分鐘/秒數(沒有請填 0)");
scanf("%zu%zu%zu", &hour, &minute, &second);
ans = 60 * 60 * hour + 60 * minute + second;
printf("%zu", ans);

//1_16
size_t run = 500, jump, total;
jump = 250 / 10;
total = 5 * run + 140 * jump;
printf("%zu", total);

//1_17
size_t DBP, SBP;
unsigned float MAP;
puts("請輸入舒張壓:");
scanf("%zu", &DBP);
puts("請輸入收縮壓:");
scanf("%zu", &SBP);
MAP = DBP + (SBP - DBP) / 3;
printf("平均動脈壓(MAP):%.2fmmHg", MAP);

//1_18
size_t dry_food_kg = 9, daily_cost_g = 30, days;
days = dry_food_kg * 1000 / daily_cost_g;
printf("%zu", days);

//1_19
size_t efficency = 3, time = 5, total;
total = efficency * time;
printf("小明 %zu 分鐘可以背 %zu 個英文單字", time, total);

//1_20
size_t cost = 3, inventory = 15, total;
total = inventory / cost;
printf("王先生能熬 %zu 鍋大補湯", total);

//1_21
size_t chips = 20, drinks = 20, total;
total = 3 * chips + 5 * drinks;
printf("%zu元", total);

//1_22
size_t time = 1, class = 10, total;
total = class * time;
printf("%zu個月", total);

//1_23
size_t efficency = 40, towels = 120, times;
times = towels / efficency;
printf("%zu次", times);

//1_24
size_t efficency = 2, students = 25, time;
time = students * efficency;
printf("%zu分鐘", time);

//1_25
unsigned double r, pi = 3.14159, area;
printf("請輸入半徑:");
scanf("%lf", &r);
area = pow(r, 2) * pi;
printf("圓面積為%.2lf", area);

//1_26
size_t num1, num2, num3, num4;
scanf("%zu%zu%zu", &num1, &num2, &num3);
num4 = num3 * num2 / num1;
printf("%zu", num4);

//1_27
size_t a, b, total;
scanf("%zu%zu", &a, &b);
total = a * b;
printf("%zu", total);

//1_28
unsigned double pi = 3.14159, r, area, volume;
scanf("%lf", &r);
volume = 4 * pi * pow(r, 3) / 3;
area = 4 * pi * pow(r, 2);
printf("%.2lf%.2lf", volume, area);

//1_29
size_t x1, x2, y1, y2;
unsigned double distance, slope;
scanf("%zu%zu%zu%zu", &x1, &y1, &x2, &y2);
distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
slope = (y1 - y2) / (x1 - x2);
printf("%.2lf%.2lf", distance, slope);

//1_30
unsigned float km, mile;
scanf("%f", &km);
mile = 0.62 * km;
printf("%.1f", mile);

//END OF L1
