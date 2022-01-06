#include <iostream>

#include <unistd.h>
#include <time.h>
using namespace std;

int main()
{

  int liczba, tab[6];
  srand(time(NULL));

  for (int i = 1; i<=6; i++)
  {
  tab[i] = rand()%49+1;
  sleep(1);
  cout << tab[i] << endl;
  }


  return 0;
}
