#include <stdio.h>
int main()
{
    FILE *file;
    char name[1000];
    long long int id, intake, phone, sec, n, i,count=0;
    file = fopen("test.txt", "a");
    if (file == NULL)
    {
        printf("File is not opened\n");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter the number of student: ");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            count++;
            printf("Enter the name name: ");
            scanf("%s",&name);
            printf("Enter your ID: ");
            scanf("%lld", &id);
            printf("Enter your intake: ");
            scanf("%lld", &intake);
            printf("Enter your phone: ");
            scanf("%lld", &phone);
            printf("Enter your sec: ");
            scanf("%lld", &sec);
            fprintf(file, "Student no: %d\nName: %s\t\tId no: %lld\tIntake: %lld\tPhone: %lld\tSection: %lld",count,name, id, intake, phone, sec);
            fprintf(file,"\n");
            printf("File is successfully Written\n");
            
        }
        fclose(file);
    }
    getchar;
}