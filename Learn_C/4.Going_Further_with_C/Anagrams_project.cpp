/*Anagram Finder*/
#include <stdio.h>
#include <string.h>

int main()
{
  //#2
  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};
  //#3
  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";
  //#7
  int flag = 0;
  //#4
  for (int i = 0; i < strlen(s1); i++)
  {
    //#5
    if (s1[i] == 'a')
    {
      counter1[0]++;
    }
    if (s1[i] == 'b')
    {
      counter1[1]++;
    }    
    if (s1[i] == 'c')
    {
      counter1[2]++;
    }
    if (s1[i] == 'd')
    {
      counter1[3]++;
    }
    //printf("%c", str[i]);
  }
  //#6
  for (int j = 0; j < strlen(s2); j++)
  {
    if (s2[j] == 'a')
    {
      counter2[0]++;
    }
    if (s2[j] == 'b')
    {
      counter2[1]++;
    }    
    if (s2[j] == 'c')
    {
      counter2[2]++;
    }
    if (s2[j] == 'd')
    {
      counter2[3]++;
    }
  }
  //#8
  for (int k = 0; k < 4; k++)
  {
    //#9
    if (counter1[k] != counter2[k])
    {
      flag = 1;
    }
  }
  //#10
  if (flag == 0)
  {
    printf("Anagram\n");
  }
  else if (flag == 1)
  {
    printf("Not Anagram\n");
  }
}