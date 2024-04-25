/*Mini-Calendar*/

#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year)
{
  if (year % 4 == 0 && year % 100 || year % 400 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

/*bool is_leap_year(int year)
{
  if (year % 4 != 0)
  {
    return false;
  }
  else if (year % 100 != 0)
  {
    return true;
  }
  else if (year % 400 != 0)
  {
    return false;
  }
  else
  {
    return true;
  }
}*/
int days_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void add_days_to_date(int *mm, int *dd, int *yy, int days_left_to_add)
{
    int days_left_in_month;
    while (days_left_to_add > 0)
    {
        days_left_in_month = days_in_month[*mm] - *dd;
        if (*mm == 2 && is_leap_year(*yy))
        {
            days_left_in_month++;
        }
        if (days_left_to_add >= days_left_in_month)
        {
            days_left_to_add -= days_left_in_month;
            *dd = 1;
            days_left_to_add--;
            if (*mm != 12)
            {
                *mm = *mm + 1;
            } 
            else
            {
                *mm = 1;
                *yy = *yy + 1;
            }
        } 
        else
        {
            *dd +=  days_left_to_add;
            days_left_to_add = 0;
        }
    }
}

int main()
{
    int dd;
    int mm;
    int yy;
    int days_left_to_add;

    printf("Please enter a date between the years 1800 and 10000 and provide the number of days to add to this date. Use the following format for input mm dd yyyy nn (separated by space)\n");
    scanf("%d%d%d%d", &dd, &mm, &yy, &days_left_to_add);

    add_days_to_date(&dd, &mm, &yy, days_left_to_add);

    printf("%d %d %d\n", dd, mm, yy);
}
/*int main()
{
  int year;

  printf("Please enter a date between year 1800 and 10000: ");
  scanf("%d", &year);
  is_leap_year(year);

  if (is_leap_year(year) == true)
  {
    printf("This is a leap year\n");
  }
  else
  {
    printf("This is not a leap year\n");
  }
}*/