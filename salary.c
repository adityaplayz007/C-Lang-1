#include <stdio.h>

int main() {
    
    float base, hra_pct, da_pct, ta_pct, gross_salary;
    
    printf("--- Gross Salary Calculator ---\n");
    
    
    printf("Enter Base Salary: ");
    scanf("%f", &base);
    
    
    printf("Enter HRA %%: "); 
    scanf("%f", &hra_pct);
    
    printf("Enter DA %%: ");
    scanf("%f", &da_pct);
    
    
    printf("Enter TA %%: ");
    scanf("%f", &ta_pct);
    
   
    gross_salary = base * (1 + (hra_pct + da_pct + ta_pct) / 100.0);
    
    
    printf("\nInput Base Salary: %.2f\n", base);
    printf("HRA=%.2f%%, DA=%.2f%%, TA=%.2f%%\n", hra_pct, da_pct, ta_pct);
    printf("Output: Gross Salary: Rs. %.2f\n", gross_salary);
    
    return 0;
}