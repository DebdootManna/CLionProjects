#include <stdio.h>

int main() {
    int totalPopulation = 80000;
    float percentMen = 52, percentTotalLiteracy = 48, percentLiterateMen = 35;
    int numMen, numTotalLiterate, numLiterateMen, numLiterateWomen, numIlliterateMen, numIlliterateWomen;

    // Calculate number of men
    numMen = (percentMen / 100) * totalPopulation;

    // Calculate total number of literate people
    numTotalLiterate = (percentTotalLiteracy / 100) * totalPopulation;

    // Calculate number of literate men
    numLiterateMen = (percentLiterateMen / 100) * totalPopulation;

    // Calculate number of literate women
    numLiterateWomen = numTotalLiterate - numLiterateMen;

    // Calculate number of illiterate men
    numIlliterateMen = numMen - numLiterateMen;

    // Calculate number of illiterate women
    numIlliterateWomen = totalPopulation - (numMen + numLiterateWomen);

    // Display all data
    printf("Given Data:\n");
    printf("Total Population: %d\n", totalPopulation);
    printf("Percentage of Men: %.2f%%\n", percentMen);
    printf("Percentage of Total Literacy: %.2f%%\n", percentTotalLiteracy);
    printf("Percentage of Literate Men: %.2f%%\n\n", percentLiterateMen);

    printf("Calculated Data:\n");
    printf("Number of Men: %d\n", numMen);
    printf("Number of Total Literate: %d\n", numTotalLiterate);
    printf("Number of Literate Men: %d\n", numLiterateMen);
    printf("Number of Literate Women: %d\n", numLiterateWomen);
    printf("Number of Illiterate Men: %d\n", numIlliterateMen);
    printf("Number of Illiterate Women: %d\n", numIlliterateWomen);

    printf("23CS043_Debdoot");
    return 0;
}
