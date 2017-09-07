//
//  main.c
//  c_prog_lang
//
//  Created by Charles Fenwick Elliott on 9/7/17.
//  Copyright © 2017 Charles Fenwick Elliott. All rights reserved.
//

#include <stdio.h>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}

main()
{
    float celsius;
    int fahr, lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    printf("fahr\tcelsius\n");
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%d\t%f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
