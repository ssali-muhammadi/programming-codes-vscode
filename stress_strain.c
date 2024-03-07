#include <stdio.h>
double calculate_stress(double F, double A)
{
    double stress= F/A;
    return stress;
}
double calculate_strain(double DL, double L0)
{
    double strain=DL/L0;
    return strain;
}
int main()
{
double F,A,DL,L0;
printf("The value of F(in m):");
scanf("%lf", &F);
printf("The value of A(in m^2):");
scanf("%lf", &A);
printf("The value of DL(in m):");
scanf("%lf", &DL);
printf("The value of l0(in m):");
scanf("%lf", &L0);

double stress=calculate_stress(F,A);
double strain=calculate_strain(DL,L0);
printf("Stress: %.2lf  Strain: %.2lf", stress,strain);

return 0;
   
}