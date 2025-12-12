#include <stdio.h>

int main() {
    float angle1, angle2, third_angle;
    
    printf("--- Triangle Angle Finder ---\n");
    
    printf("Enter the first angle: ");
    scanf("%f", &angle1);
    
    printf("Enter the second angle: ");
    scanf("%f", &angle2);
    
    third_angle = 180.0 - (angle1 + angle2);
    
    printf("\nInput: First angle: %.2f, Second angle: %.2f\n", angle1, angle2);
    printf("Output: Third angle: %.2f\n", third_angle);
    
    return 0;
}