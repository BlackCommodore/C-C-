#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**
     * === Days Of The Week ===
     *
     * Goals:
     *  - declare an enum that lists all the days of the week
     *  - make sure it has the value 1 on Monday
     *  - print monday and sunday values
     *  - get user input and store as a day enum
     *  - print a string with the name of the day
     *
     */

    enum weekDays
    {
        Monday = 1,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday,
    };

    enum weekDays enteredDay;
    printf("Monday, sunday = %d and %d\n\n", Monday, Sunday);
    printf("Enter a number of weekday, eg. 1 = Monday, 3 = Wednesday: ");
    scanf("%u", &enteredDay);
    printf("\n");

    switch (enteredDay)
    {
    case Monday:
        printf("Day of %d is Monday", enteredDay);
        break;
    case Tuesday:
        printf("Day of %d is Tuesday", enteredDay);
        break;
    case Wednesday:
        printf("Day of %d is Wednesday", enteredDay);
        break;
    case Thursday:
        printf("Day of %d is Thursday", enteredDay);
        break;
    case Friday:
        printf("Day of %d is Friday", enteredDay);
        break;
    case Saturday:
        printf("Day of %d is Saturday", enteredDay);
        break;
    case Sunday:
        printf("Day of %d is Sunday", enteredDay);
        break;
    default:
        printf("Invalid input");
        break;
    }

    return EXIT_SUCCESS;
}