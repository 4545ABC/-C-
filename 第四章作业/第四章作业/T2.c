#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int dayOfWeek(int year, int month, int day);
    int year, month, day, h;
    double money;
    scanf("%d", &year);
    scanf("%d", &month);
    scanf("%d", &day);
    scanf("%lf", &money);
    h = dayOfWeek(year,month,day);
    if (h == 7 || h == 6)
    {
        money = money * 0.9;
    }
else
    {
        if (money > 2000)
            money -= 200;
        else if (money > 1000)
            money -= 100;
        else if (money > 500)
            money -= 50;
    }
if (day == 11 && month == 11)
{
    money = money * 0.9;
}
  
    printf("%.2lf", money);
    return 0;



}
int dayOfWeek(int year, int month, int day)
{
    int y = year, m = month, d = day;
    int w;
    if (m == 1 || m == 2) {
        m = (m == 1 ? 13 : 14);
        y = y - 1;
    }
    w = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400 + 1) % 7;
    if(w==0)
        w+=7;
    return w;
}



