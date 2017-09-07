//
//  main.c
//  c_prog_lang
//
//  Created by Charles Fenwick Elliott on 9/7/17.
//  Copyright © 2017 Charles Fenwick Elliott. All rights reserved.
//

#include <stdio.h>


//main()
//{
//    float celsius;
//    int fahr, lower, upper, step;
//    
//    lower = 0;
//    upper = 300;
//    step = 20;
//    
//    fahr = lower;
//    printf("fahr\tcelsius\n");
//    while (fahr <= upper){
//        celsius = (5.0/9.0) * (fahr-32.0);
//        printf("%d\t%.2f\n", fahr, celsius);
//        fahr = fahr + step;
//    }
//}

main(){
    int celsius = 0, fahr;

    printf("cel\tfahr\n");

    while(celsius <= 100){
        fahr = (9.0/5.0) * celsius + 32;
        printf("%d\t%d\n", celsius, fahr);
        celsius = celsius + 5;
    }
}
