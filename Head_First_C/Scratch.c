//
#include <stdio.h>

int main() {

  char pickles[] = "loves balls";

  void bananas(char msg[]) {
    printf("msg is %lo byts in function.\n", sizeof(msg));
  }

  bananas(pickles);
  printf("msg is %lo byts outside of function\n", sizeof(pickles));

  return 0;

}
//stop
