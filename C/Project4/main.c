#include <stdio.h>

int main() {
    float basic_salary, da, hra, ma, ta, pf, it, gross_salary, net_salary;

    // Step 1: Read Basic Salary from user
    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    // Step 2: Calculate Allowances
    da = 0.70 * basic_salary;
    hra = 0.07 * basic_salary;
    ma = 0.02 * basic_salary;
    ta = 0.04 * basic_salary;

    // Step 3: Read Income Tax (IT) from user
    printf("Enter Income Tax: ");
    scanf("%f", &it);

    // Step 4: Calculate Deductions
    pf = 0.12 * basic_salary;

    // Step 5: Calculate Gross Salary
    gross_salary = basic_salary + da + hra + ma + ta;

    // Step 6: Calculate Net Salary
    net_salary = gross_salary - (pf + it);

    // Step 7: Print the results
    printf("\nAllowances:\n");
    printf("DA = %.2f\n", da);
    printf("HRA = %.2f\n", hra);
    printf("MA = %.2f\n", ma);
    printf("TA = %.2f\n", ta);

    printf("\nDeductions:\n");
    printf("PF = %.2f\n", pf);
    printf("IT = %.2f\n", it);

    printf("\nGross Salary = %.2f\n", gross_salary);
    printf("Net Salary = %.2f\n", net_salary);

    printf("23CS043_Debdoot");

    return 0;
}
