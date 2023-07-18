#include <stdio.h>

int main(int argc, char* argv[]) {
    float fResult = 0.0f;
    int i = 0;

    for (i = 0 ; i < 20 ; ++ i)
        fResult += 0.1f;
    printf("%.10f\n" , fResult);

    for (i = 0 ; i < 30 ; ++ i)
        fResult += 0.1f;
    printf("%.10f\n" , fResult);


    return 0;
}
