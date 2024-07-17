#include <stdio.h>
float main()
{
        float Basic_Salary, TAX, Allowance_DA, Allowance_HRA, Allowance_MA, Allowance_TA, Deduction_PF, Gross_Salary, Net_Salary;

        printf("Enter Basic salary =");
        scanf("%f", &Basic_Salary);
        printf("\nEnter TAX Deductions =");
        scanf("%f", &TAX); 

        Allowance_DA = Basic_Salary * (0.70);
        Allowance_HRA = Basic_Salary * (0.07);
        Allowance_MA = Basic_Salary * (0.02);
        Allowance_TA = Basic_Salary * (0.04);
        Deduction_PF = Basic_Salary * (0.12);
        Gross_Salary = Basic_Salary + Allowance_DA + Allowance_HRA + Allowance_MA + Allowance_TA; 
        Net_Salary = Gross_Salary - TAX - Deduction_PF;                                           

        printf("\nSr.No.\t\tInput/Output\t\tAmount");
        printf("\n1\t\tBasic Salary\t\t%.2f", Basic_Salary);
        printf("\n2\t\tDA of Basic Salary\t%.2f", Allowance_DA);
        printf("\n3\t\tHRA of Basic Salary\t%.2f", Allowance_HRA);
        printf("\n4\t\tMA of Basic Salary\t%.2f", Allowance_MA);
        printf("\n5\t\tTA of Basic Salary\t%.2f", Allowance_TA);
        printf("\n6\t\tPF of Basic Salary\t%.2f", Deduction_PF);
        printf("\n7\t\tGross salary\t\t%.2f", Gross_Salary);
        printf("\n8\t\tNet salary\t\t%.2f", Net_Salary);

        return 0;
}