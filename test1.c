#include "mlearning.h"
int main() {
    // Using linspace function from header file
    double start = 1.0;
    double end = 10.0;
    int n = 10;
    double *result = linspace(start, end, n);
    printf("linspace function\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", result[i]);
    }
    printf("\n");
    free(result);

    // Using logspace function from header file
    double start_1 = 1.0;
    double end_1 = 1000.0;
    int n_1 = 10;

    double base_2 = 10.0;

    double* result_1 = logspace(start_1, end_1, n_1, base_2);
    printf("logspace function\n");
    for (int i = 0; i < n_1; i++) {
        printf("%.2f\n", result_1[i]);
    }
    printf("\n");
    free(result_1);

    // Using Arange function from header file
    double start_2 = 1.0;
    double end_2 = 5.0;
    double step_2 = 0.5;

    double* result_2 = arange(start_2, end_2, step_2);
    printf("arange function\n");
    for (int i = 0; i < (int)((end_2 - start_2) / step_2) + 1; i++) {
        printf("%.2f\n", result_2[i]);
    }
    printf("\n");
    free(result_2);

    //using dimension & shape functions from header file
    int arr[4][5][2][3];
    int result_d = dimension(arr);
    int result_s = shape(arr);
    printf("Dimension of the assumed array is %d and its size is %d.\n", result_d, result_s);

    // using mean function
    int arr[15] = {1,3,5,7,9,11,13,15,17,19};
    printf("%d\n",mean(arr) );

    //using trignometric functions
    double angle;
    printf("Enter an angle in degrees: ");
    int PI=3.14;
    angle = PI/3;
    printf("sin(%lf) = %lf\n", angle, sine(angle));
    printf("cos(%lf) = %lf\n", angle, cosine(angle));
    printf("tan(%lf) = %lf\n", angle, tangent(angle));
    printf("cot(%lf) = %lf\n", angle, cotangent(angle));
    printf("csc(%lf) = %lf\n", angle, cosecant(angle));
    printf("sec(%lf) = %lf\n", angle, secant(angle));

    //inverse trignometric function
    double value;
    value=0.5;
    
    printf("arcsin(%lf) = %lf\n", value, arcsin(value));
    printf("arccos(%lf) = %lf\n", value, arccos(value));
    printf("arctan(%lf) = %lf\n", value, arctan(value));
    printf("arccot(%lf) = %lf\n", value, arccot(value));
    printf("arcsec(%lf) = %lf\n", value, arcsec(value));
    printf("arccsc(%lf) = %lf\n", value, arccsc(value));


    
    return 0;
}
