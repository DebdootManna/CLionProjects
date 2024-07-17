#include <stdio.h>
int main()
{
        int Total_population = 80000;
        int Literate;
        int Men;
        int LiterateMen;
        int Women;
        int LiterateWomen;
        int IllitrateMen;
        int IllitrateWomen;

        Men = Total_population * (0.52);                    
        Women = Total_population - Men;               
        Literate = Total_population * (0.48);               
        LiterateMen = Total_population * (0.32);            
        IllitrateMen = Men - LiterateMen;       
        LiterateWomen = Literate - LiterateMen; 
        IllitrateWomen = Women - LiterateWomen; 

        printf("Sr.No.\tGet Outcome\t\t\tValue");
        printf("\n1\tTotal Population\t\t%d", Total_population);
        printf("\n2\tNumber of Literate\t\t%d", Literate);
        printf("\n3\tNumber of Men\t\t\t%d", Men);
        printf("\n4\tNumber of Literate Men\t\t%d", LiterateMen);
        printf("\n5\tNumber of Illiterate Men\t%d", IllitrateMen);
        printf("\n6\tNumber of Women\t\t\t%d", Women);
        printf("\n7\tNumber of Literate Women\t%d", LiterateWomen);
        printf("\n8\tNumber of Illiterate Women\t%d\n", IllitrateWomen);

        printf("\n\nDebdoot Manna\n");
        return 0;
}