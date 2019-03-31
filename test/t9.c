#include <cs50.h>
#include <stdio.h>
#include <string.h>
typedef struct

{
    string name;
    int age;
    int mark;
    string id;
}student;

    int main (void){

        student jove = {"Jove",14,75,"school number 47"};
        student fred = {"Fred",12,100,"school number 47"};
        student nika = {"Nika",10,50,"school number 47"};

    // for (int i=0;i<enrollment;i++)
    // {
    //     printf("%s is %s years.\n",students[i].name, students[i].age);
    // }
    FILE *file = fopen("students.csv", "w");
    if(file)
    {

            fprintf(file, "%s\t%s\n",jove.name, jove.id);
            fprintf(file, "%s\t%s\n",fred.name, fred.id);
            fprintf(file, "%s\t%s\n",nika.name, nika.id);
        fclose(file);
    }
}