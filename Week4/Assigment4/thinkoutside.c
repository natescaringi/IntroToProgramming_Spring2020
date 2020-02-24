  #include <stdio.h>

int main(){
  for (int i = 0; i < 10 ; i++) // number of lines
  {
      for (int j = 0; j < (i+1) ; j++) // number of columns
      {
      printf("#");
      }
  printf("\n");
  }
}
