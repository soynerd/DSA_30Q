#include <stdio.h>


struct employee {
    int ID;
    char name[100];
    float salary;
};

int main() {
    
    struct employee e1 = {101, "Summit", 50000.0};
    struct employee e2 = {102, "Basti", 55000.0};
    struct employee e3 = {103, "Chadarsh", 16000.0};
    
    struct employee maxSalary = e1;
    
    if (e2.salary > maxSalary.salary)
        maxSalary = e2;

    if (e3.salary > maxSalary.salary)
        maxSalary = e3;
    
    printf("Employee with the highest salary:\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\n", maxSalary.ID, maxSalary.name, maxSalary.salary);

    return 0;
}
