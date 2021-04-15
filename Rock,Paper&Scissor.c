#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//user name
int Name(char arr[20])
{
  printf("Enter Name\n");
  gets(arr);
  printf("Welcome To Game ");
  puts(arr);
  return arr;
}

//random number generator
int rNum(int n)
{
  srand(time(NULL));
  return rand() % 3;
}

//score check
int greater(char char1, char char2)
{
  if (char1 == char2)
  {
    return -1;
  }
  else if ((char1 == 'r') && (char2 == 's'))
  {
    return 1;
  }
  else if ((char2 == 'r') && (char1 == 's'))
  {
    return 0;
  }
  if ((char1 == 'p') && (char2 == 'r'))
  {
    return 1;
  }
  else if ((char2 == 'p') && (char1 == 'r'))
  {
    return 0;
  }
  if ((char1 == 's') && (char2 == 'p'))
  {
    return 1;
  }
  else if ((char2 == 's') && (char1 == 'p'))
  {
    return 0;
  }
}

//main function
int main()
{
  int n, playerScor = 0, cpuScor = 0, temp;
  rNum(n);
  char player, cpu;
  char opt[] = {'r', 'p', 's'};

  //game starts here
  char arr[20];
  Name(arr);

  for (int i = 1; i <= 3; i++)
  {

    printf("--------------ROUND-%d--------------\n", i);
    printf("Select\n1 for Rock\n");
    printf("2 for Paper\n3 for Scissors\n");

    //player's turn
    printf("Player's Turn\n");
    scanf("%d", &temp);
    getchar();
    player = opt[temp - 1];
    printf("You Seleced '%c'\n", player);

    //cpu's turn
    printf("CPU's Turn\n");
    temp = rNum(3) + 1;
    cpu = opt[temp - 1];
    printf("CPU Seleced '%c'\n", cpu);

    //calculate score
    if (greater(cpu, player) == 1)
    {
      cpuScor += 1;
      printf("CPU got it!\n");
    }
    else if (greater(cpu, player) == -1)
    {
      cpuScor += 1;
      playerScor += 1;
      printf("Its a Draw!\n");
    }
    else if (greater(cpu, player) == 1)
    {
      playerScor += 1;
      printf("You got it!\n");
    }
    printf("You :%d\nCPU :%d\n\n", playerScor, cpuScor);
  }
  if (playerScor > cpuScor)
  {
    printf("%s Wins!!!\n");
  }
  else if (playerScor < cpuScor)
  {
    printf("CPU Wins!!!\n");
  }
  else
  {
    printf("It's a Draw!!!\n");
  }
  getchar();
  return 0;
}
