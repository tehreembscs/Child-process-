#include <unistd.h>
#include <stdio.h>
int main()
{
  printf("Parent  Process ID = %d\n Child Process ID  = %d", getppid(), getpid());
  return 0;
}
