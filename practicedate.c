#include "types.h"
#include "user.h"
#incliude "practicedate.h"

int main(int argc, char *argv[]){
 struct rtcdate r;
  if(date(&r)) {
    printf(2, "date failed\n");
    exit();
  }
  printf(1, "%d-%d-%d, %d:%d:%d", r.year, r.month, r.day, r.hout, r.minute, r.second);
  exit();
}
