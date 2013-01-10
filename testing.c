#include <stdio.h>
#include <time.h>

void testing(){
    time_t rawtime;
      struct tm * timeinfo;

      time ( &rawtime );
      timeinfo = localtime ( &rawtime );
      printf ( "Current local time and date: %s", asctime (timeinfo) );
}

int main ()
{
    testing();
    long n;
    long c = 0;
    for (n = 1; n < 3000000; n++){
        long i = n;
        while(i > 1){
            if(i % 2 == 0){
                i /= 2;
                }
            else {
                i = i * 3 + 1;
            }
            c = c + i;
        }
    }
    testing();
    return 0;
}
